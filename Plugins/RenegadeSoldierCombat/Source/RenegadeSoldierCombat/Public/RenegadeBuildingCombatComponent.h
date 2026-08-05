#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "RenegadeBuildingCombatTypes.h"
#include "TimerManager.h"
#include "RenegadeBuildingCombatComponent.generated.h"

class AActor;
class AController;
class UAudioComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;
class UParticleSystemComponent;
class UNiagaraComponent;
class URenegadeSoldierCombatComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRenegadeBuildingHealthChangedSignature, float, PreviousHealth, float, NewHealth, AActor*, DamageCauser, AController*, InstigatedBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeBuildingUnderAttackSignature, AActor*, Attacker, float, Damage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeBuildingDestroyedSignature, AActor*, Destroyer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRenegadeBuildingRestoredSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeBuildingDefenseTargetChangedSignature, AActor*, PreviousTarget, AActor*, NewTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadeBuildingDefenseFiredSignature, ERenegadeBuildingDefenseType, DefenseType, FVector, TraceStart, FVector, TraceEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeBuildingPowerChangedSignature, bool, bPowerOnline);

struct FRenegadeBuildingRocketRuntimeState
{
    FVector StartLocation = FVector::ZeroVector;
    FVector EndLocation = FVector::ZeroVector;
    FRotator TravelRotation = FRotator::ZeroRotator;
    float ElapsedSeconds = 0.0f;
    float DurationSeconds = 0.0f;
    bool bActive = false;
    bool bSpawnImpactEffectOnArrival = false;
};

/**
 * Add this component to any Renegade NXT building Blueprint to provide replicated health,
 * infantry target registration, global under-attack audio, destruction/repair events,
 * and optional AGT or Obelisk automatic defence.
 */
