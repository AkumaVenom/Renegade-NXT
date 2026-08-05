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
class APlayerController;
class APlayerCameraManager;
class ARenegadeSoldierSpawnPoint;
class UCapsuleComponent;
class UCharacterMovementComponent;
class UCameraComponent;
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
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadePlayerWeaponChangedSignature, ERenegadePlayerWeaponSlot, PreviousWeapon, ERenegadePlayerWeaponSlot, NewWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadePlayerAmmoChangedSignature, ERenegadePlayerWeaponSlot, WeaponSlot, int32, PreviousAmmo, int32, NewAmmo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadePlayerAimChangedSignature, bool, bIsAiming);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeRespawnTransformSelectedSignature, FTransform, RespawnTransform);

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


    /** Enables player/manual combat. Automatic target acquisition, AI firing and AI combat movement are disabled for this component. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Renegade NXT|Player Combat")
    bool bPlayerControlledCombat = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat")
    FRenegadePlayerCombatSettings PlayerCombat;

    /** Optional built-in keyboard/mouse and gamepad bindings. No Input Action assets are required when enabled. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Built-In Input")
    FRenegadePlayerInputSettings PlayerInput;

    /** Camera-facing body rotation and camera zoom applied while Player Aiming is active. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Aiming")
    FRenegadePlayerAimPresentationSettings PlayerAimPresentation;

    /** Optional exact Camera Component to zoom. The plugin auto-finds an active player camera when this is unassigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Aiming|Camera", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.CameraComponent"))
    FComponentReference PlayerAimCameraComponent;

    /** Optional tag fallback for finding the Camera Component used by aim zoom. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Aiming|Camera")
    FName PlayerAimCameraComponentTag = NAME_None;

    /** Use separate rifle and pistol weapon profiles for player combat. When disabled, the inline settings below are used. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Weapons")
    bool bUsePlayerWeaponProfiles = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Weapons", meta=(EditCondition="bUsePlayerWeaponProfiles"))
    TObjectPtr<URenegadeWeaponProfile> PlayerAutomaticRifleProfile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Weapons", meta=(EditCondition="bUsePlayerWeaponProfiles"))
    TObjectPtr<URenegadeWeaponProfile> PlayerPistolProfile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Weapons", meta=(EditCondition="!bUsePlayerWeaponProfiles"))
    FRenegadeWeaponSettings InlinePlayerAutomaticRifleSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Player Combat|Weapons", meta=(EditCondition="!bUsePlayerWeaponProfiles"))
    FRenegadeWeaponSettings InlinePlayerPistolSettings;

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


    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ActivePlayerWeapon, Category="Renegade NXT|Player Combat|Runtime")
    ERenegadePlayerWeaponSlot ActivePlayerWeapon = ERenegadePlayerWeaponSlot::AutomaticRifle;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AutomaticRifleAmmo, Category="Renegade NXT|Player Combat|Runtime")
    int32 CurrentAutomaticRifleAmmo = 0;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PistolAmmo, Category="Renegade NXT|Player Combat|Runtime")
    int32 CurrentPistolAmmo = 0;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerAiming, Category="Renegade NXT|Player Combat|Runtime")
    bool bIsPlayerAiming = false;

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


    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Player Combat|Events")
    FRenegadePlayerWeaponChangedSignature OnPlayerWeaponChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Player Combat|Events")
    FRenegadePlayerAmmoChangedSignature OnPlayerAmmoChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Player Combat|Events")
    FRenegadePlayerAimChangedSignature OnPlayerAimChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Respawn|Events")
    FRenegadeRespawnTransformSelectedSignature OnRespawnTransformSelected;

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


    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat")
    bool IsPlayerControlledCombatant() const { return bPlayerControlledCombat; }

    /** Connect the Enhanced Input Started event for automatic-rifle fire to this node. Do not connect Triggered, because this node owns the RPM timer. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStartFire();

    /** Connect Enhanced Input Completed and Canceled for automatic-rifle fire to this node. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStopFire();

    /** Fires exactly one shot using the currently selected weapon. Ideal for a pistol Started input. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerFireOnce();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerReload();

    /** Convenience input node: selects the automatic rifle and begins held fire. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStartAutomaticRifleFire();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStopAutomaticRifleFire();

    /** Convenience input node: selects the pistol and fires exactly one round. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerFirePistol();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Weapons")
    void SelectPlayerWeapon(ERenegadePlayerWeaponSlot NewWeapon);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Weapons")
    void SelectPlayerAutomaticRifle();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Weapons")
    void SelectPlayerPistol();

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Weapons")
    FRenegadeWeaponSettings GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot WeaponSlot) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Weapons")
    int32 GetPlayerWeaponAmmo(ERenegadePlayerWeaponSlot WeaponSlot) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Input")
    bool IsPlayerFireHeld() const { return bLocalPlayerFireHeld; }

    /** Starts or stops the replicated player aim state. Built-in input calls this automatically. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerSetAiming(bool bNewAiming);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStartAiming() { PlayerSetAiming(true); }

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Input")
    void PlayerStopAiming() { PlayerSetAiming(false); }

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Input")
    bool IsPlayerAiming() const { return bIsPlayerAiming; }

    /** Returns the current local aim transition amount: 0 is hip-fire and 1 is fully aimed. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Aiming")
    float GetPlayerAimAlpha() const { return PlayerAimAlpha; }

    /** Runtime override for the Camera Component used by aim zoom. It must belong to the same owning actor. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Aiming|Camera")
    void SetPlayerAimCameraComponent(UCameraComponent* NewCameraComponent);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Aiming|Camera")
    void ClearPlayerAimCameraComponent();

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Aiming|Camera")
    UCameraComponent* GetPlayerAimCameraComponent() const;

    /** Immediately aligns the Character yaw to the current local camera/controller forward direction. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Aiming")
    void SnapPlayerCharacterToAimForward();

    /** Immediately restores pre-aim movement flags and camera FOV. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Aiming")
    void RestorePlayerAimPresentation();

    /** Enables or disables the self-contained FKey input polling at runtime. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Player Combat|Built-In Input")
    void SetBuiltInPlayerInputEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Player Combat|Built-In Input")
    bool IsBuiltInPlayerInputEnabled() const { return PlayerInput.bEnableBuiltInInput; }


    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon")
    bool IsReloading() const { return bReloading; }

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Health")
    float GetHealthPercent() const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Health")
    void Heal(float Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Health")
    void ForceKill(AActor* Killer = nullptr);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void RespawnNow();


    /** Highest-priority runtime respawn transform. Use Respawn Transform Mode = Runtime Transform Override. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void SetRuntimeRespawnTransform(FTransform NewRespawnTransform);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void ClearRuntimeRespawnTransform();

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Respawn")
    bool HasRuntimeRespawnTransform() const { return bHasRuntimeRespawnTransform; }

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void SetCustomRespawnTransforms(const TArray<FTransform>& NewRespawnTransforms);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void AddCustomRespawnTransform(FTransform NewRespawnTransform);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Respawn")
    void ClearCustomRespawnTransforms();

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

    UFUNCTION()
    void OnRep_ActivePlayerWeapon(ERenegadePlayerWeaponSlot PreviousWeapon);

    UFUNCTION()
    void OnRep_AutomaticRifleAmmo(int32 PreviousAmmo);

    UFUNCTION()
    void OnRep_PistolAmmo(int32 PreviousAmmo);

    UFUNCTION()
    void OnRep_PlayerAiming(bool bPreviousAiming);

    UFUNCTION(Server, Unreliable)
    void ServerRequestPlayerShot(FVector_NetQuantize ClientViewLocation, FVector_NetQuantizeNormal ClientViewDirection, ERenegadePlayerWeaponSlot RequestedWeapon, bool bClientAiming);

    UFUNCTION(Server, Reliable)
    void ServerSetPlayerAiming(bool bNewAiming);

    UFUNCTION(Server, Reliable)
    void ServerRequestPlayerReload(ERenegadePlayerWeaponSlot RequestedWeapon);

    UFUNCTION(Server, Reliable)
    void ServerSelectPlayerWeapon(ERenegadePlayerWeaponSlot NewWeapon);

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastShotFired(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit, bool bDamagedCombatTarget);

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
    void SubmitLocalPlayerShot();
    bool ResolveLocalPlayerView(FVector& OutViewLocation, FVector& OutViewDirection) const;
    void PerformPlayerShotServer(const FVector& ClientViewLocation, const FVector& ClientViewDirection, ERenegadePlayerWeaponSlot RequestedWeapon, bool bClientAiming);
    void SetPlayerAimingInternal(bool bNewAiming);
    void HandlePlayerAimStateChanged(bool bPreviousAiming);
    void UpdatePlayerAimPresentation(float DeltaTime);
    void ApplyPlayerAimRotationMode();
    void RestorePlayerAimRotationMode();
    void RotatePlayerCharacterToAimForward(float DeltaTime, bool bInstant);
    void UpdatePlayerAimCameraZoom(float DeltaTime, bool bInstant);
    void RestorePlayerAimCameraZoom(bool bInstant);
    UCameraComponent* ResolvePlayerAimCameraComponent() const;
    APlayerCameraManager* ResolveLocalPlayerCameraManager() const;
    bool HasPlayerAimPresentationWork() const;
    void ResetPlayerAimCameraCapture();
    void UpdateBuiltInPlayerInput(float DeltaTime);
    void ResetBuiltInPlayerInputState(bool bClearAimState);
    bool IsBuiltInInputKeyDown(APlayerController* PlayerController, const FKey& Key) const;
    float GetBuiltInInputAxis(APlayerController* PlayerController, const FKey& Key) const;
    float ApplyGamepadDeadZone(float Value) const;
    bool ExecuteWeaponShot(const FRenegadeWeaponSettings& Weapon, const FVector& TraceStart, const FVector& BaseShotDirection, bool bUseMuzzleObstructionTrace);
    void SetPlayerWeaponInternal(ERenegadePlayerWeaponSlot NewWeapon);
    void PauseLocalPlayerFireTimer();
    void StopLocalPlayerFireTimer();
    bool IsLocallyControlledPlayer() const;
    int32& GetMutablePlayerAmmo(ERenegadePlayerWeaponSlot WeaponSlot);
    void SetPlayerAmmo(ERenegadePlayerWeaponSlot WeaponSlot, int32 NewAmmo);
    void SyncCurrentMagazineFromPlayerWeapon();
    void InitializePlayerWeaponAmmo(bool bForceRefill);
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
    FTransform ResolveRespawnTransform();
    FTransform SelectTransformFromList(const TArray<FTransform>& Transforms, ERenegadeRespawnLocationSelection SelectionMode, int32& InOutSequentialIndex) const;
    AActor* SelectTaggedRespawnActor() const;
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

    /** Optional runtime Blueprint override for the local aim-zoom camera. */
    UPROPERTY(Transient)
    TObjectPtr<UCameraComponent> RuntimePlayerAimCameraComponent;

    TWeakObjectPtr<UCameraComponent> CapturedPlayerAimCameraComponent;
    TWeakObjectPtr<APlayerCameraManager> CapturedPlayerAimCameraManager;

    FTransform RuntimeRespawnTransform;
    bool bHasRuntimeRespawnTransform = false;
    int32 CustomRespawnSequentialIndex = 0;
    mutable int32 TaggedRespawnSequentialIndex = 0;

    /** Per-soldier component pool; normally only one or two entries are active at a time. */
    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> BulletVisualComponents;

    TArray<FRenegadeBulletVisualRuntimeState> BulletVisualStates;

    FTimerHandle TargetRefreshTimer;
    FTimerHandle CombatMovementTimer;
    FTimerHandle FireTimer;
    FTimerHandle LocalPlayerFireTimer;
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
    float OriginalPlayerAimCameraFOV = 90.0f;
    float OriginalPlayerCameraManagerFOV = 90.0f;
    float PlayerAimAlpha = 0.0f;
    bool bPlayerAimRotationModeApplied = false;
    bool bOriginalPlayerAimCameraFOVCaptured = false;
    bool bOriginalPlayerCameraManagerFOVCaptured = false;
    bool bPlayerCameraManagerFOVLockedByPlugin = false;

    FHitResult PendingIncomingHit;
    FVector PendingIncomingShotDirection = FVector::ZeroVector;
    bool bHasPendingIncomingHit = false;

    float LastTargetSeenTime = -BIG_NUMBER;
    float LastGroundBloodTime = -BIG_NUMBER;
    double NextAllowedPlayerShotServerTime = -BIG_NUMBER;
    FVector LastKnownTargetLocation = FVector::ZeroVector;
    int32 BurstShotsRemaining = 0;
    int32 StrafeDirection = 1;
    bool bReloading = false;
    bool bInvulnerable = false;
    bool bMovementControlTaken = false;
    bool bCombatFacingModeApplied = false;
    bool bVisualRagdollActive = false;
    bool bLocalAutoCombatStarted = false;
    bool bLocalPlayerFireHeld = false;
    bool bBuiltInFireCommandActive = false;
    bool bPreviousBuiltInAimDown = false;
    bool bPreviousBuiltInReloadDown = false;
    bool bPreviousBuiltInSelectRifleDown = false;
    bool bPreviousBuiltInSelectPistolDown = false;
    TWeakObjectPtr<AActor> LastLocallyNotifiedTarget;
};
