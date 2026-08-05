#include "RenegadeSoldierCombatComponent.h"

#include "RenegadeSoldierCombatModule.h"

#include "AIController.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/DamageType.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"
#include "NavigationSystem.h"
#include "Net/UnrealNetwork.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "PhysicsEngine/SkeletalBodySetup.h"
#include "RenegadeCombatMovementBridge.h"
#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeSoldierSpawnPoint.h"
#include "RenegadeWeaponProfile.h"

namespace RenegadeCombatPrivate
{
    static bool IsNeutralTeamName(const FName TeamName)
    {
        return TeamName.IsNone() || TeamName.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase);
    }
}

URenegadeSoldierCombatComponent::URenegadeSoldierCombatComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
    SetIsReplicatedByDefault(true);
}

void URenegadeSoldierCombatComponent::BeginPlay()
{
    Super::BeginPlay();

    ResolveOwnerComponents();
    OriginalActorTransform = GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity;

    CaptureOriginalMeshStateIfNeeded();

    if (OwnerCapsule)
    {
        OriginalCapsuleCollisionEnabled = OwnerCapsule->GetCollisionEnabled();
    }

    if (OwnerMovement)
    {
        OriginalMaxWalkSpeed = OwnerMovement->MaxWalkSpeed;
        bOriginalOrientRotationToMovement = OwnerMovement->bOrientRotationToMovement;
        bOriginalUseControllerDesiredRotation = OwnerMovement->bUseControllerDesiredRotation;
    }

    if (OwnerCharacter)
    {
        bOriginalUseControllerRotationYaw = OwnerCharacter->bUseControllerRotationYaw;
    }

    if (HasAuthority())
    {
        CurrentHealth = FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);
        const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
        CurrentMagazineAmmo = Weapon.bUseMagazine ? FMath::Max(1, Weapon.MagazineSize) : 0;

        if (AActor* Owner = GetOwner())
        {
            Owner->OnTakeAnyDamage.AddDynamic(this, &URenegadeSoldierCombatComponent::HandleOwnerAnyDamage);
        }
    }

    RegisterWithCombatWorld();

    if (HasAuthority() && bAutoStartOnBeginPlay && bAutoCombatEnabled)
    {
        StartAutoCombat();
    }
}

void URenegadeSoldierCombatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    RestoreCombatFacingMode(true);
    StopAllBulletMeshVisuals();

    for (UStaticMeshComponent* BulletComponent : BulletVisualComponents)
    {
        if (IsValid(BulletComponent))
        {
            BulletComponent->DestroyComponent();
        }
    }
    BulletVisualComponents.Reset();
    BulletVisualStates.Reset();
    SetComponentTickEnabled(false);

    if (AActor* Owner = GetOwner())
    {
        Owner->OnTakeAnyDamage.RemoveDynamic(this, &URenegadeSoldierCombatComponent::HandleOwnerAnyDamage);
    }

    UnregisterFromCombatWorld();

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearAllTimersForObject(this);
    }

    Super::EndPlay(EndPlayReason);
}

void URenegadeSoldierCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Cosmetic bullet components run on clients and on the listen-server view.
    UpdateBulletMeshVisuals(DeltaTime);

    if (HasAuthority())
    {
        if (!bIsDead && bLockCombatRotationToCurrentTarget && IsValid(CurrentTarget))
        {
            UpdateCombatFacing(DeltaTime);
        }
        else
        {
            RestoreCombatFacingMode(true);
        }
    }

    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeSoldierCombatComponent, TeamId);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentHealth);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bIsDead);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentTarget);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentMagazineAmmo);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bLockCombatRotationToCurrentTarget);
}

void URenegadeSoldierCombatComponent::RegisterWithCombatWorld()
{
    if (!bRegisterAsCombatTarget)
    {
        return;
    }

    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->RegisterCombatant(this);
        }
    }
}

void URenegadeSoldierCombatComponent::UnregisterFromCombatWorld()
{
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->UnregisterCombatant(this);
        }
    }
}

void URenegadeSoldierCombatComponent::ResolveOwnerComponents()
{
    AActor* Owner = GetOwner();
    OwnerCharacter = Cast<ACharacter>(Owner);
    OwnerCapsule = OwnerCharacter ? OwnerCharacter->GetCapsuleComponent() : (Owner ? Owner->FindComponentByClass<UCapsuleComponent>() : nullptr);
    OwnerMovement = OwnerCharacter ? OwnerCharacter->GetCharacterMovement() : nullptr;

    USkeletalMeshComponent* DefaultMesh = OwnerCharacter ? OwnerCharacter->GetMesh() : (Owner ? Owner->FindComponentByClass<USkeletalMeshComponent>() : nullptr);
    OwnerMesh = ResolveLeaderPoseRagdollMesh(DefaultMesh);

    if (!Owner)
    {
        return;
    }

    TArray<USkeletalMeshComponent*> SkeletalMeshes;
    Owner->GetComponents<USkeletalMeshComponent>(SkeletalMeshes);

    if (!HealthAndRespawn.RagdollMeshComponentTag.IsNone())
    {
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            if (IsValid(Candidate) && Candidate->ComponentHasTag(HealthAndRespawn.RagdollMeshComponentTag))
            {
                OwnerMesh = ResolveLeaderPoseRagdollMesh(Candidate);
                return;
            }
        }
    }

    if (HealthAndRespawn.bAutoFindRagdollMeshWithPhysicsAsset && !HasUsableRagdollPhysics(OwnerMesh))
    {
        // First prefer a real pose leader/standalone component. Simulating a Leader Pose follower
        // independently is unsupported and commonly stretches modular meshes back toward the origin.
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            if (IsValid(Candidate) && !Candidate->LeaderPoseComponent.IsValid() && HasUsableRagdollPhysics(Candidate))
            {
                OwnerMesh = Candidate;
                return;
            }
        }

        // Last fallback: resolve any follower to its leader before testing physics.
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            USkeletalMeshComponent* ResolvedCandidate = ResolveLeaderPoseRagdollMesh(Candidate);
            if (HasUsableRagdollPhysics(ResolvedCandidate))
            {
                OwnerMesh = ResolvedCandidate;
                return;
            }
        }
    }
}

bool URenegadeSoldierCombatComponent::HasUsableRagdollPhysics(const USkeletalMeshComponent* Mesh) const
{
    if (!IsValid(Mesh) || !Mesh->GetSkeletalMeshAsset())
    {
        return false;
    }

    const UPhysicsAsset* PhysicsAsset = Mesh->GetPhysicsAsset();
    return IsValid(PhysicsAsset) && PhysicsAsset->SkeletalBodySetups.Num() > 0;
}

USkeletalMeshComponent* URenegadeSoldierCombatComponent::ResolveLeaderPoseRagdollMesh(USkeletalMeshComponent* Mesh) const
{
    if (!IsValid(Mesh) || !HealthAndRespawn.bResolveLeaderPoseMeshForRagdoll)
    {
        return Mesh;
    }

    USkinnedMeshComponent* Leader = Mesh->LeaderPoseComponent.Get();
    if (!IsValid(Leader))
    {
        return Mesh;
    }

    if (USkeletalMeshComponent* SkeletalLeader = Cast<USkeletalMeshComponent>(Leader))
    {
        return SkeletalLeader;
    }

    return Mesh;
}

FName URenegadeSoldierCombatComponent::ResolveRagdollRootBone() const
{
    if (!IsValid(OwnerMesh) || !HealthAndRespawn.bUseRagdollRootBone)
    {
        return NAME_None;
    }

    if (!HealthAndRespawn.RagdollRootBone.IsNone() && OwnerMesh->GetBoneIndex(HealthAndRespawn.RagdollRootBone) != INDEX_NONE)
    {
        return HealthAndRespawn.RagdollRootBone;
    }

    // Skeletons do not all call the hip body "pelvis". Falling back to the first Physics Asset body
    // keeps the stable "bodies below" path useful for custom Renegade soldier skeletons.
    if (const UPhysicsAsset* PhysicsAsset = OwnerMesh->GetPhysicsAsset())
    {
        for (const USkeletalBodySetup* BodySetup : PhysicsAsset->SkeletalBodySetups)
        {
            if (IsValid(BodySetup) && OwnerMesh->GetBoneIndex(BodySetup->BoneName) != INDEX_NONE)
            {
                return BodySetup->BoneName;
            }
        }
    }

    return NAME_None;
}