UCLASS(ClassGroup=(RenegadeNXT), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class RENEGADESOLDIERCOMBAT_API URenegadeBuildingCombatComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeBuildingCombatComponent();

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TeamId, Category="Renegade NXT|Building|Team")
    FName TeamId = TEXT("GDI");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Team")
    bool bDifferentNonNeutralTeamsAreEnemies = true;

    /** Ensures this Blueprint actor replicates so building health, destruction, defence and sounds work in multiplayer. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Networking")
    bool bEnsureOwnerReplicates = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building")
    ERenegadeBuildingType BuildingType = ERenegadeBuildingType::Generic;

    /** Generic buildings use None. AGT and Obelisk building types automatically select their matching defence on Begin Play unless explicitly changed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence")
    ERenegadeBuildingDefenseType DefenseType = ERenegadeBuildingDefenseType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Health")
    FRenegadeBuildingHealthSettings HealthSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Target")
    FRenegadeBuildingTargetSettings TargetSettings;

    /** Exact Scene Component used by infantry and defensive buildings as the building aim point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Target", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference TargetPointComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Target")
    FName TargetPointComponentTag = NAME_None;

    /** Local-space offset from the selected target Scene Component. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Target")
    FVector TargetPointRelativeOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Audio")
    FRenegadeBuildingAudioSettings AudioSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence")
    bool bAutoStartDefenseOnBeginPlay = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence")
    FRenegadeBuildingDefenseTargetingSettings DefenseTargeting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT")
    FRenegadeAdvancedGuardTowerSettings AdvancedGuardTower;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference AGTLeftRocketMuzzleComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference AGTRightRocketMuzzleComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles")
    FName AGTLeftRocketMuzzleTag = TEXT("AGT_Rocket_Left");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles")
    FName AGTRightRocketMuzzleTag = TEXT("AGT_Rocket_Right");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles")
    FVector AGTLeftRocketMuzzleRelativeOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|AGT|Muzzles")
    FVector AGTRightRocketMuzzleRelativeOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|Obelisk")
    FRenegadeObeliskSettings Obelisk;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|Obelisk|Laser", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference ObeliskLaserStartComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|Obelisk|Laser")
    FName ObeliskLaserStartComponentTag = TEXT("Obelisk_Laser_Start");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Building|Defence|Obelisk|Laser")
    FVector ObeliskLaserStartRelativeOffset = FVector::ZeroVector;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentHealth, Category="Renegade NXT|Building|Runtime")
    float CurrentHealth = 1000.0f;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Destroyed, Category="Renegade NXT|Building|Runtime")
    bool bIsDestroyed = false;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DefenseTarget, Category="Renegade NXT|Building|Runtime")
    TObjectPtr<AActor> CurrentDefenseTarget;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ObeliskCharging, Category="Renegade NXT|Building|Runtime")
    bool bObeliskCharging = false;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TeamPowerOnline, Category="Renegade NXT|Building|Runtime")
    bool bTeamPowerOnline = true;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingHealthChangedSignature OnBuildingHealthChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingUnderAttackSignature OnBuildingUnderAttack;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingDestroyedSignature OnBuildingDestroyed;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingRestoredSignature OnBuildingRestored;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingDefenseTargetChangedSignature OnDefenseTargetChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingDefenseFiredSignature OnDefenseFired;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Building|Events")
    FRenegadeBuildingPowerChangedSignature OnTeamPowerChanged;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Team")
    void SetTeamId(FName NewTeamId);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Building")
    float GetHealthPercent() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Building")
    bool IsBuildingOperational() const { return !bIsDestroyed && CurrentHealth > 0.0f; }

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Building")
    bool IsHostileToActor(const AActor* OtherActor) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Building")
    FVector GetTargetAimLocation() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Building|Defence")
    bool IsValidDefenseTarget(const AActor* PossibleTarget) const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Health")
    void RepairBuilding(float Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Health")
    void SetBuildingHealth(float NewHealth);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Health")
    void ForceDestroyBuilding(AActor* Destroyer);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Health")
    void RestoreBuilding(float RestoredHealth = -1.0f);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Defence")
    void StartBuildingDefense();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Defence")
    void StopBuildingDefense();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Defence")
    void ForceDefenseTargetRefresh();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Defence")
    void SetDefenseTarget(AActor* NewTarget);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Building|Defence")
    void ClearDefenseTarget();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Building|Target")
    void SetRuntimeTargetPointComponent(USceneComponent* NewComponent);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Building|Defence|AGT")
    void SetRuntimeAGTRocketMuzzles(USceneComponent* LeftMuzzle, USceneComponent* RightMuzzle);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Building|Defence|Obelisk")
    void SetRuntimeObeliskLaserStart(USceneComponent* LaserStart);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Building|Defence|Preview")
    void PreviewAGTRocketVisuals(FVector TraceEnd);

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Building|Defence|Preview")
    void PreviewObeliskLaser(FVector TraceEnd);

protected:
    UFUNCTION()
    void HandleOwnerAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

    UFUNCTION()
    void OnRep_TeamId();

    UFUNCTION()
    void OnRep_CurrentHealth(float PreviousHealth);

    UFUNCTION()
    void OnRep_Destroyed();

    UFUNCTION()
    void OnRep_DefenseTarget(AActor* PreviousTarget);

    UFUNCTION()
    void OnRep_ObeliskCharging();

    UFUNCTION()
    void OnRep_TeamPowerOnline();

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastBuildingUnderAttack(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastBuildingDestroyed(AActor* Destroyer, FVector_NetQuantize EffectLocation);

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastAGTRocketsFired(
        bool bUseLeft,
        FVector_NetQuantize LeftStart,
        FVector_NetQuantize LeftEnd,
        bool bUseRight,
        FVector_NetQuantize RightStart,
        FVector_NetQuantize RightEnd,
        FVector_NetQuantize SoundLocation);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastObeliskChargeStarted(FVector_NetQuantize ChargeLocation);

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastObeliskFired(FVector_NetQuantize LaserStart, FVector_NetQuantize LaserEnd);

private:
    bool HasAuthority() const;
    void RegisterWithCombatWorld();
    void UnregisterFromCombatWorld();
    void AutoResolveDefenseType();
    void UpdateTickState();

    USceneComponent* ResolveSceneComponent(const FComponentReference& Reference, FName ComponentTag, USceneComponent* RuntimeOverride) const;
    FVector ResolveSceneLocation(const FComponentReference& Reference, FName ComponentTag, USceneComponent* RuntimeOverride, const FVector& RelativeOffset, const FVector& Fallback) const;

    void ApplyHealthDelta(float Delta, AController* InstigatedBy, AActor* DamageCauser);
    void BeginBuildingDestroyed(AController* InstigatedBy, AActor* Destroyer);
    void ApplyDestroyedPresentation();
    void RestoreOperationalPresentation();
    void RequestUnderAttackAnnouncement(AActor* Attacker, float Damage);

    void RefreshDefenseTargeting();
    AActor* FindBestDefenseTarget() const;
    bool HasLineOfSightToDefenseTarget(const AActor* Target, FVector* OutAimLocation = nullptr) const;
    FVector GetDefenseTargetAimLocation(const AActor* Target) const;
    void SetDefenseTargetInternal(AActor* NewTarget);
    void ScheduleNextDefenseAttack(float DelaySeconds);
    void ExecuteScheduledDefenseAttack();
    bool IsDefensePowerAvailable() const;
    void UpdateReplicatedPowerState();

    void FireAdvancedGuardTower();
    void BeginObeliskCharge();
    void FireObeliskLaser();
    bool PerformDefenseTrace(const FVector& Start, const FVector& End, FHitResult& OutHit) const;
    URenegadeSoldierCombatComponent* ResolveSoldierCombatFromActorHierarchy(AActor* StartActor) const;
    bool ApplyDefensePointDamage(const FHitResult& Hit, const FVector& TraceStart, float Damage, TSubclassOf<UDamageType> DamageTypeClass);

    void SpawnRocketVisual(const FVector& Start, const FVector& End, bool bSpawnImpactEffect);
    UStaticMeshComponent* AcquireRocketVisualComponent(int32& OutIndex);
    void UpdateRocketVisuals(float DeltaTime);
    void DeactivateRocketVisual(int32 Index, bool bSpawnImpactEffect);
    void StopAllRocketVisuals();
    void SpawnObeliskLaserVisual(const FVector& Start, const FVector& End);
    void CleanupObeliskCascadeVisual(UParticleSystemComponent* ParticleComponent);
    void CleanupObeliskNiagaraVisual(UNiagaraComponent* NiagaraComponent);
    void StopAllObeliskLaserVisuals();

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeTargetPointComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeAGTLeftMuzzleComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeAGTRightMuzzleComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeObeliskLaserStartComponent;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> RocketVisualComponents;

    TArray<FRenegadeBuildingRocketRuntimeState> RocketVisualStates;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UParticleSystemComponent>> ActiveObeliskCascadeVisuals;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UNiagaraComponent>> ActiveObeliskNiagaraVisuals;

    FTimerHandle DefenseRefreshTimer;
    FTimerHandle DefenseAttackTimer;
    FTimerHandle ObeliskChargeTimer;

    float LastUnderAttackRequestTime = -BIG_NUMBER;
    bool bDefenseRunning = false;
    bool bOriginalOwnerHidden = false;
    bool bOriginalOwnerCollisionEnabled = true;
};
