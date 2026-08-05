#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "RenegadeCombatTypes.h"
#include "TimerManager.h"
#include "RenegadeSoldierCombatComponent.generated.h"

class AActor;
class AAIController;
class ACharacter;
class AController;
class ARenegadeSoldierSpawnPoint;
class UCapsuleComponent;
class UCharacterMovementComponent;
class URenegadeWeaponProfile;
class USceneComponent;
class USkeletalMeshComponent;
class UDamageType;
class UPrimitiveComponent;
class UDecalComponent;
class UStaticMeshComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeTargetChangedSignature, AActor*, PreviousTarget, AActor*, NewTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeCombatStartedSignature, AActor*, Target);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeCombatEndedSignature, AActor*, PreviousTarget, FVector, ResumeFromLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRenegadeShotFiredSignature, FVector, TraceStart, FVector, TraceEnd, bool, bBlockingHit, const FHitResult&, HitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRenegadeReloadSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRenegadeHealthChangedSignature, float, PreviousHealth, float, NewHealth, AActor*, DamageCauser, AController*, InstigatedBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadeDeathSignature, AActor*, Killer, FVector, RagdollImpulse, FName, HitBone);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRenegadeSimpleSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeCombatMoveSignature, FVector, Destination, ERenegadeCombatMoveType, MoveType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeSplinePauseSignature, AActor*, CombatTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeSplineResumeSignature, FVector, ResumeFromLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadeGroundBloodSpawnedSignature, UDecalComponent*, DecalComponent, const FHitResult&, BulletHit, const FHitResult&, GroundHit);

struct FRenegadeBulletVisualRuntimeState
{
    FVector StartLocation = FVector::ZeroVector;
    FVector EndLocation = FVector::ZeroVector;
    FRotator TravelRotation = FRotator::ZeroRotator;
    float ElapsedSeconds = 0.0f;
    float DurationSeconds = 0.0f;
    bool bActive = false;
    bool bSpawnBloodOnArrival = false;
    FHitResult PendingBloodHit;
};