void URenegadeSoldierCombatComponent::CaptureOriginalMeshStateIfNeeded()
{
    if (!IsValid(OwnerMesh) || OriginalStateMesh.Get() == OwnerMesh)
    {
        return;
    }

    OriginalStateMesh = OwnerMesh;
    OriginalMeshParent = OwnerMesh->GetAttachParent();
    OriginalMeshRelativeTransform = OwnerMesh->GetRelativeTransform();
    OriginalMeshCollisionProfile = OwnerMesh->GetCollisionProfileName();
    OriginalMeshCollisionEnabled = OwnerMesh->GetCollisionEnabled();
    bOriginalDisableClothSimulation = OwnerMesh->bDisableClothSimulation;
    bOriginalDisablePostProcessBlueprint = OwnerMesh->GetDisablePostProcessBlueprint();
    bOriginalDisableAnimDynamicsAnimNode = !OwnerMesh->GetAllowAnimDynamicsAnimNode();
    bOriginalDisableRigidBodyAnimNode = !OwnerMesh->GetAllowRigidBodyAnimNode();
}

bool URenegadeSoldierCombatComponent::HasAuthority() const
{
    return GetOwner() && GetOwner()->HasAuthority();
}

void URenegadeSoldierCombatComponent::StartAutoCombat()
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    bAutoCombatEnabled = true;
    bLocalAutoCombatStarted = true;

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    const float RefreshRate = FMath::Max(0.05f, Targeting.TargetRefreshSeconds);
    World->GetTimerManager().SetTimer(TargetRefreshTimer, this, &URenegadeSoldierCombatComponent::RefreshTargeting, RefreshRate, true, FMath::FRandRange(0.01f, RefreshRate));

    const float MovementRate = FMath::Max(0.10f, CombatMovement.MovementUpdateSeconds);
    World->GetTimerManager().SetTimer(CombatMovementTimer, this, &URenegadeSoldierCombatComponent::PerformCombatMovement, MovementRate, true, FMath::FRandRange(0.05f, MovementRate));

    RefreshTargeting();
}

void URenegadeSoldierCombatComponent::StopAutoCombat(bool bResumeSplineMovement)
{
    if (!HasAuthority())
    {
        return;
    }

    bAutoCombatEnabled = false;
    bLocalAutoCombatStarted = false;

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TargetRefreshTimer);
        World->GetTimerManager().ClearTimer(CombatMovementTimer);
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
    }

    bReloading = false;
    SetTargetInternal(nullptr, bResumeSplineMovement);
}

void URenegadeSoldierCombatComponent::SetCombatTarget(AActor* NewTarget)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    SetTargetInternal(IsValidCombatTarget(NewTarget) ? NewTarget : nullptr, true);
}

void URenegadeSoldierCombatComponent::ClearCombatTarget(bool bResumeSplineMovement)
{
    if (HasAuthority())
    {
        SetTargetInternal(nullptr, bResumeSplineMovement);
    }
}

void URenegadeSoldierCombatComponent::ForceTargetRefresh()
{
    if (HasAuthority())
    {
        RefreshTargeting();
    }
}

void URenegadeSoldierCombatComponent::SetCombatRotationLockEnabled(bool bEnabled)
{
    if (!HasAuthority())
    {
        return;
    }

    bLockCombatRotationToCurrentTarget = bEnabled;

    if (bEnabled && !bIsDead && IsValid(CurrentTarget))
    {
        ApplyCombatFacingMode();
        UpdateCombatFacing(0.0f);
    }
    else
    {
        RestoreCombatFacingMode(true);
    }

    UpdateComponentTickState();

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::SetTeamId(FName NewTeamId)
{
    if (HasAuthority())
    {
        TeamId = NewTeamId;
        if (AActor* Owner = GetOwner())
        {
            Owner->ForceNetUpdate();
        }
        RefreshTargeting();
    }
}

bool URenegadeSoldierCombatComponent::IsHostileToActor(const AActor* OtherActor) const
{
    if (!IsValid(OtherActor) || OtherActor == GetOwner())
    {
        return false;
    }

    const URenegadeSoldierCombatComponent* OtherCombat = OtherActor->FindComponentByClass<URenegadeSoldierCombatComponent>();
    if (!OtherCombat)
    {
        return false;
    }

    if (RenegadeCombatPrivate::IsNeutralTeamName(TeamId) || RenegadeCombatPrivate::IsNeutralTeamName(OtherCombat->TeamId))
    {
        return false;
    }

    if (TeamId.IsEqual(OtherCombat->TeamId, ENameCase::IgnoreCase))
    {
        return false;
    }

    return bDifferentNonNeutralTeamsAreEnemies;
}

bool URenegadeSoldierCombatComponent::IsValidCombatTarget(const AActor* PossibleTarget) const
{
    if (!IsValid(PossibleTarget) || PossibleTarget == GetOwner() || bIsDead)
    {
        return false;
    }

    const URenegadeSoldierCombatComponent* TargetCombat = PossibleTarget->FindComponentByClass<URenegadeSoldierCombatComponent>();
    if (!TargetCombat || !TargetCombat->bRegisterAsCombatTarget || TargetCombat->bIsDead)
    {
        return false;
    }

    if (!IsHostileToActor(PossibleTarget))
    {
        return false;
    }

    const float LoseRadius = FMath::Max(100.0f, Targeting.SearchRadius * FMath::Max(1.0f, Targeting.LoseTargetRadiusMultiplier));
    return FVector::DistSquared(GetOwner()->GetActorLocation(), PossibleTarget->GetActorLocation()) <= FMath::Square(LoseRadius);
}

float URenegadeSoldierCombatComponent::GetHealthPercent() const
{
    return CurrentHealth / FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);
}

void URenegadeSoldierCombatComponent::Heal(float Amount)
{
    if (HasAuthority() && !bIsDead && Amount > 0.0f)
    {
        ApplyHealthDelta(Amount, nullptr, nullptr);
    }
}

void URenegadeSoldierCombatComponent::ForceKill(AActor* Killer)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = 0.0f;
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, Killer, Killer ? Killer->GetInstigatorController() : nullptr);
    BeginDeath(Killer ? Killer->GetInstigatorController() : nullptr, Killer);
}

void URenegadeSoldierCombatComponent::RespawnNow()
{
    if (!HasAuthority() || !bIsDead)
    {
        return;
    }

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(RespawnTimer);
    }

    const FTransform RespawnTransform = ResolveRespawnTransform();
    bIsDead = false;
    CurrentHealth = FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);
    bReloading = false;
    bInvulnerable = HealthAndRespawn.RespawnInvulnerabilitySeconds > 0.0f;

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    CurrentMagazineAmmo = Weapon.bUseMagazine ? FMath::Max(1, Weapon.MagazineSize) : 0;

    MulticastFinishRespawn(RespawnTransform);

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(InvulnerabilityTimer);
        if (bInvulnerable)
        {
            World->GetTimerManager().SetTimer(InvulnerabilityTimer, this, &URenegadeSoldierCombatComponent::EndRespawnInvulnerability, HealthAndRespawn.RespawnInvulnerabilitySeconds, false);
        }
    }

    if (bLocalAutoCombatStarted)
    {
        StartAutoCombat();
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::SetInvulnerable(bool bNewInvulnerable)
{
    if (HasAuthority())
    {
        bInvulnerable = bNewInvulnerable;
        if (!bInvulnerable && GetWorld())
        {
            GetWorld()->GetTimerManager().ClearTimer(InvulnerabilityTimer);
        }
    }
}

bool URenegadeSoldierCombatComponent::ValidateRagdollSetup(FString& FailureReason)
{
    ResolveOwnerComponents();
    FailureReason.Reset();

    if (!HealthAndRespawn.bEnableAutomaticRagdoll)
    {
        FailureReason = TEXT("Automatic ragdoll is disabled in Health and Respawn settings.");
        return false;
    }

    if (!IsValid(OwnerMesh))
    {
        FailureReason = TEXT("No Skeletal Mesh Component was found for ragdoll. Add a skeletal mesh or assign Ragdoll Mesh Component Tag.");
        return false;
    }

    if (!OwnerMesh->GetSkeletalMeshAsset())
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has no Skeletal Mesh asset assigned."), *OwnerMesh->GetName());
        return false;
    }

    const UPhysicsAsset* PhysicsAsset = OwnerMesh->GetPhysicsAsset();
    if (!IsValid(PhysicsAsset))
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has no Physics Asset. Assign one in the Skeletal Mesh editor."), *OwnerMesh->GetName());
        return false;
    }

    if (PhysicsAsset->SkeletalBodySetups.Num() == 0)
    {
        FailureReason = FString::Printf(TEXT("Physics Asset '%s' contains no physics bodies. Generate bodies and constraints in the Physics Asset Editor."), *PhysicsAsset->GetName());
        return false;
    }

    if (OwnerMesh->LeaderPoseComponent.IsValid())
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' is still a Leader Pose follower. Tag or select the leader/body mesh, or enable Resolve Leader Pose Mesh For Ragdoll."), *OwnerMesh->GetName());
        return false;
    }

    const FVector MeshScale = OwnerMesh->GetComponentScale();
    const float MinimumAbsoluteScale = FMath::Min3(FMath::Abs(MeshScale.X), FMath::Abs(MeshScale.Y), FMath::Abs(MeshScale.Z));
    if (MinimumAbsoluteScale <= KINDA_SMALL_NUMBER)
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has a zero or near-zero component scale, which causes invalid physics transforms."), *OwnerMesh->GetName());
        return false;
    }

    return true;
}

