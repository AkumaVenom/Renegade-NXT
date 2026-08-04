#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RenegadeCombatTypes.generated.h"

class UDamageType;

UENUM(BlueprintType)
enum class ERenegadeWeaponClass : uint8
{
    AutomaticRifle UMETA(DisplayName="Automatic Rifle"),
    Pistol UMETA(DisplayName="Pistol"),
    Custom UMETA(DisplayName="Custom")
};

UENUM(BlueprintType)
enum class ERenegadeCombatMoveType : uint8
{
    Hold,
    Advance,
    Retreat,
    StrafeLeft,
    StrafeRight,
    SearchLastKnownPosition
};

UENUM(BlueprintType)
enum class ERenegadeRespawnTransformMode : uint8
{
    OriginalTransform UMETA(DisplayName="Original Actor Transform"),
    MatchingTeamSpawnPoint UMETA(DisplayName="Random Matching Team Spawn Point"),
    CustomTransform UMETA(DisplayName="Custom Transform")
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeWeaponSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
    ERenegadeWeaponClass WeaponClass = ERenegadeWeaponClass::AutomaticRifle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float DamagePerShot = 11.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float MaximumRange = 4500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float RoundsPerMinute = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="1"))
    int32 MinimumBurstShots = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="1"))
    int32 MaximumBurstShots = 7;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="0.0"))
    float MinimumBurstPause = 0.20f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="0.0"))
    float MaximumBurstPause = 0.55f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Accuracy", meta=(ClampMin="0.0", ClampMax="45.0"))
    float HipFireSpreadDegrees = 2.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Accuracy", meta=(ClampMin="0.0", ClampMax="45.0"))
    float MovingSpreadPenaltyDegrees = 1.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="1.0"))
    float CriticalHitMultiplier = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage")
    TArray<FName> CriticalBones = { FName(TEXT("head")), FName(TEXT("neck_01")) };

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="0.0", ClampMax="1.0"))
    float MinimumLongRangeDamageMultiplier = 0.70f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="0.0", ClampMax="1.0"))
    float DamageFalloffStartFraction = 0.65f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine")
    bool bUseMagazine = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine", meta=(ClampMin="1", EditCondition="bUseMagazine"))
    int32 MagazineSize = 30;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine", meta=(ClampMin="0.0", EditCondition="bUseMagazine"))
    float ReloadSeconds = 2.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
    FName MuzzleSocketName = TEXT("Muzzle");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
    FName AimBoneName = TEXT("spine_03");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace")
    bool bAllowFriendlyFire = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage")
    TSubclassOf<UDamageType> DamageTypeClass;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeTargetingSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="100.0"))
    float SearchRadius = 5000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="0.05"))
    float TargetRefreshSeconds = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="0.0"))
    float LostSightGraceSeconds = 1.75f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting")
    bool bRequireLineOfSight = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting")
    bool bRetaliateWhenDamaged = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="1.0"))
    float LoseTargetRadiusMultiplier = 1.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="0.0"))
    float AimHeightOffset = 8.0f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeCombatMovementSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement")
    bool bEnableCombatMovement = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.10"))
    float MovementUpdateSeconds = 0.55f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float PreferredMinimumRange = 700.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float PreferredMaximumRange = 1800.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float AdvanceStepDistance = 650.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float RetreatStepDistance = 550.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float StrafeStepDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float NavigationProjectionExtent = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float MoveAcceptanceRadius = 90.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.1", ClampMax="3.0"))
    float CombatWalkSpeedMultiplier = 0.85f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0", ClampMax="1.0"))
    float StrafeDirectionChangeChance = 0.28f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement")
    bool bUsePathfinding = true;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHealthRespawnSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health", meta=(ClampMin="1.0"))
    float MaximumHealth = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
    bool bCanRespawn = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(ClampMin="0.0", EditCondition="bCanRespawn"))
    float RespawnDelaySeconds = 8.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(ClampMin="0.0", EditCondition="bCanRespawn"))
    float RespawnInvulnerabilitySeconds = 1.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    ERenegadeRespawnTransformMode RespawnTransformMode = ERenegadeRespawnTransformMode::OriginalTransform;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    FTransform CustomRespawnTransform;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bEnableAutomaticRagdoll = true;

    /** Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    FName RagdollMeshComponentTag = NAME_None;

    /** If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bAutoFindRagdollMeshWithPhysicsAsset = true;

    /** Forces the simulated bodies to fully drive the rendered pose while dead. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bForceFullPhysicsBlendOnRagdoll = true;

    /**
     * Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower
     * to the leader skeletal mesh that owns the real bone transform buffer.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bResolveLeaderPoseMeshForRagdoll = true;

    /**
     * Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.
     * This is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bUseRagdollRootBone = true;

    /** First bone whose body and descendants should enter ragdoll. Usually pelvis or hips. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability", meta=(EditCondition="bUseRagdollRootBone"))
    FName RagdollRootBone = TEXT("pelvis");

    /** Include the Ragdoll Root Bone itself when starting physics. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability", meta=(EditCondition="bUseRagdollRootBone"))
    bool bIncludeRagdollRootBone = true;

    /** Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bDisableSecondaryAnimationDuringRagdoll = true;

    /** Print a clear Output Log warning when ragdoll cannot start. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bLogRagdollSetupWarnings = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    FName RagdollCollisionProfileName = TEXT("Ragdoll");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll", meta=(ClampMin="0.0"))
    float RagdollImpulseStrength = 1350.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bRagdollImpulseIsVelocityChange = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bDisableCapsuleCollisionOnDeath = true;
};