UCLASS(ClassGroup=(RenegadeNXT), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class RENEGADESOLDIERCOMBAT_API URenegadeSoldierCombatComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeSoldierCombatComponent();

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TeamId, Category="Renegade NXT|Team")
    FName TeamId = TEXT("GDI");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Team")
    bool bDifferentNonNeutralTeamsAreEnemies = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat")
    bool bAutoCombatEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat")
    bool bRegisterAsCombatTarget = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat")
    bool bAutoStartOnBeginPlay = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat")
    FRenegadeTargetingSettings Targeting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat")
    FRenegadeCombatMovementSettings CombatMovement;

    /** When enabled, the soldier keeps its body yaw facing the active combat target while advancing, retreating, or strafing. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated, Category="Renegade NXT|Combat Facing")
    bool bLockCombatRotationToCurrentTarget = true;

    /** Maximum body turning speed while combat-facing is locked. Set to 0 for an instant rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat Facing", meta=(ClampMin="0.0", EditCondition="bLockCombatRotationToCurrentTarget"))
    float CombatTargetRotationSpeedDegrees = 1080.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Weapon")
    bool bUseWeaponProfile = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Weapon", meta=(EditCondition="bUseWeaponProfile"))
    TObjectPtr<URenegadeWeaponProfile> WeaponProfile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Weapon", meta=(EditCondition="!bUseWeaponProfile"))
    FRenegadeWeaponSettings InlineWeaponSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Health and Respawn")
    FRenegadeHealthRespawnSettings HealthAndRespawn;

    /** Automatic client-side bullet mesh travel and ground blood effects. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat Visuals")
    FRenegadeCombatVisualSettings CombatVisuals;

    /**
     * Scene Component on this soldier used as the visible bullet-mesh origin.
     * Add a Scene Component at the weapon muzzle, then choose it with this component picker.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat Visuals|Bullet Spawn", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference BulletVisualSpawnComponent;

    /** Local-space offset from Bullet Visual Spawn Component. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    FVector BulletVisualSpawnRelativeOffset = FVector::ZeroVector;

    /** Optional tag fallback used when Bullet Visual Spawn Component is not assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    FName BulletVisualSpawnComponentTag = NAME_None;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentHealth, Category="Renegade NXT|Runtime")
    float CurrentHealth = 100.0f;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Dead, Category="Renegade NXT|Runtime")
    bool bIsDead = false;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentTarget, Category="Renegade NXT|Runtime")
    TObjectPtr<AActor> CurrentTarget;

    UPROPERTY(BlueprintReadOnly, Replicated, Category="Renegade NXT|Runtime")
    int32 CurrentMagazineAmmo = 0;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeTargetChangedSignature OnTargetChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeCombatStartedSignature OnCombatStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeCombatEndedSignature OnCombatEnded;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeShotFiredSignature OnShotFired;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeReloadSignature OnReloadStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeReloadSignature OnReloadFinished;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeHealthChangedSignature OnHealthChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeDeathSignature OnDeath;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeSimpleSignature OnRagdollStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeSimpleSignature OnRespawned;

    /** Fired after an automatic ground-blood effect is placed. DecalComponent can be null when only an effect actor is configured. */
    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeGroundBloodSpawnedSignature OnGroundBloodSpawned;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Events")
    FRenegadeCombatMoveSignature OnCombatMoveRequested;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Spline Integration")
    FRenegadeSplinePauseSignature OnSplineMovementPauseRequested;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Spline Integration")
    FRenegadeSplineResumeSignature OnSplineMovementResumeRequested;

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat")
    void StartAutoCombat();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat")
    void StopAutoCombat(bool bResumeSplineMovement = true);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Combat")
    void SetCombatTarget(AActor* NewTarget);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Combat")
    void ClearCombatTarget(bool bResumeSplineMovement = true);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Combat")
    void ForceTargetRefresh();

    /** Enables or disables body-yaw locking to the current enemy at runtime. Call on the server. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Combat Facing")
    void SetCombatRotationLockEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat Facing")
    bool IsCombatRotationLockEnabled() const { return bLockCombatRotationToCurrentTarget; }

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Team")
    void SetTeamId(FName NewTeamId);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Team")
    bool IsHostileToActor(const AActor* OtherActor) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat")
    bool IsValidCombatTarget(const AActor* PossibleTarget) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat")
    bool IsInCombat() const { return IsValid(CurrentTarget) && !bIsDead; }

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Health")
    float GetHealthPercent() const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Health")
    void Heal(float Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Health")
    void ForceKill(AActor* Killer = nullptr);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void RespawnNow();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Health")
    void SetInvulnerable(bool bNewInvulnerable);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Health")
    bool IsInvulnerable() const { return bInvulnerable; }

    /** Validates the selected ragdoll mesh and Physics Asset. FailureReason is suitable for Print String. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Ragdoll")
    bool ValidateRagdollSetup(FString& FailureReason);

    /** Returns the skeletal mesh currently selected for automatic ragdoll. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Ragdoll")
    USkeletalMeshComponent* GetResolvedRagdollMesh() const { return OwnerMesh; }

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon")
    FRenegadeWeaponSettings GetActiveWeaponSettings() const;

    /**
     * Assigns the Scene Component used as the local bullet visual origin at runtime.
     * The component must belong to the same soldier actor. This runtime override takes priority over the Details-panel reference.
     */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    void SetBulletVisualSpawnComponent(USceneComponent* NewSpawnComponent);

    /** Clears the runtime bullet-spawn override and returns to the Details-panel component reference/tag/fallback muzzle. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    void ClearBulletVisualSpawnComponent();

    /** Returns the currently resolved Scene Component used for bullet visuals, or null when the trace-start fallback is active. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    USceneComponent* GetBulletVisualSpawnComponent() const;

    /** Returns the final world-space visual spawn position, including the configured local offset. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    FVector GetBulletVisualSpawnLocation() const;

    /** Local cosmetic preview; useful for testing the assigned bullet mesh without applying damage. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat Visuals")
    void PreviewBulletMeshVisual(FVector TraceStart, FVector TraceEnd);

    /** Uses the configured bullet-spawn component and previews travel to Trace End. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat Visuals|Bullet Spawn")
    void PreviewBulletMeshFromConfiguredSpawn(FVector TraceEnd);

    /** Traces down and places the configured ground-blood effect locally. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Combat Visuals")
    bool PreviewGroundBloodAtLocation(FVector BulletImpactLocation);

    void PrepareIncomingCombatHit(const FHitResult& HitResult, const FVector& ShotDirection);
    void ClearIncomingCombatHit();

protected:
    UFUNCTION()
    void HandleOwnerAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

    UFUNCTION()
    void OnRep_TeamId();

    UFUNCTION()
    void OnRep_CurrentHealth(float PreviousHealth);

    UFUNCTION()
    void OnRep_Dead();

    UFUNCTION()
    void OnRep_CurrentTarget();

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastShotFired(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastReloadStarted();

    UFUNCTION(NetMulticast, Reliable)
    void MulticastReloadFinished();

    UFUNCTION(NetMulticast, Reliable)
    void MulticastBeginDeath(AActor* Killer, FVector RagdollImpulse, FName HitBone);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastFinishRespawn(FTransform RespawnTransform);

private:
    void RegisterWithCombatWorld();
    void UnregisterFromCombatWorld();
    void ResolveOwnerComponents();
    bool HasUsableRagdollPhysics(const USkeletalMeshComponent* Mesh) const;
    USkeletalMeshComponent* ResolveLeaderPoseRagdollMesh(USkeletalMeshComponent* Mesh) const;
    FName ResolveRagdollRootBone() const;
    void CaptureOriginalMeshStateIfNeeded();
    bool HasAuthority() const;

    void RefreshTargeting();
    AActor* FindBestTarget() const;
    bool HasLineOfSightTo(const AActor* Target, FVector* OutAimLocation = nullptr) const;
    FVector GetAimLocation(const AActor* Target) const;
    FVector GetMuzzleLocation() const;
    void SetTargetInternal(AActor* NewTarget, bool bResumeSplineWhenCleared);
    void HandleLocalTargetTransition(AActor* PreviousTarget, AActor* NewTarget, bool bResumeSplineWhenCleared);

    void ScheduleNextShot(float DelaySeconds);
    void TryFireShot();
    void StartReload();
    void FinishReload();
    float CalculateDamageForHit(const FRenegadeWeaponSettings& Weapon, const FHitResult& Hit, float Distance) const;

    bool ShouldRunCosmeticVisuals() const;
    USceneComponent* ResolveBulletVisualSpawnComponent() const;
    FVector ResolveBulletVisualSpawnLocation(const FVector& FallbackTraceStart) const;
    bool SpawnBulletMeshVisual(const FVector& TraceStart, const FVector& TraceEnd, const FHitResult* BloodHitToDelay = nullptr);
    void UpdateBulletMeshVisuals(float DeltaTime);
    bool HasActiveBulletMeshVisuals() const;
    UStaticMeshComponent* AcquireBulletVisualComponent(int32& OutVisualIndex);
    void DeactivateBulletVisual(int32 VisualIndex, bool bProcessPendingBlood);
    void StopAllBulletMeshVisuals();
    bool SpawnGroundBloodSplatter(const FHitResult& BulletHit);
    void UpdateComponentTickState();

    bool CanTakeCombatMovementControl() const;
    void TakeCombatMovementControl(AActor* AgainstTarget);
    void ReleaseCombatMovementControl();
    void PerformCombatMovement();
    void ApplyCombatFacingMode();
    void RestoreCombatFacingMode(bool bClearGameplayFocus = true);
    void UpdateCombatFacing(float DeltaTime);
    bool ProjectCombatDestination(const FVector& DesiredDestination, FVector& OutProjectedDestination) const;

    void ApplyHealthDelta(float Delta, AController* InstigatedBy, AActor* DamageCauser);
    void BeginDeath(AController* InstigatedBy, AActor* DamageCauser);
    void BeginRagdollVisuals(const FVector& Impulse, FName HitBone);
    void EndRagdollVisuals(const FTransform& RespawnTransform);
    FTransform ResolveRespawnTransform() const;
    ARenegadeSoldierSpawnPoint* SelectTeamSpawnPoint() const;
    void EndRespawnInvulnerability();

    AController* GetOwningController() const;
    AAIController* GetOwningAIController() const;

    UPROPERTY(Transient)
    TObjectPtr<ACharacter> OwnerCharacter;

    UPROPERTY(Transient)
    TObjectPtr<USkeletalMeshComponent> OwnerMesh;

    UPROPERTY(Transient)
    TObjectPtr<UCapsuleComponent> OwnerCapsule;

    UPROPERTY(Transient)
    TObjectPtr<UCharacterMovementComponent> OwnerMovement;

    /** Optional runtime Blueprint override for the visual bullet origin. */
    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeBulletVisualSpawnComponent;

    /** Per-soldier component pool; normally only one or two entries are active at a time. */
    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> BulletVisualComponents;

    TArray<FRenegadeBulletVisualRuntimeState> BulletVisualStates;

    FTimerHandle TargetRefreshTimer;
    FTimerHandle CombatMovementTimer;
    FTimerHandle FireTimer;
    FTimerHandle ReloadTimer;
    FTimerHandle RespawnTimer;
    FTimerHandle InvulnerabilityTimer;

    FTransform OriginalActorTransform;
    FTransform OriginalMeshRelativeTransform;
    TWeakObjectPtr<USceneComponent> OriginalMeshParent;
    TWeakObjectPtr<USkeletalMeshComponent> OriginalStateMesh;
    FName OriginalMeshCollisionProfile;
    ECollisionEnabled::Type OriginalMeshCollisionEnabled = ECollisionEnabled::QueryOnly;
    bool bOriginalDisableClothSimulation = false;
    bool bOriginalDisablePostProcessBlueprint = false;
    bool bOriginalDisableAnimDynamicsAnimNode = false;
    bool bOriginalDisableRigidBodyAnimNode = false;
    ECollisionEnabled::Type OriginalCapsuleCollisionEnabled = ECollisionEnabled::QueryAndPhysics;
    float OriginalMaxWalkSpeed = 0.0f;
    bool bOriginalOrientRotationToMovement = true;
    bool bOriginalUseControllerDesiredRotation = false;
    bool bOriginalUseControllerRotationYaw = false;

    FHitResult PendingIncomingHit;
    FVector PendingIncomingShotDirection = FVector::ZeroVector;
    bool bHasPendingIncomingHit = false;

    float LastTargetSeenTime = -BIG_NUMBER;
    float LastGroundBloodTime = -BIG_NUMBER;
    FVector LastKnownTargetLocation = FVector::ZeroVector;
    int32 BurstShotsRemaining = 0;
    int32 StrafeDirection = 1;
    bool bReloading = false;
    bool bInvulnerable = false;
    bool bMovementControlTaken = false;
    bool bCombatFacingModeApplied = false;
    bool bVisualRagdollActive = false;
    bool bLocalAutoCombatStarted = false;
    TWeakObjectPtr<AActor> LastLocallyNotifiedTarget;
};