FRenegadeWeaponSettings URenegadeSoldierCombatComponent::GetActiveWeaponSettings() const
{
    if (bUseWeaponProfile && IsValid(WeaponProfile))
    {
        return WeaponProfile->Settings;
    }
    return InlineWeaponSettings;
}

void URenegadeSoldierCombatComponent::SetBulletVisualSpawnComponent(USceneComponent* NewSpawnComponent)
{
    if (!IsValid(NewSpawnComponent))
    {
        RuntimeBulletVisualSpawnComponent = nullptr;
        return;
    }

    if (NewSpawnComponent->GetOwner() != GetOwner())
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s rejected bullet visual spawn component %s because it belongs to a different actor."),
            *GetNameSafe(GetOwner()), *GetNameSafe(NewSpawnComponent));
        return;
    }

    RuntimeBulletVisualSpawnComponent = NewSpawnComponent;
}

void URenegadeSoldierCombatComponent::ClearBulletVisualSpawnComponent()
{
    RuntimeBulletVisualSpawnComponent = nullptr;
}

USceneComponent* URenegadeSoldierCombatComponent::GetBulletVisualSpawnComponent() const
{
    return ResolveBulletVisualSpawnComponent();
}

FVector URenegadeSoldierCombatComponent::GetBulletVisualSpawnLocation() const
{
    return ResolveBulletVisualSpawnLocation(GetMuzzleLocation());
}

void URenegadeSoldierCombatComponent::PreviewBulletMeshVisual(FVector TraceStart, FVector TraceEnd)
{
    SpawnBulletMeshVisual(TraceStart, TraceEnd, nullptr);
}

void URenegadeSoldierCombatComponent::PreviewBulletMeshFromConfiguredSpawn(FVector TraceEnd)
{
    SpawnBulletMeshVisual(GetMuzzleLocation(), TraceEnd, nullptr);
}

bool URenegadeSoldierCombatComponent::PreviewGroundBloodAtLocation(FVector BulletImpactLocation)
{
    FHitResult PreviewHit;
    PreviewHit.ImpactPoint = BulletImpactLocation;
    PreviewHit.Location = BulletImpactLocation;
    return SpawnGroundBloodSplatter(PreviewHit);
}

void URenegadeSoldierCombatComponent::PrepareIncomingCombatHit(const FHitResult& HitResult, const FVector& ShotDirection)
{
    PendingIncomingHit = HitResult;
    PendingIncomingShotDirection = ShotDirection.GetSafeNormal();
    bHasPendingIncomingHit = true;
}

void URenegadeSoldierCombatComponent::ClearIncomingCombatHit()
{
    PendingIncomingHit = FHitResult();
    PendingIncomingShotDirection = FVector::ZeroVector;
    bHasPendingIncomingHit = false;
}

void URenegadeSoldierCombatComponent::HandleOwnerAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead || bInvulnerable || Damage <= 0.0f)
    {
        ClearIncomingCombatHit();
        return;
    }

    ApplyHealthDelta(-Damage, InstigatedBy, DamageCauser);

    AActor* Aggressor = DamageCauser;
    if ((!IsValid(Aggressor) || !IsHostileToActor(Aggressor)) && InstigatedBy)
    {
        Aggressor = InstigatedBy->GetPawn();
    }

    if (!bIsDead && Targeting.bRetaliateWhenDamaged && IsValid(Aggressor) && IsHostileToActor(Aggressor))
    {
        SetTargetInternal(Aggressor, true);
    }

    ClearIncomingCombatHit();
}

void URenegadeSoldierCombatComponent::OnRep_TeamId()
{
}

void URenegadeSoldierCombatComponent::OnRep_CurrentHealth(float PreviousHealth)
{
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
}

void URenegadeSoldierCombatComponent::OnRep_Dead()
{
    if (bIsDead)
    {
        if (!bVisualRagdollActive)
        {
            BeginRagdollVisuals(FVector::ZeroVector, NAME_None);
        }
    }
    else if (bVisualRagdollActive)
    {
        EndRagdollVisuals(GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity);
    }
}

void URenegadeSoldierCombatComponent::OnRep_CurrentTarget()
{
    AActor* PreviousTarget = LastLocallyNotifiedTarget.Get();
    HandleLocalTargetTransition(PreviousTarget, CurrentTarget, !bIsDead);
}

void URenegadeSoldierCombatComponent::RefreshTargeting()
{
    if (!HasAuthority() || !bAutoCombatEnabled || bIsDead)
    {
        return;
    }

    const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
    bool bKeepCurrentTarget = false;

    if (IsValidCombatTarget(CurrentTarget))
    {
        FVector SeenAimLocation;
        if (!Targeting.bRequireLineOfSight || HasLineOfSightTo(CurrentTarget, &SeenAimLocation))
        {
            LastTargetSeenTime = Now;
            LastKnownTargetLocation = CurrentTarget->GetActorLocation();
            bKeepCurrentTarget = true;
        }
        else if ((Now - LastTargetSeenTime) <= FMath::Max(0.0f, Targeting.LostSightGraceSeconds))
        {
            bKeepCurrentTarget = true;
        }
    }

    if (!bKeepCurrentTarget)
    {
        SetTargetInternal(FindBestTarget(), true);
    }
}

AActor* URenegadeSoldierCombatComponent::FindBestTarget() const
{
    if (!GetWorld() || !GetOwner())
    {
        return nullptr;
    }

    URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!Registry)
    {
        return nullptr;
    }

    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    const float SearchRadiusSquared = FMath::Square(FMath::Max(100.0f, Targeting.SearchRadius));
    float BestScore = TNumericLimits<float>::Max();
    AActor* BestActor = nullptr;

    for (URenegadeSoldierCombatComponent* CandidateCombat : Combatants)
    {
        if (!IsValid(CandidateCombat) || CandidateCombat == this)
        {
            continue;
        }

        AActor* CandidateActor = CandidateCombat->GetOwner();
        if (!IsValid(CandidateActor) || CandidateCombat->bIsDead || !CandidateCombat->bRegisterAsCombatTarget || !IsHostileToActor(CandidateActor))
        {
            continue;
        }

        const float DistanceSquared = FVector::DistSquared(OwnerLocation, CandidateActor->GetActorLocation());
        if (DistanceSquared > SearchRadiusSquared)
        {
            continue;
        }

        if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CandidateActor))
        {
            continue;
        }

        const float HealthBias = FMath::Clamp(CandidateCombat->GetHealthPercent(), 0.0f, 1.0f) * 25000.0f;
        const float Score = DistanceSquared + HealthBias;
        if (Score < BestScore)
        {
            BestScore = Score;
            BestActor = CandidateActor;
        }
    }

    return BestActor;
}

bool URenegadeSoldierCombatComponent::HasLineOfSightTo(const AActor* Target, FVector* OutAimLocation) const
{
    if (!IsValid(Target) || !GetWorld() || !GetOwner())
    {
        return false;
    }

    const FVector Start = GetMuzzleLocation();
    const FVector AimLocation = GetAimLocation(Target);
    if (OutAimLocation)
    {
        *OutAimLocation = AimLocation;
    }

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeCombatLineOfSight), false, GetOwner());
    QueryParams.AddIgnoredActor(GetOwner());

    FHitResult Hit;
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    const bool bBlocked = GetWorld()->LineTraceSingleByChannel(Hit, Start, AimLocation, Weapon.TraceChannel, QueryParams);
    return !bBlocked || Hit.GetActor() == Target;
}

FVector URenegadeSoldierCombatComponent::GetAimLocation(const AActor* Target) const
{
    if (!IsValid(Target))
    {
        return FVector::ZeroVector;
    }

    if (const URenegadeSoldierCombatComponent* TargetCombat = Target->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        if (TargetCombat->OwnerMesh)
        {
            const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
            if (!Weapon.AimBoneName.IsNone() && TargetCombat->OwnerMesh->DoesSocketExist(Weapon.AimBoneName))
            {
                return TargetCombat->OwnerMesh->GetSocketLocation(Weapon.AimBoneName) + FVector(0.0f, 0.0f, Targeting.AimHeightOffset);
            }
        }
    }

    return Target->GetActorLocation() + FVector(0.0f, 0.0f, Targeting.AimHeightOffset + 65.0f);
}

FVector URenegadeSoldierCombatComponent::GetMuzzleLocation() const
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (OwnerMesh && !Weapon.MuzzleSocketName.IsNone() && OwnerMesh->DoesSocketExist(Weapon.MuzzleSocketName))
    {
        return OwnerMesh->GetSocketLocation(Weapon.MuzzleSocketName);
    }

    if (OwnerCharacter)
    {
        FVector EyeLocation;
        FRotator EyeRotation;
        OwnerCharacter->GetActorEyesViewPoint(EyeLocation, EyeRotation);
        return EyeLocation;
    }

    return GetOwner() ? GetOwner()->GetActorLocation() + FVector(0.0f, 0.0f, 70.0f) : FVector::ZeroVector;
}

