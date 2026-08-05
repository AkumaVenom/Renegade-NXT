// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCombatTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERenegadeWeaponClass ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeWeaponClass>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutomaticRifle.DisplayName", "Automatic Rifle" },
		{ "AutomaticRifle.Name", "ERenegadeWeaponClass::AutomaticRifle" },
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ERenegadeWeaponClass::Custom" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ERenegadeWeaponClass::Pistol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeWeaponClass::AutomaticRifle", (int64)ERenegadeWeaponClass::AutomaticRifle },
		{ "ERenegadeWeaponClass::Pistol", (int64)ERenegadeWeaponClass::Pistol },
		{ "ERenegadeWeaponClass::Custom", (int64)ERenegadeWeaponClass::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeWeaponClass",
	"ERenegadeWeaponClass",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeWeaponClass;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeWeaponClass.OuterSingleton)
		{
			ZRIE_ERenegadeWeaponClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeWeaponClass"));
		}
		return ZRIE_ERenegadeWeaponClass.OuterSingleton;
	}
	if (!ZRIE_ERenegadeWeaponClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeWeaponClass.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeWeaponClass.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeWeaponClass ********************************************************

// ********** Begin Enum ERenegadeCombatMoveType ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeCombatMoveType>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Advance.Name", "ERenegadeCombatMoveType::Advance" },
		{ "BlueprintType", "true" },
		{ "Hold.Name", "ERenegadeCombatMoveType::Hold" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Retreat.Name", "ERenegadeCombatMoveType::Retreat" },
		{ "SearchLastKnownPosition.Name", "ERenegadeCombatMoveType::SearchLastKnownPosition" },
		{ "StrafeLeft.Name", "ERenegadeCombatMoveType::StrafeLeft" },
		{ "StrafeRight.Name", "ERenegadeCombatMoveType::StrafeRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeCombatMoveType::Hold", (int64)ERenegadeCombatMoveType::Hold },
		{ "ERenegadeCombatMoveType::Advance", (int64)ERenegadeCombatMoveType::Advance },
		{ "ERenegadeCombatMoveType::Retreat", (int64)ERenegadeCombatMoveType::Retreat },
		{ "ERenegadeCombatMoveType::StrafeLeft", (int64)ERenegadeCombatMoveType::StrafeLeft },
		{ "ERenegadeCombatMoveType::StrafeRight", (int64)ERenegadeCombatMoveType::StrafeRight },
		{ "ERenegadeCombatMoveType::SearchLastKnownPosition", (int64)ERenegadeCombatMoveType::SearchLastKnownPosition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeCombatMoveType",
	"ERenegadeCombatMoveType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeCombatMoveType;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeCombatMoveType.OuterSingleton)
		{
			ZRIE_ERenegadeCombatMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeCombatMoveType"));
		}
		return ZRIE_ERenegadeCombatMoveType.OuterSingleton;
	}
	if (!ZRIE_ERenegadeCombatMoveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeCombatMoveType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeCombatMoveType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeCombatMoveType *****************************************************

// ********** Begin Enum ERenegadeRespawnTransformMode *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeRespawnTransformMode>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CustomTransform.DisplayName", "Custom Transform" },
		{ "CustomTransform.Name", "ERenegadeRespawnTransformMode::CustomTransform" },
		{ "MatchingTeamSpawnPoint.DisplayName", "Random Matching Team Spawn Point" },
		{ "MatchingTeamSpawnPoint.Name", "ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "OriginalTransform.DisplayName", "Original Actor Transform" },
		{ "OriginalTransform.Name", "ERenegadeRespawnTransformMode::OriginalTransform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeRespawnTransformMode::OriginalTransform", (int64)ERenegadeRespawnTransformMode::OriginalTransform },
		{ "ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint", (int64)ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint },
		{ "ERenegadeRespawnTransformMode::CustomTransform", (int64)ERenegadeRespawnTransformMode::CustomTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeRespawnTransformMode",
	"ERenegadeRespawnTransformMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeRespawnTransformMode;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeRespawnTransformMode.OuterSingleton)
		{
			ZRIE_ERenegadeRespawnTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeRespawnTransformMode"));
		}
		return ZRIE_ERenegadeRespawnTransformMode.OuterSingleton;
	}
	if (!ZRIE_ERenegadeRespawnTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeRespawnTransformMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeRespawnTransformMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeRespawnTransformMode ***********************************************

// ********** Begin ScriptStruct FRenegadeWeaponSettings *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeWeaponSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeWeaponSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerShot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRange_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBurstShots_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBurstShots_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBurstPause_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBurstPause_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipFireSpreadDegrees_MetaData[] = {
		{ "Category", "Weapon|Accuracy" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingSpreadPenaltyDegrees_MetaData[] = {
		{ "Category", "Weapon|Accuracy" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitMultiplier_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalBones_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLongRangeDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloffStartFraction_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMagazine_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseMagazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSeconds_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseMagazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimBoneName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Weapon|Trace" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFriendlyFire_MetaData[] = {
		{ "Category", "Weapon|Trace" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeWeaponSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumBurstShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumBurstShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBurstPause;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumBurstPause;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipFireSpreadDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingSpreadPenaltyDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalHitMultiplier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CriticalBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CriticalBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLongRangeDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffStartFraction;
	static void NewProp_bUseMagazine_SetBit(void* Obj)
	{
		((FRenegadeWeaponSettings*)Obj)->bUseMagazine = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMagazine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSeconds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AimBoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bAllowFriendlyFire_SetBit(void* Obj)
	{
		((FRenegadeWeaponSettings*)Obj)->bAllowFriendlyFire = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFriendlyFire;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeWeaponSettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeWeaponSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeWeaponSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WeaponClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, WeaponClass), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) }; // 23d92e3c9604d70896630bbe764e8668a94c5927
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamagePerShot = { "DamagePerShot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamagePerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerShot_MetaData), NewProp_DamagePerShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRange_MetaData), NewProp_MaximumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinimumBurstShots = { "MinimumBurstShots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumBurstShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBurstShots_MetaData), NewProp_MinimumBurstShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaximumBurstShots = { "MaximumBurstShots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumBurstShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBurstShots_MetaData), NewProp_MaximumBurstShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumBurstPause = { "MinimumBurstPause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumBurstPause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBurstPause_MetaData), NewProp_MinimumBurstPause_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumBurstPause = { "MaximumBurstPause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumBurstPause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBurstPause_MetaData), NewProp_MaximumBurstPause_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HipFireSpreadDegrees = { "HipFireSpreadDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, HipFireSpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipFireSpreadDegrees_MetaData), NewProp_HipFireSpreadDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovingSpreadPenaltyDegrees = { "MovingSpreadPenaltyDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MovingSpreadPenaltyDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingSpreadPenaltyDegrees_MetaData), NewProp_MovingSpreadPenaltyDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CriticalHitMultiplier = { "CriticalHitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, CriticalHitMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitMultiplier_MetaData), NewProp_CriticalHitMultiplier_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CriticalBones_Inner = { "CriticalBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CriticalBones = { "CriticalBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, CriticalBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalBones_MetaData), NewProp_CriticalBones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumLongRangeDamageMultiplier = { "MinimumLongRangeDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumLongRangeDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLongRangeDamageMultiplier_MetaData), NewProp_MinimumLongRangeDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamageFalloffStartFraction = { "DamageFalloffStartFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamageFalloffStartFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFalloffStartFraction_MetaData), NewProp_DamageFalloffStartFraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseMagazine = { "bUseMagazine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeWeaponSettings), &UHT_STATICS::NewProp_bUseMagazine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMagazine_MetaData), NewProp_bUseMagazine_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReloadSeconds = { "ReloadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, ReloadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSeconds_MetaData), NewProp_ReloadSeconds_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData), NewProp_MuzzleSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AimBoneName = { "AimBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, AimBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimBoneName_MetaData), NewProp_AimBoneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowFriendlyFire = { "bAllowFriendlyFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeWeaponSettings), &UHT_STATICS::NewProp_bAllowFriendlyFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFriendlyFire_MetaData), NewProp_bAllowFriendlyFire_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagePerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBurstShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBurstShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBurstPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBurstPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HipFireSpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovingSpreadPenaltyDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalHitMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumLongRangeDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageFalloffStartFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseMagazine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReloadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowFriendlyFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageTypeClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeWeaponSettings Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeWeaponSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeWeaponSettings>(),
	alignof(FRenegadeWeaponSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeWeaponSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeWeaponSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeWeaponSettings *********************************************

// ********** Begin ScriptStruct FRenegadeTargetingSettings ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeTargetingSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeTargetingSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRefreshSeconds_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostSightGraceSeconds_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLineOfSight_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetaliateWhenDamaged_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseTargetRadiusMultiplier_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimHeightOffset_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeTargetingSettings constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRefreshSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightGraceSeconds;
	static void NewProp_bRequireLineOfSight_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bRequireLineOfSight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLineOfSight;
	static void NewProp_bRetaliateWhenDamaged_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bRetaliateWhenDamaged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetaliateWhenDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseTargetRadiusMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimHeightOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeTargetingSettings constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeTargetingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeTargetingSettings Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetRefreshSeconds = { "TargetRefreshSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, TargetRefreshSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRefreshSeconds_MetaData), NewProp_TargetRefreshSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LostSightGraceSeconds = { "LostSightGraceSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, LostSightGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostSightGraceSeconds_MetaData), NewProp_LostSightGraceSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireLineOfSight = { "bRequireLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bRequireLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLineOfSight_MetaData), NewProp_bRequireLineOfSight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRetaliateWhenDamaged = { "bRetaliateWhenDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bRetaliateWhenDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetaliateWhenDamaged_MetaData), NewProp_bRetaliateWhenDamaged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LoseTargetRadiusMultiplier = { "LoseTargetRadiusMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, LoseTargetRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseTargetRadiusMultiplier_MetaData), NewProp_LoseTargetRadiusMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimHeightOffset = { "AimHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, AimHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimHeightOffset_MetaData), NewProp_AimHeightOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRefreshSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LostSightGraceSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRetaliateWhenDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoseTargetRadiusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimHeightOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeTargetingSettings Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeTargetingSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeTargetingSettings>(),
	alignof(FRenegadeTargetingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeTargetingSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeTargetingSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeTargetingSettings ******************************************

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeCombatMovementSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeCombatMovementSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCombatMovement_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementUpdateSeconds_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.10" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMinimumRange_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMaximumRange_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvanceStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetreatStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationProjectionExtent_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAcceptanceRadius_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDirectionChangeChance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings constinit property declarations ***
	static void NewProp_bEnableCombatMovement_SetBit(void* Obj)
	{
		((FRenegadeCombatMovementSettings*)Obj)->bEnableCombatMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCombatMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementUpdateSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredMinimumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredMaximumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetreatStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavigationProjectionExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatWalkSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeDirectionChangeChance;
	static void NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((FRenegadeCombatMovementSettings*)Obj)->bUsePathfinding = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeCombatMovementSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeCombatMovementSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableCombatMovement = { "bEnableCombatMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatMovementSettings), &UHT_STATICS::NewProp_bEnableCombatMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCombatMovement_MetaData), NewProp_bEnableCombatMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovementUpdateSeconds = { "MovementUpdateSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, MovementUpdateSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementUpdateSeconds_MetaData), NewProp_MovementUpdateSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreferredMinimumRange = { "PreferredMinimumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, PreferredMinimumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMinimumRange_MetaData), NewProp_PreferredMinimumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreferredMaximumRange = { "PreferredMaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, PreferredMaximumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMaximumRange_MetaData), NewProp_PreferredMaximumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AdvanceStepDistance = { "AdvanceStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, AdvanceStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvanceStepDistance_MetaData), NewProp_AdvanceStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RetreatStepDistance = { "RetreatStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, RetreatStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetreatStepDistance_MetaData), NewProp_RetreatStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StrafeStepDistance = { "StrafeStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, StrafeStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeStepDistance_MetaData), NewProp_StrafeStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NavigationProjectionExtent = { "NavigationProjectionExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, NavigationProjectionExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationProjectionExtent_MetaData), NewProp_NavigationProjectionExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MoveAcceptanceRadius = { "MoveAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, MoveAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAcceptanceRadius_MetaData), NewProp_MoveAcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CombatWalkSpeedMultiplier = { "CombatWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, CombatWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatWalkSpeedMultiplier_MetaData), NewProp_CombatWalkSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StrafeDirectionChangeChance = { "StrafeDirectionChangeChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, StrafeDirectionChangeChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeDirectionChangeChance_MetaData), NewProp_StrafeDirectionChangeChance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatMovementSettings), &UHT_STATICS::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathfinding_MetaData), NewProp_bUsePathfinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableCombatMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovementUpdateSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferredMinimumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferredMaximumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvanceStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetreatStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StrafeStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NavigationProjectionExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatWalkSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StrafeDirectionChangeChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePathfinding,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeCombatMovementSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeCombatMovementSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeCombatMovementSettings>(),
	alignof(FRenegadeCombatMovementSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeCombatMovementSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeCombatMovementSettings *************************************

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeCombatVisualSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeCombatVisualSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBulletMeshVisual_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMaterialOverride_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional material override for material slot zero of the bullet mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional material override for material slot zero of the bullet mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshScale_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World scale applied to the bullet mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World scale applied to the bullet mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshRotationOffset_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpeed_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBulletVisualSeconds_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.001" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBulletVisualSeconds_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.001" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualMuzzleForwardOffset_MetaData[] = {
		{ "Category", "Bullet Visual|Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualImpactStopShortDistance_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops the visual slightly before the impact surface to prevent mesh clipping. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the visual slightly before the impact surface to prevent mesh clipping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualPoolSize_MetaData[] = {
		{ "Category", "Bullet Visual|Performance" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBulletVisualCastsShadow_MetaData[] = {
		{ "Category", "Bullet Visual|Performance" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGroundBloodSplatter_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables automatic blood placement beneath a successfully damaged hostile actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables automatic blood placement beneath a successfully damaged hostile actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodDecalMaterials_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One material is selected randomly for each blood decal. These must use the Deferred Decal material domain. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One material is selected randomly for each blood decal. These must use the Deferred Decal material domain." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodEffectActorClass_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSpawnChance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceUpDistance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceDownDistance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceChannel_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSizeRange_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodDecalDepth_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decal projection depth (the X value of Decal Size). */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decal projection depth (the X value of Decal Size)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSurfaceOffset_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodLifeSeconds_MetaData[] = {
		{ "Category", "Ground Blood|Lifetime" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zero keeps decals alive indefinitely. A positive value automatically removes them. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zero keeps decals alive indefinitely. A positive value automatically removes them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodFadeSeconds_MetaData[] = {
		{ "Category", "Ground Blood|Lifetime" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSecondsBetweenGroundBlood_MetaData[] = {
		{ "Category", "Ground Blood|Performance" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-soldier throttle that protects large battles from producing excessive decals. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-soldier throttle that protects large battles from producing excessive decals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayGroundBloodUntilBulletArrives_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings constinit property declarations *****
	static void NewProp_bEnableBulletMeshVisual_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bEnableBulletMeshVisual = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBulletMeshVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBulletVisualSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumBulletVisualSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualMuzzleForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualImpactStopShortDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletVisualPoolSize;
	static void NewProp_bBulletVisualCastsShadow_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bBulletVisualCastsShadow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBulletVisualCastsShadow;
	static void NewProp_bEnableGroundBloodSplatter_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bEnableGroundBloodSplatter = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGroundBloodSplatter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundBloodDecalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundBloodDecalMaterials;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GroundBloodEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodSpawnChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodTraceUpDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodTraceDownDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundBloodTraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundBloodSizeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodDecalDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodSurfaceOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodLifeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodFadeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumSecondsBetweenGroundBlood;
	static void NewProp_bDelayGroundBloodUntilBulletArrives_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bDelayGroundBloodUntilBulletArrives = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayGroundBloodUntilBulletArrives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeCombatVisualSettings constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeCombatVisualSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableBulletMeshVisual = { "bEnableBulletMeshVisual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bEnableBulletMeshVisual_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBulletMeshVisual_MetaData), NewProp_bEnableBulletMeshVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMesh_MetaData), NewProp_BulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMaterialOverride = { "BulletMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMaterialOverride_MetaData), NewProp_BulletMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshScale = { "BulletMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshScale_MetaData), NewProp_BulletMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshRotationOffset = { "BulletMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshRotationOffset_MetaData), NewProp_BulletMeshRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualSpeed = { "BulletVisualSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpeed_MetaData), NewProp_BulletVisualSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumBulletVisualSeconds = { "MinimumBulletVisualSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MinimumBulletVisualSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBulletVisualSeconds_MetaData), NewProp_MinimumBulletVisualSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumBulletVisualSeconds = { "MaximumBulletVisualSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MaximumBulletVisualSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBulletVisualSeconds_MetaData), NewProp_MaximumBulletVisualSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualMuzzleForwardOffset = { "BulletVisualMuzzleForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualMuzzleForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualMuzzleForwardOffset_MetaData), NewProp_BulletVisualMuzzleForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualImpactStopShortDistance = { "BulletVisualImpactStopShortDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualImpactStopShortDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualImpactStopShortDistance_MetaData), NewProp_BulletVisualImpactStopShortDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BulletVisualPoolSize = { "BulletVisualPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualPoolSize_MetaData), NewProp_BulletVisualPoolSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBulletVisualCastsShadow = { "bBulletVisualCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bBulletVisualCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBulletVisualCastsShadow_MetaData), NewProp_bBulletVisualCastsShadow_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableGroundBloodSplatter = { "bEnableGroundBloodSplatter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bEnableGroundBloodSplatter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGroundBloodSplatter_MetaData), NewProp_bEnableGroundBloodSplatter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GroundBloodDecalMaterials_Inner = { "GroundBloodDecalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GroundBloodDecalMaterials = { "GroundBloodDecalMaterials", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodDecalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodDecalMaterials_MetaData), NewProp_GroundBloodDecalMaterials_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GroundBloodEffectActorClass = { "GroundBloodEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodEffectActorClass_MetaData), NewProp_GroundBloodEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodSpawnChance = { "GroundBloodSpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSpawnChance_MetaData), NewProp_GroundBloodSpawnChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodTraceUpDistance = { "GroundBloodTraceUpDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceUpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceUpDistance_MetaData), NewProp_GroundBloodTraceUpDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodTraceDownDistance = { "GroundBloodTraceDownDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceDownDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceDownDistance_MetaData), NewProp_GroundBloodTraceDownDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_GroundBloodTraceChannel = { "GroundBloodTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceChannel_MetaData), NewProp_GroundBloodTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroundBloodSizeRange = { "GroundBloodSizeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSizeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSizeRange_MetaData), NewProp_GroundBloodSizeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodDecalDepth = { "GroundBloodDecalDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodDecalDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodDecalDepth_MetaData), NewProp_GroundBloodDecalDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodSurfaceOffset = { "GroundBloodSurfaceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSurfaceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSurfaceOffset_MetaData), NewProp_GroundBloodSurfaceOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodLifeSeconds = { "GroundBloodLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodLifeSeconds_MetaData), NewProp_GroundBloodLifeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodFadeSeconds = { "GroundBloodFadeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodFadeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodFadeSeconds_MetaData), NewProp_GroundBloodFadeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumSecondsBetweenGroundBlood = { "MinimumSecondsBetweenGroundBlood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MinimumSecondsBetweenGroundBlood), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumSecondsBetweenGroundBlood_MetaData), NewProp_MinimumSecondsBetweenGroundBlood_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives = { "bDelayGroundBloodUntilBulletArrives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayGroundBloodUntilBulletArrives_MetaData), NewProp_bDelayGroundBloodUntilBulletArrives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableBulletMeshVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBulletVisualSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBulletVisualSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualMuzzleForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualImpactStopShortDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBulletVisualCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableGroundBloodSplatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceUpDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceDownDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSizeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSurfaceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodFadeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumSecondsBetweenGroundBlood,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeCombatVisualSettings Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeCombatVisualSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeCombatVisualSettings>(),
	alignof(FRenegadeCombatVisualSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeCombatVisualSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeCombatVisualSettings ***************************************

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHealthRespawnSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHealthRespawnSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRespawn_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelaySeconds_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnInvulnerabilitySeconds_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTransformMode_MetaData[] = {
		{ "Category", "Respawn" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRespawnTransform_MetaData[] = {
		{ "Category", "Respawn" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollMeshComponentTag_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forces the simulated bodies to fully drive the rendered pose while dead. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces the simulated bodies to fully drive the rendered pose while dead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower\n     * to the leader skeletal mesh that owns the real bone transform buffer.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower\nto the leader skeletal mesh that owns the real bone transform buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.\n     * This is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.\nThis is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine. */" },
#endif
		{ "EditCondition", "bUseRagdollRootBone" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeRagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include the Ragdoll Root Bone itself when starting physics. */" },
#endif
		{ "EditCondition", "bUseRagdollRootBone" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include the Ragdoll Root Bone itself when starting physics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogRagdollSetupWarnings_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Print a clear Output Log warning when ragdoll cannot start. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print a clear Output Log warning when ragdoll cannot start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollCollisionProfileName_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollImpulseStrength_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollImpulseIsVelocityChange_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCapsuleCollisionOnDeath_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings constinit property declarations ****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
	static void NewProp_bCanRespawn_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bCanRespawn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnInvulnerabilitySeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RespawnTransformMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RespawnTransformMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRespawnTransform;
	static void NewProp_bEnableAutomaticRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bEnableAutomaticRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticRagdoll;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollMeshComponentTag;
	static void NewProp_bAutoFindRagdollMeshWithPhysicsAsset_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bAutoFindRagdollMeshWithPhysicsAsset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindRagdollMeshWithPhysicsAsset;
	static void NewProp_bForceFullPhysicsBlendOnRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bForceFullPhysicsBlendOnRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullPhysicsBlendOnRagdoll;
	static void NewProp_bResolveLeaderPoseMeshForRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bResolveLeaderPoseMeshForRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolveLeaderPoseMeshForRagdoll;
	static void NewProp_bUseRagdollRootBone_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bUseRagdollRootBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRagdollRootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollRootBone;
	static void NewProp_bIncludeRagdollRootBone_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bIncludeRagdollRootBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRagdollRootBone;
	static void NewProp_bDisableSecondaryAnimationDuringRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bDisableSecondaryAnimationDuringRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSecondaryAnimationDuringRagdoll;
	static void NewProp_bLogRagdollSetupWarnings_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bLogRagdollSetupWarnings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogRagdollSetupWarnings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollCollisionProfileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollImpulseStrength;
	static void NewProp_bRagdollImpulseIsVelocityChange_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bRagdollImpulseIsVelocityChange = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollImpulseIsVelocityChange;
	static void NewProp_bDisableCapsuleCollisionOnDeath_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bDisableCapsuleCollisionOnDeath = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCapsuleCollisionOnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHealthRespawnSettings constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHealthRespawnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings Property Definitions ***************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHealth_MetaData), NewProp_MaximumHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanRespawn = { "bCanRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bCanRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRespawn_MetaData), NewProp_bCanRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RespawnDelaySeconds = { "RespawnDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelaySeconds_MetaData), NewProp_RespawnDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RespawnInvulnerabilitySeconds = { "RespawnInvulnerabilitySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnInvulnerabilitySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnInvulnerabilitySeconds_MetaData), NewProp_RespawnInvulnerabilitySeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RespawnTransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RespawnTransformMode = { "RespawnTransformMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnTransformMode), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTransformMode_MetaData), NewProp_RespawnTransformMode_MetaData) }; // d05f4aa40af3f998160720f17ed9e7bd1e3269a8
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CustomRespawnTransform = { "CustomRespawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, CustomRespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRespawnTransform_MetaData), NewProp_CustomRespawnTransform_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAutomaticRagdoll = { "bEnableAutomaticRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bEnableAutomaticRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticRagdoll_MetaData), NewProp_bEnableAutomaticRagdoll_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollMeshComponentTag = { "RagdollMeshComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollMeshComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollMeshComponentTag_MetaData), NewProp_RagdollMeshComponentTag_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset = { "bAutoFindRagdollMeshWithPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData), NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll = { "bForceFullPhysicsBlendOnRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData), NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll = { "bResolveLeaderPoseMeshForRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData), NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRagdollRootBone = { "bUseRagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bUseRagdollRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRagdollRootBone_MetaData), NewProp_bUseRagdollRootBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollRootBone = { "RagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollRootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollRootBone_MetaData), NewProp_RagdollRootBone_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeRagdollRootBone = { "bIncludeRagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bIncludeRagdollRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeRagdollRootBone_MetaData), NewProp_bIncludeRagdollRootBone_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll = { "bDisableSecondaryAnimationDuringRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData), NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLogRagdollSetupWarnings = { "bLogRagdollSetupWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bLogRagdollSetupWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogRagdollSetupWarnings_MetaData), NewProp_bLogRagdollSetupWarnings_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollCollisionProfileName = { "RagdollCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollCollisionProfileName_MetaData), NewProp_RagdollCollisionProfileName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RagdollImpulseStrength = { "RagdollImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollImpulseStrength_MetaData), NewProp_RagdollImpulseStrength_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange = { "bRagdollImpulseIsVelocityChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRagdollImpulseIsVelocityChange_MetaData), NewProp_bRagdollImpulseIsVelocityChange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath = { "bDisableCapsuleCollisionOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCapsuleCollisionOnDeath_MetaData), NewProp_bDisableCapsuleCollisionOnDeath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnInvulnerabilitySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransformMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransformMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAutomaticRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollMeshComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeRagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLogRagdollSetupWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHealthRespawnSettings Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHealthRespawnSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHealthRespawnSettings>(),
	alignof(FRenegadeHealthRespawnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHealthRespawnSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHealthRespawnSettings **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, TEXT("ERenegadeWeaponClass"), &ZRIE_ERenegadeWeaponClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601435708U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, TEXT("ERenegadeCombatMoveType"), &ZRIE_ERenegadeCombatMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1476638583U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, TEXT("ERenegadeRespawnTransformMode"), &ZRIE_ERenegadeRespawnTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3495905956U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRenegadeWeaponSettings, Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics::NewStructOps, TEXT("RenegadeWeaponSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeWeaponSettings), 432380438U) },
		{ Z_Construct_UScriptStruct_FRenegadeTargetingSettings, Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics::NewStructOps, TEXT("RenegadeTargetingSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeTargetingSettings), 2865162924U) },
		{ Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics::NewStructOps, TEXT("RenegadeCombatMovementSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeCombatMovementSettings), 3050183974U) },
		{ Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings, Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings_Statics::NewStructOps, TEXT("RenegadeCombatVisualSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeCombatVisualSettings), 3833718575U) },
		{ Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics::NewStructOps, TEXT("RenegadeHealthRespawnSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHealthRespawnSettings), 2966336579U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h__Script_RenegadeSoldierCombat_e7072cc425b62ec0fa555719ede73605123e0aca{
	TEXT("/Script/RenegadeSoldierCombat"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
