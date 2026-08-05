#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RenegadeCombatTypes.generated.h"

class AActor;
class UDamageType;
class UMaterialInterface;
class UStaticMesh;

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
struct RENEGADESOLDIERCOMBAT_API FRenegadeCombatVisualSettings
{
    GENERATED_BODY()

    /** Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual")
    bool bEnableBulletMeshVisual = true;

    /** Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    TObjectPtr<UStaticMesh> BulletMesh = nullptr;

    /** Optional material override for material slot zero of the bullet mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    TObjectPtr<UMaterialInterface> BulletMaterialOverride = nullptr;

    /** World scale applied to the bullet mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    FVector BulletMeshScale = FVector(0.12f, 0.12f, 0.12f);

    /** Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    FRotator BulletMeshRotationOffset = FRotator::ZeroRotator;

    /** Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="100.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualSpeed = 30000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.001", EditCondition="bEnableBulletMeshVisual"))
    float MinimumBulletVisualSeconds = 0.025f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.001", EditCondition="bEnableBulletMeshVisual"))
    float MaximumBulletVisualSeconds = 0.40f;

    /** Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Spawn", meta=(ClampMin="0.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualMuzzleForwardOffset = 6.0f;

    /** Stops the visual slightly before the impact surface to prevent mesh clipping. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualImpactStopShortDistance = 2.0f;

    /** Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Performance", meta=(ClampMin="1", ClampMax="32", EditCondition="bEnableBulletMeshVisual"))
    int32 BulletVisualPoolSize = 6;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Performance", meta=(EditCondition="bEnableBulletMeshVisual"))
    bool bBulletVisualCastsShadow = false;

    /** Enables automatic blood placement beneath a successfully damaged hostile actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood")
    bool bEnableGroundBloodSplatter = true;

    /** One material is selected randomly for each blood decal. These must use the Deferred Decal material domain. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TArray<TObjectPtr<UMaterialInterface>> GroundBloodDecalMaterials;

    /** Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TSubclassOf<AActor> GroundBloodEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodSpawnChance = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodTraceUpDistance = 40.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodTraceDownDistance = 260.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TEnumAsByte<ECollisionChannel> GroundBloodTraceChannel = ECC_Visibility;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    FVector2D GroundBloodSizeRange = FVector2D(35.0f, 70.0f);

    /** Decal projection depth (the X value of Decal Size). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodDecalDepth = 18.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodSurfaceOffset = 1.5f;

    /** Zero keeps decals alive indefinitely. A positive value automatically removes them. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Lifetime", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodLifeSeconds = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Lifetime", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodFadeSeconds = 5.0f;

    /** Per-soldier throttle that protects large battles from producing excessive decals. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Performance", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float MinimumSecondsBetweenGroundBlood = 0.06f;

    /** When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    bool bDelayGroundBloodUntilBulletArrives = true;
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

    /** First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability", meta=(EditCondition="bUseRagdollRootBone"))
    FName RagdollRootBone = TEXT("spine");

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