void URenegadeSoldierCombatComponent::SetTargetInternal(AActor* NewTarget, bool bResumeSplineWhenCleared)
{
    if (!HasAuthority())
    {
        return;
    }

    if (NewTarget && !IsValidCombatTarget(NewTarget))
    {
        NewTarget = nullptr;
    }

    AActor* PreviousTarget = CurrentTarget;
    if (PreviousTarget == NewTarget)
    {
        return;
    }

    CurrentTarget = NewTarget;
    HandleLocalTargetTransition(PreviousTarget, NewTarget, bResumeSplineWhenCleared);

    if (NewTarget)
    {
        LastTargetSeenTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
        LastKnownTargetLocation = NewTarget->GetActorLocation();
        const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
        BurstShotsRemaining = FMath::RandRange(FMath::Max(1, Weapon.MinimumBurstShots), FMath::Max(FMath::Max(1, Weapon.MinimumBurstShots), Weapon.MaximumBurstShots));
        ScheduleNextShot(0.05f + FMath::FRandRange(0.0f, 0.12f));
    }
    else if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
        bReloading = false;
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::HandleLocalTargetTransition(AActor* PreviousTarget, AActor* NewTarget, bool bResumeSplineWhenCleared)
{
    LastLocallyNotifiedTarget = NewTarget;
    OnTargetChanged.Broadcast(PreviousTarget, NewTarget);

    if (NewTarget)
    {
        OnCombatStarted.Broadcast(NewTarget);
        if (HasAuthority())
        {
            TakeCombatMovementControl(NewTarget);
            if (bLockCombatRotationToCurrentTarget)
            {
                ApplyCombatFacingMode();
                UpdateCombatFacing(0.0f);
            }
            UpdateComponentTickState();
        }
    }
    else if (PreviousTarget)
    {
        const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
        OnCombatEnded.Broadcast(PreviousTarget, ResumeLocation);
        if (HasAuthority())
        {
            RestoreCombatFacingMode(true);

            if (bResumeSplineWhenCleared && !bIsDead)
            {
                ReleaseCombatMovementControl();
            }
            else
            {
                if (AAIController* AIController = GetOwningAIController())
                {
                    AIController->ClearFocus(EAIFocusPriority::Gameplay);
                    AIController->StopMovement();
                }
                bMovementControlTaken = false;
            }
            UpdateComponentTickState();
        }
    }
}

void URenegadeSoldierCombatComponent::ScheduleNextShot(float DelaySeconds)
{
    if (!HasAuthority() || bIsDead || !CurrentTarget || !GetWorld())
    {
        return;
    }

    GetWorld()->GetTimerManager().SetTimer(FireTimer, this, &URenegadeSoldierCombatComponent::TryFireShot, FMath::Max(0.01f, DelaySeconds), false);
}

void URenegadeSoldierCombatComponent::TryFireShot()
{
    if (!HasAuthority() || bIsDead || bReloading || !IsValidCombatTarget(CurrentTarget))
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    const FVector TraceStart = GetMuzzleLocation();
    const FVector AimLocation = GetAimLocation(CurrentTarget);
    const float TargetDistance = FVector::Distance(TraceStart, AimLocation);

    if (TargetDistance > FMath::Max(1.0f, Weapon.MaximumRange))
    {
        ScheduleNextShot(0.15f);
        return;
    }

    if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CurrentTarget))
    {
        ScheduleNextShot(0.12f);
        return;
    }

    if (Weapon.bUseMagazine && CurrentMagazineAmmo <= 0)
    {
        StartReload();
        return;
    }

    FVector ShotDirection = (AimLocation - TraceStart).GetSafeNormal();
    float SpreadDegrees = FMath::Max(0.0f, Weapon.HipFireSpreadDegrees);
    if (GetOwner() && GetOwner()->GetVelocity().SizeSquared2D() > FMath::Square(20.0f))
    {
        SpreadDegrees += FMath::Max(0.0f, Weapon.MovingSpreadPenaltyDegrees);
    }
    ShotDirection = FMath::VRandCone(ShotDirection, FMath::DegreesToRadians(SpreadDegrees));

    const FVector DesiredTraceEnd = TraceStart + ShotDirection * FMath::Max(1.0f, Weapon.MaximumRange);
    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeCombatWeaponTrace), true, GetOwner());
    QueryParams.AddIgnoredActor(GetOwner());

    FHitResult Hit;
    const bool bBlockingHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, DesiredTraceEnd, Weapon.TraceChannel, QueryParams);
    const FVector TraceEnd = bBlockingHit ? Hit.ImpactPoint : DesiredTraceEnd;

    AActor* HitActor = bBlockingHit ? Hit.GetActor() : nullptr;
    const bool bCanDamageHitActor = IsValid(HitActor) && (Weapon.bAllowFriendlyFire || IsHostileToActor(HitActor));
    URenegadeSoldierCombatComponent* HitCombat = bCanDamageHitActor
        ? HitActor->FindComponentByClass<URenegadeSoldierCombatComponent>()
        : nullptr;
    const bool bDamagedCombatActor = bCanDamageHitActor && (!HitCombat || !HitCombat->bIsDead);
    const bool bSpawnGroundBloodForHit = bDamagedCombatActor && HitCombat != nullptr;

    MulticastShotFired(TraceStart, TraceEnd, bBlockingHit, Hit, bSpawnGroundBloodForHit);

    if (Weapon.bUseMagazine)
    {
        CurrentMagazineAmmo = FMath::Max(0, CurrentMagazineAmmo - 1);
    }

    if (bDamagedCombatActor)
    {
        const float Damage = CalculateDamageForHit(Weapon, Hit, FVector::Distance(TraceStart, Hit.ImpactPoint));
        if (HitCombat)
        {
            HitCombat->PrepareIncomingCombatHit(Hit, ShotDirection);
        }

        UGameplayStatics::ApplyPointDamage(
            HitActor,
            Damage,
            ShotDirection,
            Hit,
            GetOwningController(),
            GetOwner(),
            Weapon.DamageTypeClass);

        if (HitCombat)
        {
            HitCombat->ClearIncomingCombatHit();
        }
    }

    --BurstShotsRemaining;
    const float SecondsPerShot = 60.0f / FMath::Max(1.0f, Weapon.RoundsPerMinute);

    if (Weapon.bUseMagazine && CurrentMagazineAmmo <= 0)
    {
        StartReload();
    }
    else if (BurstShotsRemaining > 0)
    {
        ScheduleNextShot(SecondsPerShot);
    }
    else
    {
        const int32 MinBurst = FMath::Max(1, Weapon.MinimumBurstShots);
        const int32 MaxBurst = FMath::Max(MinBurst, Weapon.MaximumBurstShots);
        BurstShotsRemaining = FMath::RandRange(MinBurst, MaxBurst);
        ScheduleNextShot(FMath::FRandRange(FMath::Max(0.0f, Weapon.MinimumBurstPause), FMath::Max(Weapon.MinimumBurstPause, Weapon.MaximumBurstPause)));
    }
}

bool URenegadeSoldierCombatComponent::ShouldRunCosmeticVisuals() const
{
    const UWorld* World = GetWorld();
    return World && World->GetNetMode() != NM_DedicatedServer;
}

USceneComponent* URenegadeSoldierCombatComponent::ResolveBulletVisualSpawnComponent() const
{
    if (IsValid(RuntimeBulletVisualSpawnComponent) && RuntimeBulletVisualSpawnComponent->GetOwner() == GetOwner())
    {
        return RuntimeBulletVisualSpawnComponent;
    }

    if (GetOwner())
    {
        if (UActorComponent* ReferencedComponent = BulletVisualSpawnComponent.GetComponent(GetOwner()))
        {
            if (USceneComponent* ReferencedSceneComponent = Cast<USceneComponent>(ReferencedComponent))
            {
                return ReferencedSceneComponent;
            }
        }

        if (!BulletVisualSpawnComponentTag.IsNone())
        {
            const TArray<UActorComponent*> TaggedComponents = GetOwner()->GetComponentsByTag(
                USceneComponent::StaticClass(), BulletVisualSpawnComponentTag);

            for (UActorComponent* TaggedComponent : TaggedComponents)
            {
                if (USceneComponent* TaggedSceneComponent = Cast<USceneComponent>(TaggedComponent))
                {
                    return TaggedSceneComponent;
                }
            }
        }
    }

    return nullptr;
}

FVector URenegadeSoldierCombatComponent::ResolveBulletVisualSpawnLocation(const FVector& FallbackTraceStart) const
{
    if (const USceneComponent* SpawnComponent = ResolveBulletVisualSpawnComponent())
    {
        return SpawnComponent->GetComponentTransform().TransformPosition(BulletVisualSpawnRelativeOffset);
    }

    return FallbackTraceStart;
}

UStaticMeshComponent* URenegadeSoldierCombatComponent::AcquireBulletVisualComponent(int32& OutVisualIndex)
{
    OutVisualIndex = INDEX_NONE;
    if (!ShouldRunCosmeticVisuals() || !IsValid(CombatVisuals.BulletMesh) || !GetOwner() || !GetWorld())
    {
        return nullptr;
    }

    const int32 PoolLimit = FMath::Clamp(CombatVisuals.BulletVisualPoolSize, 1, 32);
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        if (!BulletVisualStates[Index].bActive && BulletVisualComponents.IsValidIndex(Index) && IsValid(BulletVisualComponents[Index]))
        {
            OutVisualIndex = Index;
            return BulletVisualComponents[Index];
        }
    }

    if (BulletVisualComponents.Num() < PoolLimit)
    {
        UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(GetOwner(), NAME_None, RF_Transient);
        if (!IsValid(NewComponent))
        {
            return nullptr;
        }

        GetOwner()->AddInstanceComponent(NewComponent);
        NewComponent->SetMobility(EComponentMobility::Movable);
        NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        NewComponent->SetGenerateOverlapEvents(false);
        NewComponent->SetCanEverAffectNavigation(false);
        NewComponent->SetCastShadow(CombatVisuals.bBulletVisualCastsShadow);
        NewComponent->SetVisibility(false, true);
        NewComponent->SetHiddenInGame(true, true);
        NewComponent->RegisterComponent();

        OutVisualIndex = BulletVisualComponents.Add(NewComponent);
        BulletVisualStates.SetNum(BulletVisualComponents.Num());
        return NewComponent;
    }

    // At the cap, recycle the bullet nearest to arrival instead of allocating more components.
    float BestProgress = -1.0f;
    int32 BestIndex = INDEX_NONE;
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        const FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[Index];
        const float Progress = State.DurationSeconds > KINDA_SMALL_NUMBER ? State.ElapsedSeconds / State.DurationSeconds : 1.0f;
        if (Progress > BestProgress && BulletVisualComponents.IsValidIndex(Index) && IsValid(BulletVisualComponents[Index]))
        {
            BestProgress = Progress;
            BestIndex = Index;
        }
    }

    if (BestIndex != INDEX_NONE)
    {
        DeactivateBulletVisual(BestIndex, true);
        OutVisualIndex = BestIndex;
        return BulletVisualComponents[BestIndex];
    }

    return nullptr;
}

bool URenegadeSoldierCombatComponent::SpawnBulletMeshVisual(const FVector& TraceStart, const FVector& TraceEnd, const FHitResult* BloodHitToDelay)
{
    if (!CombatVisuals.bEnableBulletMeshVisual || !IsValid(CombatVisuals.BulletMesh) || !ShouldRunCosmeticVisuals())
    {
        return false;
    }

    const FVector ConfiguredVisualStart = ResolveBulletVisualSpawnLocation(TraceStart);
    FVector Direction = TraceEnd - ConfiguredVisualStart;
    const float RawDistance = Direction.Size();
    if (RawDistance <= KINDA_SMALL_NUMBER)
    {
        return false;
    }
    Direction /= RawDistance;

    FVector VisualStart = ConfiguredVisualStart + Direction * FMath::Max(0.0f, CombatVisuals.BulletVisualMuzzleForwardOffset);
    FVector VisualEnd = TraceEnd - Direction * FMath::Min(FMath::Max(0.0f, CombatVisuals.BulletVisualImpactStopShortDistance), RawDistance * 0.25f);
    if (FVector::DistSquared(VisualStart, VisualEnd) <= 1.0f)
    {
        VisualStart = ConfiguredVisualStart;
        VisualEnd = TraceEnd;
    }

    int32 VisualIndex = INDEX_NONE;
    UStaticMeshComponent* BulletComponent = AcquireBulletVisualComponent(VisualIndex);
    if (!IsValid(BulletComponent) || !BulletVisualStates.IsValidIndex(VisualIndex))
    {
        return false;
    }

    BulletComponent->SetStaticMesh(CombatVisuals.BulletMesh);
    BulletComponent->SetCastShadow(CombatVisuals.bBulletVisualCastsShadow);
    if (IsValid(CombatVisuals.BulletMaterialOverride))
    {
        BulletComponent->SetMaterial(0, CombatVisuals.BulletMaterialOverride);
    }
    else
    {
        BulletComponent->SetMaterial(0, nullptr);
    }

    const FVector TravelDirection = (VisualEnd - VisualStart).GetSafeNormal();
    const FRotator TravelRotation = TravelDirection.Rotation() + CombatVisuals.BulletMeshRotationOffset;
    const float TravelDistance = FVector::Distance(VisualStart, VisualEnd);
    const float UnclampedDuration = TravelDistance / FMath::Max(100.0f, CombatVisuals.BulletVisualSpeed);
    const float MinDuration = FMath::Max(0.001f, CombatVisuals.MinimumBulletVisualSeconds);
    const float MaxDuration = FMath::Max(MinDuration, CombatVisuals.MaximumBulletVisualSeconds);

    FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[VisualIndex];
    State.StartLocation = VisualStart;
    State.EndLocation = VisualEnd;
    State.TravelRotation = TravelRotation;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FMath::Clamp(UnclampedDuration, MinDuration, MaxDuration);
    State.bActive = true;
    State.bSpawnBloodOnArrival = BloodHitToDelay != nullptr;
    State.PendingBloodHit = BloodHitToDelay ? *BloodHitToDelay : FHitResult();

    BulletComponent->SetWorldLocationAndRotation(VisualStart, TravelRotation, false, nullptr, ETeleportType::TeleportPhysics);
    BulletComponent->SetWorldScale3D(CombatVisuals.BulletMeshScale);
    BulletComponent->SetHiddenInGame(false, true);
    BulletComponent->SetVisibility(true, true);

    SetComponentTickEnabled(true);
    return true;
}

void URenegadeSoldierCombatComponent::UpdateBulletMeshVisuals(float DeltaTime)
{
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[Index];
        if (!State.bActive)
        {
            continue;
        }

        if (!BulletVisualComponents.IsValidIndex(Index) || !IsValid(BulletVisualComponents[Index]))
        {
            State = FRenegadeBulletVisualRuntimeState();
            continue;
        }

        State.ElapsedSeconds += FMath::Max(0.0f, DeltaTime);
        const float Alpha = State.DurationSeconds > KINDA_SMALL_NUMBER
            ? FMath::Clamp(State.ElapsedSeconds / State.DurationSeconds, 0.0f, 1.0f)
            : 1.0f;

        BulletVisualComponents[Index]->SetWorldLocationAndRotation(
            FMath::Lerp(State.StartLocation, State.EndLocation, Alpha),
            State.TravelRotation,
            false,
            nullptr,
            ETeleportType::TeleportPhysics);

        if (Alpha >= 1.0f)
        {
            DeactivateBulletVisual(Index, true);
        }
    }
}

bool URenegadeSoldierCombatComponent::HasActiveBulletMeshVisuals() const
{
    for (const FRenegadeBulletVisualRuntimeState& State : BulletVisualStates)
    {
        if (State.bActive)
        {
            return true;
        }
    }
    return false;
}

void URenegadeSoldierCombatComponent::DeactivateBulletVisual(int32 VisualIndex, bool bProcessPendingBlood)
{
    if (!BulletVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    const FRenegadeBulletVisualRuntimeState PreviousState = BulletVisualStates[VisualIndex];
    BulletVisualStates[VisualIndex] = FRenegadeBulletVisualRuntimeState();

    if (BulletVisualComponents.IsValidIndex(VisualIndex) && IsValid(BulletVisualComponents[VisualIndex]))
    {
        BulletVisualComponents[VisualIndex]->SetVisibility(false, true);
        BulletVisualComponents[VisualIndex]->SetHiddenInGame(true, true);
    }

    if (bProcessPendingBlood && PreviousState.bSpawnBloodOnArrival)
    {
        SpawnGroundBloodSplatter(PreviousState.PendingBloodHit);
    }
}

void URenegadeSoldierCombatComponent::StopAllBulletMeshVisuals()
{
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        DeactivateBulletVisual(Index, false);
    }
}

bool URenegadeSoldierCombatComponent::SpawnGroundBloodSplatter(const FHitResult& BulletHit)
{
    if (!CombatVisuals.bEnableGroundBloodSplatter || !ShouldRunCosmeticVisuals() || !GetWorld())
    {
        return false;
    }

    TArray<UMaterialInterface*> ValidMaterials;
    for (const TObjectPtr<UMaterialInterface>& MaterialPtr : CombatVisuals.GroundBloodDecalMaterials)
    {
        UMaterialInterface* Material = MaterialPtr.Get();
        if (IsValid(Material))
        {
            ValidMaterials.Add(Material);
        }
    }

    const bool bHasDecalMaterial = !ValidMaterials.IsEmpty();
    const bool bHasActorEffect = CombatVisuals.GroundBloodEffectActorClass != nullptr;
    if (!bHasDecalMaterial && !bHasActorEffect)
    {
        return false;
    }

    if (FMath::FRand() > FMath::Clamp(CombatVisuals.GroundBloodSpawnChance, 0.0f, 1.0f))
    {
        return false;
    }

    const float Now = GetWorld()->GetTimeSeconds();
    if (Now - LastGroundBloodTime < FMath::Max(0.0f, CombatVisuals.MinimumSecondsBetweenGroundBlood))
    {
        return false;
    }

    const FVector SourceLocation = !BulletHit.ImpactPoint.IsNearlyZero() ? BulletHit.ImpactPoint : BulletHit.Location;
    const FVector TraceStart = SourceLocation + FVector::UpVector * FMath::Max(1.0f, CombatVisuals.GroundBloodTraceUpDistance);
    const FVector TraceEnd = SourceLocation - FVector::UpVector * FMath::Max(1.0f, CombatVisuals.GroundBloodTraceDownDistance);

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeGroundBloodTrace), false, GetOwner());
    QueryParams.AddIgnoredActor(GetOwner());
    if (AActor* HitActor = BulletHit.GetActor())
    {
        QueryParams.AddIgnoredActor(HitActor);
    }

    FHitResult GroundHit;
    if (!GetWorld()->LineTraceSingleByChannel(GroundHit, TraceStart, TraceEnd, CombatVisuals.GroundBloodTraceChannel, QueryParams))
    {
        return false;
    }

    const FVector SpawnLocation = GroundHit.ImpactPoint + GroundHit.ImpactNormal * FMath::Max(0.0f, CombatVisuals.GroundBloodSurfaceOffset);
    FRotator SpawnRotation = GroundHit.ImpactNormal.Rotation();
    SpawnRotation.Roll += FMath::FRandRange(0.0f, 360.0f);

    UDecalComponent* SpawnedDecal = nullptr;
    if (bHasDecalMaterial)
    {
        UMaterialInterface* SelectedMaterial = ValidMaterials[FMath::RandRange(0, ValidMaterials.Num() - 1)];
        const float MinSize = FMath::Max(1.0f, FMath::Min(CombatVisuals.GroundBloodSizeRange.X, CombatVisuals.GroundBloodSizeRange.Y));
        const float MaxSize = FMath::Max(MinSize, FMath::Max(CombatVisuals.GroundBloodSizeRange.X, CombatVisuals.GroundBloodSizeRange.Y));
        const float DecalSize = FMath::FRandRange(MinSize, MaxSize);

        SpawnedDecal = UGameplayStatics::SpawnDecalAtLocation(
            this,
            SelectedMaterial,
            FVector(FMath::Max(1.0f, CombatVisuals.GroundBloodDecalDepth), DecalSize, DecalSize),
            SpawnLocation,
            SpawnRotation,
            FMath::Max(0.0f, CombatVisuals.GroundBloodLifeSeconds));

        if (IsValid(SpawnedDecal) && CombatVisuals.GroundBloodLifeSeconds > 0.0f && CombatVisuals.GroundBloodFadeSeconds > 0.0f)
        {
            const float FadeDuration = FMath::Min(CombatVisuals.GroundBloodFadeSeconds, CombatVisuals.GroundBloodLifeSeconds);
            SpawnedDecal->SetFadeOut(FMath::Max(0.0f, CombatVisuals.GroundBloodLifeSeconds - FadeDuration), FadeDuration, true);
        }
    }

    if (bHasActorEffect)
    {
        FActorSpawnParameters SpawnParameters;
        SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParameters.ObjectFlags |= RF_Transient;
        AActor* EffectActor = GetWorld()->SpawnActor<AActor>(CombatVisuals.GroundBloodEffectActorClass, SpawnLocation, SpawnRotation, SpawnParameters);
        if (IsValid(EffectActor))
        {
            // The shot multicast already creates one local cosmetic on every view; never replicate this helper actor.
            EffectActor->SetReplicates(false);
            if (CombatVisuals.GroundBloodLifeSeconds > 0.0f)
            {
                EffectActor->SetLifeSpan(CombatVisuals.GroundBloodLifeSeconds);
            }
        }
    }

    LastGroundBloodTime = Now;
    OnGroundBloodSpawned.Broadcast(SpawnedDecal, BulletHit, GroundHit);
    return true;
}

void URenegadeSoldierCombatComponent::UpdateComponentTickState()
{
    const bool bNeedsCombatFacing = HasAuthority() && !bIsDead && bLockCombatRotationToCurrentTarget && IsValid(CurrentTarget);
    SetComponentTickEnabled(bNeedsCombatFacing || HasActiveBulletMeshVisuals());
}

void URenegadeSoldierCombatComponent::StartReload()
{
    if (!HasAuthority() || bReloading || bIsDead || !GetWorld())
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (!Weapon.bUseMagazine)
    {
        return;
    }

    bReloading = true;
    MulticastReloadStarted();
    GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &URenegadeSoldierCombatComponent::FinishReload, FMath::Max(0.01f, Weapon.ReloadSeconds), false);
}

void URenegadeSoldierCombatComponent::FinishReload()
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    CurrentMagazineAmmo = FMath::Max(1, Weapon.MagazineSize);
    bReloading = false;
    MulticastReloadFinished();

    if (CurrentTarget)
    {
        ScheduleNextShot(0.05f);
    }
}

float URenegadeSoldierCombatComponent::CalculateDamageForHit(const FRenegadeWeaponSettings& Weapon, const FHitResult& Hit, float Distance) const
{
    float Damage = FMath::Max(0.0f, Weapon.DamagePerShot);
    const float MaxRange = FMath::Max(1.0f, Weapon.MaximumRange);
    const float RangeFraction = FMath::Clamp(Distance / MaxRange, 0.0f, 1.0f);
    const float FalloffStart = FMath::Clamp(Weapon.DamageFalloffStartFraction, 0.0f, 1.0f);

    if (RangeFraction > FalloffStart)
    {
        const float Alpha = (RangeFraction - FalloffStart) / FMath::Max(KINDA_SMALL_NUMBER, 1.0f - FalloffStart);
        Damage *= FMath::Lerp(1.0f, FMath::Clamp(Weapon.MinimumLongRangeDamageMultiplier, 0.0f, 1.0f), Alpha);
    }

    if (Weapon.CriticalBones.Contains(Hit.BoneName))
    {
        Damage *= FMath::Max(1.0f, Weapon.CriticalHitMultiplier);
    }

    return Damage;
}

bool URenegadeSoldierCombatComponent::CanTakeCombatMovementControl() const
{
    if (!CombatMovement.bEnableCombatMovement || !OwnerCharacter || !GetOwningAIController())
    {
        return false;
    }

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        return IRenegadeCombatMovementBridge::Execute_CanCombatTakeMovementControl(Owner);
    }

    return true;
}

void URenegadeSoldierCombatComponent::TakeCombatMovementControl(AActor* AgainstTarget)
{
    if (!HasAuthority())
    {
        return;
    }

    if (bLockCombatRotationToCurrentTarget)
    {
        ApplyCombatFacingMode();
        if (AAIController* AIController = GetOwningAIController())
        {
            AIController->SetFocus(AgainstTarget, EAIFocusPriority::Gameplay);
        }
    }

    if (!CanTakeCombatMovementControl())
    {
        return;
    }

    if (bMovementControlTaken)
    {
        return;
    }

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (OwnerMovement && OriginalMaxWalkSpeed > 0.0f)
    {
        OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed * FMath::Max(0.1f, CombatMovement.CombatWalkSpeedMultiplier);
    }

    bMovementControlTaken = true;
    OnSplineMovementPauseRequested.Broadcast(AgainstTarget);

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        IRenegadeCombatMovementBridge::Execute_CombatMovementInterrupted(Owner, AgainstTarget);
    }
}

void URenegadeSoldierCombatComponent::ReleaseCombatMovementControl()
{
    if (!HasAuthority())
    {
        return;
    }

    RestoreCombatFacingMode(true);

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (!bMovementControlTaken)
    {
        UpdateComponentTickState();
        return;
    }

    if (OwnerMovement && OriginalMaxWalkSpeed > 0.0f)
    {
        OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed;
    }

    const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
    OnSplineMovementResumeRequested.Broadcast(ResumeLocation);

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        IRenegadeCombatMovementBridge::Execute_CombatMovementResumed(Owner, ResumeLocation);
    }

    bMovementControlTaken = false;
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::ApplyCombatFacingMode()
{
    if (!bLockCombatRotationToCurrentTarget)
    {
        return;
    }

    ResolveOwnerComponents();

    if (OwnerMovement)
    {
        // Prevent the movement vector from turning the body away from the enemy.
        OwnerMovement->bOrientRotationToMovement = false;
        OwnerMovement->bUseControllerDesiredRotation = true;
    }

    if (OwnerCharacter)
    {
        // The controller's combat look rotation now owns character yaw.
        OwnerCharacter->bUseControllerRotationYaw = true;
    }

    bCombatFacingModeApplied = true;
}

void URenegadeSoldierCombatComponent::RestoreCombatFacingMode(bool bClearGameplayFocus)
{
    if (bCombatFacingModeApplied)
    {
        ResolveOwnerComponents();

        if (OwnerMovement)
        {
            OwnerMovement->bOrientRotationToMovement = bOriginalOrientRotationToMovement;
            OwnerMovement->bUseControllerDesiredRotation = bOriginalUseControllerDesiredRotation;
        }

        if (OwnerCharacter)
        {
            OwnerCharacter->bUseControllerRotationYaw = bOriginalUseControllerRotationYaw;
        }

        bCombatFacingModeApplied = false;
    }

    if (bClearGameplayFocus)
    {
        if (AAIController* AIController = GetOwningAIController())
        {
            AIController->ClearFocus(EAIFocusPriority::Gameplay);
        }
    }
}

void URenegadeSoldierCombatComponent::UpdateCombatFacing(float DeltaTime)
{
    if (!HasAuthority() || bIsDead || !bLockCombatRotationToCurrentTarget || !IsValid(CurrentTarget) || !GetOwner())
    {
        return;
    }

    ApplyCombatFacingMode();

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    FVector ToTarget = GetAimLocation(CurrentTarget) - OwnerLocation;
    ToTarget.Z = 0.0f;

    if (ToTarget.IsNearlyZero())
    {
        return;
    }

    const FRotator DesiredActorRotation(0.0f, ToTarget.Rotation().Yaw, 0.0f);
    const float RotationSpeed = FMath::Max(0.0f, CombatTargetRotationSpeedDegrees);
    const FRotator NewActorRotation = RotationSpeed <= KINDA_SMALL_NUMBER || DeltaTime <= 0.0f
        ? DesiredActorRotation
        : FMath::RInterpConstantTo(GetOwner()->GetActorRotation(), DesiredActorRotation, DeltaTime, RotationSpeed);

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->SetFocus(CurrentTarget, EAIFocusPriority::Gameplay);
        FRotator DesiredControlRotation = (GetAimLocation(CurrentTarget) - OwnerLocation).Rotation();
        DesiredControlRotation.Roll = 0.0f;
        AIController->SetControlRotation(DesiredControlRotation);
    }

    // This explicit yaw update guarantees the lock even when a Character Blueprint previously
    // used orientation-to-movement or another movement task changes its travel direction.
    GetOwner()->SetActorRotation(NewActorRotation, ETeleportType::None);
}

void URenegadeSoldierCombatComponent::PerformCombatMovement()
{
    if (!HasAuthority() || bIsDead || !CurrentTarget || !CanTakeCombatMovementControl())
    {
        return;
    }

    AAIController* AIController = GetOwningAIController();
    if (!AIController || !GetOwner())
    {
        return;
    }

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    const FVector TargetLocation = CurrentTarget->GetActorLocation();
    FVector ToTarget = TargetLocation - OwnerLocation;
    ToTarget.Z = 0.0f;
    const float Distance = ToTarget.Size();
    const FVector Forward = ToTarget.GetSafeNormal();
    const FVector Right = FVector::CrossProduct(FVector::UpVector, Forward).GetSafeNormal();

    FVector DesiredDestination = OwnerLocation;
    ERenegadeCombatMoveType MoveType = ERenegadeCombatMoveType::Hold;

    if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CurrentTarget))
    {
        DesiredDestination = LastKnownTargetLocation;
        MoveType = ERenegadeCombatMoveType::SearchLastKnownPosition;
    }
    else if (Distance > CombatMovement.PreferredMaximumRange)
    {
        DesiredDestination = OwnerLocation + Forward * CombatMovement.AdvanceStepDistance;
        MoveType = ERenegadeCombatMoveType::Advance;
    }
    else if (Distance < CombatMovement.PreferredMinimumRange)
    {
        DesiredDestination = OwnerLocation - Forward * CombatMovement.RetreatStepDistance + Right * StrafeDirection * (CombatMovement.StrafeStepDistance * 0.35f);
        MoveType = ERenegadeCombatMoveType::Retreat;
    }
    else
    {
        if (FMath::FRand() <= FMath::Clamp(CombatMovement.StrafeDirectionChangeChance, 0.0f, 1.0f))
        {
            StrafeDirection *= -1;
        }

        DesiredDestination = OwnerLocation + Right * StrafeDirection * CombatMovement.StrafeStepDistance;
        MoveType = StrafeDirection > 0 ? ERenegadeCombatMoveType::StrafeRight : ERenegadeCombatMoveType::StrafeLeft;
    }

    FVector ProjectedDestination;
    if (ProjectCombatDestination(DesiredDestination, ProjectedDestination))
    {
        AIController->MoveToLocation(
            ProjectedDestination,
            FMath::Max(0.0f, CombatMovement.MoveAcceptanceRadius),
            true,
            CombatMovement.bUsePathfinding,
            false,
            true,
            nullptr,
            true);

        OnCombatMoveRequested.Broadcast(ProjectedDestination, MoveType);
    }
}

bool URenegadeSoldierCombatComponent::ProjectCombatDestination(const FVector& DesiredDestination, FVector& OutProjectedDestination) const
{
    if (!GetWorld())
    {
        return false;
    }

    if (UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
    {
        FNavLocation NavLocation;
        const float Extent = FMath::Max(50.0f, CombatMovement.NavigationProjectionExtent);
        if (NavSystem->ProjectPointToNavigation(DesiredDestination, NavLocation, FVector(Extent, Extent, Extent)))
        {
            OutProjectedDestination = NavLocation.Location;
            return true;
        }
    }

    return false;
}

void URenegadeSoldierCombatComponent::ApplyHealthDelta(float Delta, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead || FMath::IsNearlyZero(Delta))
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = FMath::Clamp(CurrentHealth + Delta, 0.0f, FMath::Max(1.0f, HealthAndRespawn.MaximumHealth));
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, DamageCauser, InstigatedBy);

    if (CurrentHealth <= 0.0f)
    {
        BeginDeath(InstigatedBy, DamageCauser);
    }
}

void URenegadeSoldierCombatComponent::BeginDeath(AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    bIsDead = true;
    bInvulnerable = true;

    FVector ImpulseDirection = PendingIncomingShotDirection;
    FName HitBone = bHasPendingIncomingHit ? PendingIncomingHit.BoneName : NAME_None;

    AActor* Killer = InstigatedBy ? InstigatedBy->GetPawn() : nullptr;
    if (!Killer)
    {
        Killer = DamageCauser;
    }

    if (ImpulseDirection.IsNearlyZero() && Killer && GetOwner())
    {
        ImpulseDirection = (GetOwner()->GetActorLocation() - Killer->GetActorLocation()).GetSafeNormal();
    }
    if (ImpulseDirection.IsNearlyZero())
    {
        ImpulseDirection = GetOwner() ? GetOwner()->GetActorForwardVector() : FVector::ForwardVector;
    }

    const FVector RagdollImpulse = ImpulseDirection * FMath::Max(0.0f, HealthAndRespawn.RagdollImpulseStrength);

    SetTargetInternal(nullptr, false);
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TargetRefreshTimer);
        World->GetTimerManager().ClearTimer(CombatMovementTimer);
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
    }
    bReloading = false;

    MulticastBeginDeath(Killer, RagdollImpulse, HitBone);

    if (HealthAndRespawn.bCanRespawn && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &URenegadeSoldierCombatComponent::RespawnNow, FMath::Max(0.01f, HealthAndRespawn.RespawnDelaySeconds), false);
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::BeginRagdollVisuals(const FVector& Impulse, FName HitBone)
{
    if (bVisualRagdollActive)
    {
        return;
    }

    ResolveOwnerComponents();
    RestoreCombatFacingMode(true);
    UpdateComponentTickState();

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (OwnerMovement)
    {
        OwnerMovement->StopMovementImmediately();
        OwnerMovement->DisableMovement();
    }

    if (OwnerCapsule && HealthAndRespawn.bDisableCapsuleCollisionOnDeath)
    {
        OwnerCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    FString RagdollFailureReason;
    if (HealthAndRespawn.bEnableAutomaticRagdoll && ValidateRagdollSetup(RagdollFailureReason))
    {
        CaptureOriginalMeshStateIfNeeded();

        OwnerMesh->SetCollisionProfileName(HealthAndRespawn.RagdollCollisionProfileName);
        OwnerMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

        // SetSimulatePhysics normally detaches a component automatically. The stable per-bone path
        // does not guarantee that behaviour, so detach explicitly to stop the capsule/root transform
        // from pulling simulated bones back toward the standing character location.
        OwnerMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

        if (HealthAndRespawn.bDisableSecondaryAnimationDuringRagdoll)
        {
            // Secondary animation systems can continue writing bone transforms after Chaos starts,
            // producing long limbs, cloth spikes or bones pulled toward their pre-death pose.
            OwnerMesh->bDisableClothSimulation = true;
            OwnerMesh->SetAllowAnimDynamicsAnimNode(false, false);
            OwnerMesh->SetAllowRigidBodyAnimNode(false, false);
            OwnerMesh->SetDisablePostProcessBlueprint(true);
            OwnerMesh->ResetAnimInstanceDynamics(ETeleportType::TeleportPhysics);
        }

        const FName RagdollRootBone = ResolveRagdollRootBone();
        if (!RagdollRootBone.IsNone())
        {
            OwnerMesh->SetAllBodiesBelowSimulatePhysics(
                RagdollRootBone,
                true,
                HealthAndRespawn.bIncludeRagdollRootBone);

            if (HealthAndRespawn.bForceFullPhysicsBlendOnRagdoll)
            {
                OwnerMesh->SetAllBodiesBelowPhysicsBlendWeight(
                    RagdollRootBone,
                    1.0f,
                    false,
                    HealthAndRespawn.bIncludeRagdollRootBone);
            }
        }
        else
        {
            // Compatibility fallback for unusual skeletons with no resolvable physics root.
            OwnerMesh->SetAllBodiesSimulatePhysics(true);
            if (HealthAndRespawn.bForceFullPhysicsBlendOnRagdoll)
            {
                OwnerMesh->SetAllBodiesPhysicsBlendWeight(1.0f, false);
            }
        }

        OwnerMesh->WakeAllRigidBodies();

        if (!Impulse.IsNearlyZero())
        {
            const FName SafeImpulseBone = OwnerMesh->GetBoneIndex(HitBone) != INDEX_NONE ? HitBone : RagdollRootBone;
            OwnerMesh->AddImpulse(Impulse, SafeImpulseBone, HealthAndRespawn.bRagdollImpulseIsVelocityChange);
        }
    }
    else if (HealthAndRespawn.bEnableAutomaticRagdoll && HealthAndRespawn.bLogRagdollSetupWarnings)
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("%s: Automatic ragdoll could not start. %s"),
            GetOwner() ? *GetOwner()->GetName() : TEXT("Unknown Soldier"),
            *RagdollFailureReason);
    }

    bVisualRagdollActive = true;
    OnRagdollStarted.Broadcast();
}

void URenegadeSoldierCombatComponent::EndRagdollVisuals(const FTransform& RespawnTransform)
{
    ResolveOwnerComponents();

    if (OwnerMesh)
    {
        // Clear every body regardless of the selected root so no body remains partially simulated.
        OwnerMesh->SetAllBodiesPhysicsBlendWeight(0.0f, false);
        OwnerMesh->SetAllBodiesSimulatePhysics(false);
        OwnerMesh->SetSimulatePhysics(false);
        OwnerMesh->PutAllRigidBodiesToSleep();

        if (USceneComponent* Parent = OriginalMeshParent.Get())
        {
            OwnerMesh->AttachToComponent(Parent, FAttachmentTransformRules::KeepWorldTransform);
        }
        OwnerMesh->SetRelativeTransform(OriginalMeshRelativeTransform);
        OwnerMesh->SetCollisionProfileName(OriginalMeshCollisionProfile);
        OwnerMesh->SetCollisionEnabled(OriginalMeshCollisionEnabled);

        if (HealthAndRespawn.bDisableSecondaryAnimationDuringRagdoll)
        {
            OwnerMesh->bDisableClothSimulation = bOriginalDisableClothSimulation;
            OwnerMesh->SetAllowAnimDynamicsAnimNode(!bOriginalDisableAnimDynamicsAnimNode, true);
            OwnerMesh->SetAllowRigidBodyAnimNode(!bOriginalDisableRigidBodyAnimNode, true);
            OwnerMesh->SetDisablePostProcessBlueprint(bOriginalDisablePostProcessBlueprint);
            OwnerMesh->ResetAnimInstanceDynamics(ETeleportType::TeleportPhysics);
            OwnerMesh->ResetClothTeleportMode();
        }
    }

    if (GetOwner())
    {
        GetOwner()->SetActorTransform(RespawnTransform, false, nullptr, ETeleportType::TeleportPhysics);
    }

    if (OwnerCapsule)
    {
        OwnerCapsule->SetCollisionEnabled(OriginalCapsuleCollisionEnabled);
    }

    if (OwnerMovement)
    {
        OwnerMovement->StopMovementImmediately();
        OwnerMovement->SetMovementMode(MOVE_Walking);
        if (OriginalMaxWalkSpeed > 0.0f)
        {
            OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed;
        }
    }

    bVisualRagdollActive = false;
}

FTransform URenegadeSoldierCombatComponent::ResolveRespawnTransform() const
{
    switch (HealthAndRespawn.RespawnTransformMode)
    {
        case ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint:
            if (ARenegadeSoldierSpawnPoint* SpawnPoint = SelectTeamSpawnPoint())
            {
                return SpawnPoint->GetActorTransform();
            }
            return OriginalActorTransform;

        case ERenegadeRespawnTransformMode::CustomTransform:
            return HealthAndRespawn.CustomRespawnTransform;

        case ERenegadeRespawnTransformMode::OriginalTransform:
        default:
            return OriginalActorTransform;
    }
}

ARenegadeSoldierSpawnPoint* URenegadeSoldierCombatComponent::SelectTeamSpawnPoint() const
{
    if (!GetWorld())
    {
        return nullptr;
    }

    int32 HighestPriority = TNumericLimits<int32>::Lowest();
    TArray<ARenegadeSoldierSpawnPoint*> MatchingPoints;

    for (TActorIterator<ARenegadeSoldierSpawnPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeSoldierSpawnPoint* SpawnPoint = *It;
        if (!IsValid(SpawnPoint) || !SpawnPoint->bEnabled || !SpawnPoint->TeamId.IsEqual(TeamId, ENameCase::IgnoreCase))
        {
            continue;
        }

        if (SpawnPoint->Priority > HighestPriority)
        {
            HighestPriority = SpawnPoint->Priority;
            MatchingPoints.Reset();
            MatchingPoints.Add(SpawnPoint);
        }
        else if (SpawnPoint->Priority == HighestPriority)
        {
            MatchingPoints.Add(SpawnPoint);
        }
    }

    return MatchingPoints.Num() > 0 ? MatchingPoints[FMath::RandRange(0, MatchingPoints.Num() - 1)] : nullptr;
}

void URenegadeSoldierCombatComponent::EndRespawnInvulnerability()
{
    bInvulnerable = false;
}

AController* URenegadeSoldierCombatComponent::GetOwningController() const
{
    return OwnerCharacter ? OwnerCharacter->GetController() : (GetOwner() ? GetOwner()->GetInstigatorController() : nullptr);
}

AAIController* URenegadeSoldierCombatComponent::GetOwningAIController() const
{
    return Cast<AAIController>(GetOwningController());
}

void URenegadeSoldierCombatComponent::MulticastShotFired_Implementation(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit)
{
    OnShotFired.Broadcast(TraceStart, TraceEnd, bBlockingHit, HitResult);

    const bool bDelayBlood = bSpawnGroundBloodForHit
        && CombatVisuals.bEnableGroundBloodSplatter
        && CombatVisuals.bDelayGroundBloodUntilBulletArrives;
    const bool bBulletWasSpawned = SpawnBulletMeshVisual(TraceStart, TraceEnd, bDelayBlood ? &HitResult : nullptr);

    if (bSpawnGroundBloodForHit && (!bDelayBlood || !bBulletWasSpawned))
    {
        SpawnGroundBloodSplatter(HitResult);
    }
}

void URenegadeSoldierCombatComponent::MulticastReloadStarted_Implementation()
{
    OnReloadStarted.Broadcast();
}

void URenegadeSoldierCombatComponent::MulticastReloadFinished_Implementation()
{
    OnReloadFinished.Broadcast();
}

void URenegadeSoldierCombatComponent::MulticastBeginDeath_Implementation(AActor* Killer, FVector RagdollImpulse, FName HitBone)
{
    BeginRagdollVisuals(RagdollImpulse, HitBone);
    OnDeath.Broadcast(Killer, RagdollImpulse, HitBone);
}

void URenegadeSoldierCombatComponent::MulticastFinishRespawn_Implementation(FTransform RespawnTransform)
{
    EndRagdollVisuals(RespawnTransform);
    OnRespawned.Broadcast();

    if (HasAuthority())
    {
        const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
        OnSplineMovementResumeRequested.Broadcast(ResumeLocation);
        AActor* Owner = GetOwner();
        if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
        {
            IRenegadeCombatMovementBridge::Execute_CombatMovementResumed(Owner, ResumeLocation);
        }
    }
}
