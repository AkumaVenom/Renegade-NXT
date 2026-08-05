// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeBuildingCombatComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "RenegadeBuildingCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeBuildingCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseFiredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseTargetChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDestroyedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingLowHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingPowerChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingRestoredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingUnderAttackSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeObeliskSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeBuildingHealthChangedSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms
	{
		float PreviousHealth;
		float NewHealth;
		AActor* DamageCauser;
		AController* InstigatedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingHealthChangedSignature constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingHealthChangedSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingHealthChangedSignature Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingHealthChangedSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingHealthChangedSignature *********************************

// ********** Begin Delegate FRenegadeBuildingUnderAttackSignature *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingUnderAttackSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingUnderAttackSignature_Parms
	{
		AActor* Attacker;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingUnderAttackSignature constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingUnderAttackSignature constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingUnderAttackSignature Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingUnderAttackSignature_Parms, Attacker), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingUnderAttackSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingUnderAttackSignature Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingUnderAttackSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingUnderAttackSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingUnderAttackSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingUnderAttackSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingUnderAttackSignature ***********************************

// ********** Begin Delegate FRenegadeBuildingLowHealthChangedSignature ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingLowHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms
	{
		bool bLowHealth;
		float HealthPercent;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingLowHealthChangedSignature constinit property declarations 
	static void NewProp_bLowHealth_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms*)Obj)->bLowHealth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingLowHealthChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingLowHealthChangedSignature Property Definitions *******
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLowHealth = { "bLowHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms), &UHT_STATICS::NewProp_bLowHealth_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms, HealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLowHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingLowHealthChangedSignature Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingLowHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingLowHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingLowHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingLowHealthChangedSignature ******************************

// ********** Begin Delegate FRenegadeBuildingDestroyedSignature ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDestroyedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingDestroyedSignature_Parms
	{
		AActor* Destroyer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingDestroyedSignature constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingDestroyedSignature constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingDestroyedSignature Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDestroyedSignature_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingDestroyedSignature Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingDestroyedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDestroyedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDestroyedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDestroyedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingDestroyedSignature *************************************

// ********** Begin Delegate FRenegadeBuildingRestoredSignature ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingRestoredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingRestoredSignature constinit property declarations ****
// ********** End Delegate FRenegadeBuildingRestoredSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingRestoredSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingRestoredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingRestoredSignature **************************************

// ********** Begin Delegate FRenegadeBuildingDefenseTargetChangedSignature ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseTargetChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseTargetChangedSignature_Parms
	{
		AActor* PreviousTarget;
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingDefenseTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingDefenseTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingDefenseTargetChangedSignature Property Definitions ***
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseTargetChangedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseTargetChangedSignature_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingDefenseTargetChangedSignature Property Definitions *****
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingDefenseTargetChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseTargetChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseTargetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseTargetChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingDefenseTargetChangedSignature **************************

// ********** Begin Delegate FRenegadeBuildingDefenseFiredSignature ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseFiredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms
	{
		ERenegadeBuildingDefenseType DefenseType;
		FVector TraceStart;
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingDefenseFiredSignature constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefenseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefenseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingDefenseFiredSignature constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingDefenseFiredSignature Property Definitions ***********
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DefenseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DefenseType = { "DefenseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms, DefenseType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType, METADATA_PARAMS(0, nullptr) }; // 7022157ce3d5c0f0641ba871f746fcd0fa193716
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefenseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingDefenseFiredSignature Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingDefenseFiredSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingDefenseFiredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseFiredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingDefenseFiredSignature **********************************

// ********** Begin Delegate FRenegadeBuildingPowerChangedSignature ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingPowerChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeBuildingPowerChangedSignature_Parms
	{
		bool bPowerOnline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeBuildingPowerChangedSignature constinit property declarations 
	static void NewProp_bPowerOnline_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadeBuildingPowerChangedSignature_Parms*)Obj)->bPowerOnline = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPowerOnline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeBuildingPowerChangedSignature constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeBuildingPowerChangedSignature Property Definitions ***********
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPowerOnline = { "bPowerOnline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadeBuildingPowerChangedSignature_Parms), &UHT_STATICS::NewProp_bPowerOnline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPowerOnline,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeBuildingPowerChangedSignature Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeBuildingPowerChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingPowerChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeBuildingPowerChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingPowerChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeBuildingPowerChangedSignature **********************************

// ********** Begin Class URenegadeBuildingCombatComponent Function ClearDefenseTarget *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_ClearDefenseTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearDefenseTarget constinit property declarations ********************
// ********** End Function ClearDefenseTarget constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "ClearDefenseTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_ClearDefenseTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execClearDefenseTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDefenseTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function ClearDefenseTarget ***************

// ********** Begin Class URenegadeBuildingCombatComponent Function ForceDefenseTargetRefresh ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDefenseTargetRefresh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDefenseTargetRefresh constinit property declarations *************
// ********** End Function ForceDefenseTargetRefresh constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "ForceDefenseTargetRefresh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDefenseTargetRefresh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execForceDefenseTargetRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceDefenseTargetRefresh();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function ForceDefenseTargetRefresh ********

// ********** Begin Class URenegadeBuildingCombatComponent Function ForceDestroyBuilding ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDestroyBuilding_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventForceDestroyBuilding_Parms
	{
		AActor* Destroyer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDestroyBuilding constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceDestroyBuilding constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceDestroyBuilding Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventForceDestroyBuilding_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceDestroyBuilding Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "ForceDestroyBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventForceDestroyBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventForceDestroyBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDestroyBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execForceDestroyBuilding)
{
	P_GET_OBJECT(AActor,Z_Param_Destroyer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceDestroyBuilding(Z_Param_Destroyer);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function ForceDestroyBuilding *************

// ********** Begin Class URenegadeBuildingCombatComponent Function GetHealthPercent ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetHealthPercent_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "GetHealthPercent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventGetHealthPercent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetHealthPercent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function GetHealthPercent *****************

// ********** Begin Class URenegadeBuildingCombatComponent Function GetTargetAimLocation ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetTargetAimLocation_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventGetTargetAimLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetAimLocation constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetAimLocation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetAimLocation Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventGetTargetAimLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTargetAimLocation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "GetTargetAimLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventGetTargetAimLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventGetTargetAimLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetTargetAimLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execGetTargetAimLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetAimLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function GetTargetAimLocation *************

// ********** Begin Class URenegadeBuildingCombatComponent Function HandleOwnerAnyDamage ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_HandleOwnerAnyDamage_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOwnerAnyDamage constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOwnerAnyDamage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOwnerAnyDamage Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleOwnerAnyDamage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "HandleOwnerAnyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventHandleOwnerAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_HandleOwnerAnyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execHandleOwnerAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function HandleOwnerAnyDamage *************

// ********** Begin Class URenegadeBuildingCombatComponent Function IsBuildingLowHealth ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingLowHealth_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventIsBuildingLowHealth_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBuildingLowHealth constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventIsBuildingLowHealth_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBuildingLowHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBuildingLowHealth Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventIsBuildingLowHealth_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBuildingLowHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "IsBuildingLowHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventIsBuildingLowHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventIsBuildingLowHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingLowHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execIsBuildingLowHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBuildingLowHealth();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function IsBuildingLowHealth **************

// ********** Begin Class URenegadeBuildingCombatComponent Function IsBuildingOperational **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingOperational_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventIsBuildingOperational_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBuildingOperational constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventIsBuildingOperational_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBuildingOperational constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBuildingOperational Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventIsBuildingOperational_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBuildingOperational Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "IsBuildingOperational", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventIsBuildingOperational_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventIsBuildingOperational_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingOperational(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execIsBuildingOperational)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBuildingOperational();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function IsBuildingOperational ************

// ********** Begin Class URenegadeBuildingCombatComponent Function IsHostileToActor ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsHostileToActor_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms
	{
		const AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHostileToActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHostileToActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHostileToActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHostileToActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "IsHostileToActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventIsHostileToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsHostileToActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execIsHostileToActor)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHostileToActor(Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function IsHostileToActor *****************

// ********** Begin Class URenegadeBuildingCombatComponent Function IsValidDefenseTarget ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsValidDefenseTarget_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms
	{
		const AActor* PossibleTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibleTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidDefenseTarget constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PossibleTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidDefenseTarget constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidDefenseTarget Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PossibleTarget = { "PossibleTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms, PossibleTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibleTarget_MetaData), NewProp_PossibleTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PossibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidDefenseTarget Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "IsValidDefenseTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventIsValidDefenseTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsValidDefenseTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execIsValidDefenseTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PossibleTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidDefenseTarget(Z_Param_PossibleTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function IsValidDefenseTarget *************

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastAGTRocketsFired *******
struct RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms
{
	bool bUseLeft;
	FVector_NetQuantize LeftStart;
	FVector_NetQuantize LeftEnd;
	bool bUseRight;
	FVector_NetQuantize RightStart;
	FVector_NetQuantize RightEnd;
	FVector_NetQuantize SoundLocation;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastAGTRocketsFired = FName(TEXT("MulticastAGTRocketsFired"));
void URenegadeBuildingCombatComponent::MulticastAGTRocketsFired(bool bUseLeft, FVector_NetQuantize LeftStart, FVector_NetQuantize LeftEnd, bool bUseRight, FVector_NetQuantize RightStart, FVector_NetQuantize RightEnd, FVector_NetQuantize SoundLocation)
{
	RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms Parms;
	Parms.bUseLeft=bUseLeft ? true : false;
	Parms.LeftStart=LeftStart;
	Parms.LeftEnd=LeftEnd;
	Parms.bUseRight=bUseRight ? true : false;
	Parms.RightStart=RightStart;
	Parms.RightEnd=RightEnd;
	Parms.SoundLocation=SoundLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastAGTRocketsFired);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastAGTRocketsFired_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastAGTRocketsFired constinit property declarations **************
	static void NewProp_bUseLeft_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms*)Obj)->bUseLeft = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEnd;
	static void NewProp_bUseRight_SetBit(void* Obj)
	{
		((RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms*)Obj)->bUseRight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastAGTRocketsFired constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastAGTRocketsFired Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseLeft = { "bUseLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms), &UHT_STATICS::NewProp_bUseLeft_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LeftStart = { "LeftStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms, LeftStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LeftEnd = { "LeftEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms, LeftEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRight = { "bUseRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms), &UHT_STATICS::NewProp_bUseRight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RightStart = { "RightStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms, RightStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RightEnd = { "RightEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms, RightEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastAGTRocketsFired Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastAGTRocketsFired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastAGTRocketsFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastAGTRocketsFired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastAGTRocketsFired)
{
	P_GET_UBOOL(Z_Param_bUseLeft);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LeftStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LeftEnd);
	P_GET_UBOOL(Z_Param_bUseRight);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_RightStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_RightEnd);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_SoundLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastAGTRocketsFired_Implementation(Z_Param_bUseLeft,Z_Param_LeftStart,Z_Param_LeftEnd,Z_Param_bUseRight,Z_Param_RightStart,Z_Param_RightEnd,Z_Param_SoundLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastAGTRocketsFired *********

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastBuildingDestroyed *****
struct RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms
{
	AActor* Destroyer;
	FVector_NetQuantize EffectLocation;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastBuildingDestroyed = FName(TEXT("MulticastBuildingDestroyed"));
void URenegadeBuildingCombatComponent::MulticastBuildingDestroyed(AActor* Destroyer, FVector_NetQuantize EffectLocation)
{
	RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms Parms;
	Parms.Destroyer=Destroyer;
	Parms.EffectLocation=EffectLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastBuildingDestroyed);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingDestroyed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastBuildingDestroyed constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastBuildingDestroyed constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastBuildingDestroyed Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EffectLocation = { "EffectLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms, EffectLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EffectLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastBuildingDestroyed Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastBuildingDestroyed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastBuildingDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingDestroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastBuildingDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_Destroyer);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_EffectLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBuildingDestroyed_Implementation(Z_Param_Destroyer,Z_Param_EffectLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastBuildingDestroyed *******

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastBuildingLowHealthWarning 
struct RenegadeBuildingCombatComponent_eventMulticastBuildingLowHealthWarning_Parms
{
	FVector_NetQuantize SoundLocation;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastBuildingLowHealthWarning = FName(TEXT("MulticastBuildingLowHealthWarning"));
void URenegadeBuildingCombatComponent::MulticastBuildingLowHealthWarning(FVector_NetQuantize SoundLocation)
{
	RenegadeBuildingCombatComponent_eventMulticastBuildingLowHealthWarning_Parms Parms;
	Parms.SoundLocation=SoundLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastBuildingLowHealthWarning);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingLowHealthWarning_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastBuildingLowHealthWarning constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastBuildingLowHealthWarning constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastBuildingLowHealthWarning Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingLowHealthWarning_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastBuildingLowHealthWarning Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastBuildingLowHealthWarning", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastBuildingLowHealthWarning_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastBuildingLowHealthWarning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingLowHealthWarning(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastBuildingLowHealthWarning)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_SoundLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBuildingLowHealthWarning_Implementation(Z_Param_SoundLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastBuildingLowHealthWarning 

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastBuildingUnderAttack ***
struct RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms
{
	AActor* Attacker;
	float Damage;
	FVector_NetQuantize SoundLocation;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastBuildingUnderAttack = FName(TEXT("MulticastBuildingUnderAttack"));
void URenegadeBuildingCombatComponent::MulticastBuildingUnderAttack(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation)
{
	RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Damage=Damage;
	Parms.SoundLocation=SoundLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastBuildingUnderAttack);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingUnderAttack_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastBuildingUnderAttack constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastBuildingUnderAttack constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastBuildingUnderAttack Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms, Attacker), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastBuildingUnderAttack Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastBuildingUnderAttack", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastBuildingUnderAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingUnderAttack(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastBuildingUnderAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_SoundLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBuildingUnderAttack_Implementation(Z_Param_Attacker,Z_Param_Damage,Z_Param_SoundLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastBuildingUnderAttack *****

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastObeliskChargeStarted **
struct RenegadeBuildingCombatComponent_eventMulticastObeliskChargeStarted_Parms
{
	FVector_NetQuantize ChargeLocation;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastObeliskChargeStarted = FName(TEXT("MulticastObeliskChargeStarted"));
void URenegadeBuildingCombatComponent::MulticastObeliskChargeStarted(FVector_NetQuantize ChargeLocation)
{
	RenegadeBuildingCombatComponent_eventMulticastObeliskChargeStarted_Parms Parms;
	Parms.ChargeLocation=ChargeLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastObeliskChargeStarted);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskChargeStarted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastObeliskChargeStarted constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChargeLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastObeliskChargeStarted constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastObeliskChargeStarted Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ChargeLocation = { "ChargeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastObeliskChargeStarted_Parms, ChargeLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChargeLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastObeliskChargeStarted Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastObeliskChargeStarted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastObeliskChargeStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastObeliskChargeStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskChargeStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastObeliskChargeStarted)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ChargeLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastObeliskChargeStarted_Implementation(Z_Param_ChargeLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastObeliskChargeStarted ****

// ********** Begin Class URenegadeBuildingCombatComponent Function MulticastObeliskFired **********
struct RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms
{
	FVector_NetQuantize LaserStart;
	FVector_NetQuantize LaserEnd;
};
static FName NAME_URenegadeBuildingCombatComponent_MulticastObeliskFired = FName(TEXT("MulticastObeliskFired"));
void URenegadeBuildingCombatComponent::MulticastObeliskFired(FVector_NetQuantize LaserStart, FVector_NetQuantize LaserEnd)
{
	RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms Parms;
	Parms.LaserStart=LaserStart;
	Parms.LaserEnd=LaserEnd;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeBuildingCombatComponent_MulticastObeliskFired);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskFired_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastObeliskFired constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaserStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaserEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastObeliskFired constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastObeliskFired Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaserStart = { "LaserStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms, LaserStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaserEnd = { "LaserEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms, LaserEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastObeliskFired Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "MulticastObeliskFired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeBuildingCombatComponent_eventMulticastObeliskFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskFired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execMulticastObeliskFired)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LaserStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LaserEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastObeliskFired_Implementation(Z_Param_LaserStart,Z_Param_LaserEnd);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function MulticastObeliskFired ************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_CurrentHealth ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_CurrentHealth_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventOnRep_CurrentHealth_Parms
	{
		float PreviousHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentHealth Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventOnRep_CurrentHealth_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_CurrentHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_CurrentHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventOnRep_CurrentHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_CurrentHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_CurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_PreviousHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_CurrentHealth **************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_DefenseTarget ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_DefenseTarget_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventOnRep_DefenseTarget_Parms
	{
		AActor* PreviousTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_DefenseTarget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_DefenseTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_DefenseTarget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventOnRep_DefenseTarget_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_DefenseTarget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_DefenseTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventOnRep_DefenseTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventOnRep_DefenseTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_DefenseTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_DefenseTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PreviousTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefenseTarget(Z_Param_PreviousTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_DefenseTarget **************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_Destroyed ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_Destroyed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Destroyed constinit property declarations ***********************
// ********** End Function OnRep_Destroyed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_Destroyed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_Destroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_Destroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Destroyed();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_Destroyed ******************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_LowHealth ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_LowHealth_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_LowHealth constinit property declarations ***********************
// ********** End Function OnRep_LowHealth constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_LowHealth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_LowHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_LowHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LowHealth();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_LowHealth ******************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_ObeliskCharging **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_ObeliskCharging_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ObeliskCharging constinit property declarations *****************
// ********** End Function OnRep_ObeliskCharging constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_ObeliskCharging", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_ObeliskCharging(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_ObeliskCharging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ObeliskCharging();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_ObeliskCharging ************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_TeamId *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamId_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamId constinit property declarations **************************
// ********** End Function OnRep_TeamId constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_TeamId", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_TeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamId();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_TeamId *********************

// ********** Begin Class URenegadeBuildingCombatComponent Function OnRep_TeamPowerOnline **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamPowerOnline_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamPowerOnline constinit property declarations *****************
// ********** End Function OnRep_TeamPowerOnline constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "OnRep_TeamPowerOnline", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamPowerOnline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execOnRep_TeamPowerOnline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamPowerOnline();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function OnRep_TeamPowerOnline ************

// ********** Begin Class URenegadeBuildingCombatComponent Function PreviewAGTRocketVisuals ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewAGTRocketVisuals_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventPreviewAGTRocketVisuals_Parms
	{
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Preview" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewAGTRocketVisuals constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewAGTRocketVisuals constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewAGTRocketVisuals Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventPreviewAGTRocketVisuals_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewAGTRocketVisuals Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "PreviewAGTRocketVisuals", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventPreviewAGTRocketVisuals_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventPreviewAGTRocketVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewAGTRocketVisuals(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execPreviewAGTRocketVisuals)
{
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewAGTRocketVisuals(Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function PreviewAGTRocketVisuals **********

// ********** Begin Class URenegadeBuildingCombatComponent Function PreviewObeliskLaser ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewObeliskLaser_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventPreviewObeliskLaser_Parms
	{
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Preview" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewObeliskLaser constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewObeliskLaser constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewObeliskLaser Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventPreviewObeliskLaser_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewObeliskLaser Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "PreviewObeliskLaser", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventPreviewObeliskLaser_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventPreviewObeliskLaser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewObeliskLaser(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execPreviewObeliskLaser)
{
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewObeliskLaser(Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function PreviewObeliskLaser **************

// ********** Begin Class URenegadeBuildingCombatComponent Function RepairBuilding *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_RepairBuilding_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventRepairBuilding_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RepairBuilding constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RepairBuilding constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RepairBuilding Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventRepairBuilding_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RepairBuilding Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "RepairBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventRepairBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventRepairBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_RepairBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execRepairBuilding)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepairBuilding(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function RepairBuilding *******************

// ********** Begin Class URenegadeBuildingCombatComponent Function RestoreBuilding ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_RestoreBuilding_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventRestoreBuilding_Parms
	{
		float RestoredHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "CPP_Default_RestoredHealth", "-1.000000" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RestoreBuilding constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoredHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RestoreBuilding constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RestoreBuilding Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RestoredHealth = { "RestoredHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventRestoreBuilding_Parms, RestoredHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RestoredHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RestoreBuilding Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "RestoreBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventRestoreBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventRestoreBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_RestoreBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execRestoreBuilding)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RestoredHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreBuilding(Z_Param_RestoredHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function RestoreBuilding ******************

// ********** Begin Class URenegadeBuildingCombatComponent Function SetBuildingHealth **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetBuildingHealth_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetBuildingHealth_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBuildingHealth constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBuildingHealth constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBuildingHealth Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetBuildingHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBuildingHealth Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetBuildingHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetBuildingHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetBuildingHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetBuildingHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetBuildingHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBuildingHealth(Z_Param_NewHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetBuildingHealth ****************

// ********** Begin Class URenegadeBuildingCombatComponent Function SetDefenseTarget ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetDefenseTarget_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetDefenseTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDefenseTarget constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDefenseTarget constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDefenseTarget Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetDefenseTarget_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDefenseTarget Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetDefenseTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetDefenseTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetDefenseTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetDefenseTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetDefenseTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefenseTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetDefenseTarget *****************

// ********** Begin Class URenegadeBuildingCombatComponent Function SetRuntimeAGTRocketMuzzles *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeAGTRocketMuzzles_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetRuntimeAGTRocketMuzzles_Parms
	{
		USceneComponent* LeftMuzzle;
		USceneComponent* RightMuzzle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMuzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMuzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeAGTRocketMuzzles constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMuzzle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMuzzle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeAGTRocketMuzzles constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeAGTRocketMuzzles Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftMuzzle = { "LeftMuzzle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetRuntimeAGTRocketMuzzles_Parms, LeftMuzzle), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMuzzle_MetaData), NewProp_LeftMuzzle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightMuzzle = { "RightMuzzle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetRuntimeAGTRocketMuzzles_Parms, RightMuzzle), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMuzzle_MetaData), NewProp_RightMuzzle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftMuzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightMuzzle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeAGTRocketMuzzles Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetRuntimeAGTRocketMuzzles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeAGTRocketMuzzles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeAGTRocketMuzzles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeAGTRocketMuzzles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetRuntimeAGTRocketMuzzles)
{
	P_GET_OBJECT(USceneComponent,Z_Param_LeftMuzzle);
	P_GET_OBJECT(USceneComponent,Z_Param_RightMuzzle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeAGTRocketMuzzles(Z_Param_LeftMuzzle,Z_Param_RightMuzzle);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetRuntimeAGTRocketMuzzles *******

// ********** Begin Class URenegadeBuildingCombatComponent Function SetRuntimeObeliskLaserStart ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeObeliskLaserStart_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetRuntimeObeliskLaserStart_Parms
	{
		USceneComponent* LaserStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Obelisk" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserStart_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeObeliskLaserStart constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeObeliskLaserStart constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeObeliskLaserStart Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaserStart = { "LaserStart", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetRuntimeObeliskLaserStart_Parms, LaserStart), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserStart_MetaData), NewProp_LaserStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserStart,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeObeliskLaserStart Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetRuntimeObeliskLaserStart", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeObeliskLaserStart_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeObeliskLaserStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeObeliskLaserStart(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetRuntimeObeliskLaserStart)
{
	P_GET_OBJECT(USceneComponent,Z_Param_LaserStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeObeliskLaserStart(Z_Param_LaserStart);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetRuntimeObeliskLaserStart ******

// ********** Begin Class URenegadeBuildingCombatComponent Function SetRuntimeTargetPointComponent *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeTargetPointComponent_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetRuntimeTargetPointComponent_Parms
	{
		USceneComponent* NewComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Target" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeTargetPointComponent constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeTargetPointComponent constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeTargetPointComponent Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetRuntimeTargetPointComponent_Parms, NewComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewComponent_MetaData), NewProp_NewComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeTargetPointComponent Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetRuntimeTargetPointComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeTargetPointComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetRuntimeTargetPointComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeTargetPointComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetRuntimeTargetPointComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeTargetPointComponent(Z_Param_NewComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetRuntimeTargetPointComponent ***

// ********** Begin Class URenegadeBuildingCombatComponent Function SetTeamId **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeBuildingCombatComponent_eventSetTeamId_Parms
	{
		FName NewTeamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Team" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeamId constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeamId constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeamId Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NewTeamId = { "NewTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeBuildingCombatComponent_eventSetTeamId_Parms, NewTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTeamId Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "SetTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeBuildingCombatComponent_eventSetTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeBuildingCombatComponent_eventSetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execSetTeamId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamId(Z_Param_NewTeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function SetTeamId ************************

// ********** Begin Class URenegadeBuildingCombatComponent Function StartBuildingDefense ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_StartBuildingDefense_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartBuildingDefense constinit property declarations ******************
// ********** End Function StartBuildingDefense constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "StartBuildingDefense", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_StartBuildingDefense(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execStartBuildingDefense)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBuildingDefense();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function StartBuildingDefense *************

// ********** Begin Class URenegadeBuildingCombatComponent Function StopBuildingDefense ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeBuildingCombatComponent_StopBuildingDefense_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopBuildingDefense constinit property declarations *******************
// ********** End Function StopBuildingDefense constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeBuildingCombatComponent, nullptr, "StopBuildingDefense", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeBuildingCombatComponent_StopBuildingDefense(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeBuildingCombatComponent::execStopBuildingDefense)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBuildingDefense();
	P_NATIVE_END;
}
// ********** End Class URenegadeBuildingCombatComponent Function StopBuildingDefense **************

// ********** Begin Class URenegadeBuildingCombatComponent *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeBuildingCombatComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RenegadeNXT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Add this component to any Renegade NXT building Blueprint to provide replicated health,\n * infantry target registration, global under-attack audio, destruction/repair events,\n * and optional AGT or Obelisk automatic defence.\n */" },
#endif
		{ "IncludePath", "RenegadeBuildingCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add this component to any Renegade NXT building Blueprint to provide replicated health,\ninfantry target registration, global under-attack audio, destruction/repair events,\nand optional AGT or Obelisk automatic defence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Team" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Team" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureOwnerReplicates_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ensures this Blueprint actor replicates so building health, destruction, defence and sounds work in multiplayer. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ensures this Blueprint actor replicates so building health, destruction, defence and sounds work in multiplayer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureOwnerAlwaysRelevant_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps strategic building state and EVA multicasts relevant to every player, including the enemy base across the map. */" },
#endif
		{ "EditCondition", "bEnsureOwnerReplicates" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps strategic building state and EVA multicasts relevant to every player, including the enemy base across the map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingType_MetaData[] = {
		{ "Category", "Renegade NXT|Building" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseType_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic buildings use None. AGT and Obelisk building types automatically select their matching defence on Begin Play unless explicitly changed. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic buildings use None. AGT and Obelisk building types automatically select their matching defence on Begin Play unless explicitly changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Target" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Building|Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exact Scene Component used by infantry and defensive buildings as the building aim point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exact Scene Component used by infantry and defensive buildings as the building aim point." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Target" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-space offset from the selected target Scene Component. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-space offset from the selected target Scene Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDefenseOnBeginPlay_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseTargeting_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGuardTower_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTLeftRocketMuzzleComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTRightRocketMuzzleComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTLeftRocketMuzzleTag_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTRightRocketMuzzleTag_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTLeftRocketMuzzleRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGTRightRocketMuzzleRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|AGT|Muzzles" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obelisk_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Obelisk" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObeliskLaserStartComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Building|Defence|Obelisk|Laser" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObeliskLaserStartComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Obelisk|Laser" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObeliskLaserStartRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Defence|Obelisk|Laser" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLowHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyed_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDefenseTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bObeliskCharging_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeamPowerOnline_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingHealthChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingUnderAttack_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingLowHealthChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires whenever the building enters or exits its configured low-health state. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires whenever the building enters or exits its configured low-health state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingDestroyed_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingRestored_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDefenseTargetChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDefenseFired_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamPowerChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Building|Events" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTargetPointComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeAGTLeftMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeAGTRightMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeObeliskLaserStartComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveObeliskCascadeVisuals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveObeliskNiagaraVisuals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeBuildingCombatComponent constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bDifferentNonNeutralTeamsAreEnemies = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDifferentNonNeutralTeamsAreEnemies;
	static void NewProp_bEnsureOwnerReplicates_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bEnsureOwnerReplicates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureOwnerReplicates;
	static void NewProp_bEnsureOwnerAlwaysRelevant_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bEnsureOwnerAlwaysRelevant = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureOwnerAlwaysRelevant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefenseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefenseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPointComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointRelativeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSettings;
	static void NewProp_bAutoStartDefenseOnBeginPlay_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bAutoStartDefenseOnBeginPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDefenseOnBeginPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseTargeting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedGuardTower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AGTLeftRocketMuzzleComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AGTRightRocketMuzzleComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AGTLeftRocketMuzzleTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AGTRightRocketMuzzleTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AGTLeftRocketMuzzleRelativeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AGTRightRocketMuzzleRelativeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Obelisk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObeliskLaserStartComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObeliskLaserStartComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObeliskLaserStartRelativeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static void NewProp_bIsLowHealth_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bIsLowHealth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLowHealth;
	static void NewProp_bIsDestroyed_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bIsDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDefenseTarget;
	static void NewProp_bObeliskCharging_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bObeliskCharging = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bObeliskCharging;
	static void NewProp_bTeamPowerOnline_SetBit(void* Obj)
	{
		((URenegadeBuildingCombatComponent*)Obj)->bTeamPowerOnline = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamPowerOnline;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingUnderAttack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingLowHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingRestored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDefenseTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDefenseFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamPowerChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTargetPointComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeAGTLeftMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeAGTRightMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeObeliskLaserStartComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketVisualComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RocketVisualComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveObeliskCascadeVisuals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveObeliskCascadeVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveObeliskNiagaraVisuals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveObeliskNiagaraVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeBuildingCombatComponent constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearDefenseTarget"), .Pointer = &URenegadeBuildingCombatComponent::execClearDefenseTarget },
		{ .NameUTF8 = UTF8TEXT("ForceDefenseTargetRefresh"), .Pointer = &URenegadeBuildingCombatComponent::execForceDefenseTargetRefresh },
		{ .NameUTF8 = UTF8TEXT("ForceDestroyBuilding"), .Pointer = &URenegadeBuildingCombatComponent::execForceDestroyBuilding },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &URenegadeBuildingCombatComponent::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetTargetAimLocation"), .Pointer = &URenegadeBuildingCombatComponent::execGetTargetAimLocation },
		{ .NameUTF8 = UTF8TEXT("HandleOwnerAnyDamage"), .Pointer = &URenegadeBuildingCombatComponent::execHandleOwnerAnyDamage },
		{ .NameUTF8 = UTF8TEXT("IsBuildingLowHealth"), .Pointer = &URenegadeBuildingCombatComponent::execIsBuildingLowHealth },
		{ .NameUTF8 = UTF8TEXT("IsBuildingOperational"), .Pointer = &URenegadeBuildingCombatComponent::execIsBuildingOperational },
		{ .NameUTF8 = UTF8TEXT("IsHostileToActor"), .Pointer = &URenegadeBuildingCombatComponent::execIsHostileToActor },
		{ .NameUTF8 = UTF8TEXT("IsValidDefenseTarget"), .Pointer = &URenegadeBuildingCombatComponent::execIsValidDefenseTarget },
		{ .NameUTF8 = UTF8TEXT("MulticastAGTRocketsFired"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastAGTRocketsFired },
		{ .NameUTF8 = UTF8TEXT("MulticastBuildingDestroyed"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastBuildingDestroyed },
		{ .NameUTF8 = UTF8TEXT("MulticastBuildingLowHealthWarning"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastBuildingLowHealthWarning },
		{ .NameUTF8 = UTF8TEXT("MulticastBuildingUnderAttack"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastBuildingUnderAttack },
		{ .NameUTF8 = UTF8TEXT("MulticastObeliskChargeStarted"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastObeliskChargeStarted },
		{ .NameUTF8 = UTF8TEXT("MulticastObeliskFired"), .Pointer = &URenegadeBuildingCombatComponent::execMulticastObeliskFired },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_CurrentHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_DefenseTarget"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_DefenseTarget },
		{ .NameUTF8 = UTF8TEXT("OnRep_Destroyed"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_Destroyed },
		{ .NameUTF8 = UTF8TEXT("OnRep_LowHealth"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_LowHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_ObeliskCharging"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_ObeliskCharging },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamId"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_TeamId },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamPowerOnline"), .Pointer = &URenegadeBuildingCombatComponent::execOnRep_TeamPowerOnline },
		{ .NameUTF8 = UTF8TEXT("PreviewAGTRocketVisuals"), .Pointer = &URenegadeBuildingCombatComponent::execPreviewAGTRocketVisuals },
		{ .NameUTF8 = UTF8TEXT("PreviewObeliskLaser"), .Pointer = &URenegadeBuildingCombatComponent::execPreviewObeliskLaser },
		{ .NameUTF8 = UTF8TEXT("RepairBuilding"), .Pointer = &URenegadeBuildingCombatComponent::execRepairBuilding },
		{ .NameUTF8 = UTF8TEXT("RestoreBuilding"), .Pointer = &URenegadeBuildingCombatComponent::execRestoreBuilding },
		{ .NameUTF8 = UTF8TEXT("SetBuildingHealth"), .Pointer = &URenegadeBuildingCombatComponent::execSetBuildingHealth },
		{ .NameUTF8 = UTF8TEXT("SetDefenseTarget"), .Pointer = &URenegadeBuildingCombatComponent::execSetDefenseTarget },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeAGTRocketMuzzles"), .Pointer = &URenegadeBuildingCombatComponent::execSetRuntimeAGTRocketMuzzles },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeObeliskLaserStart"), .Pointer = &URenegadeBuildingCombatComponent::execSetRuntimeObeliskLaserStart },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeTargetPointComponent"), .Pointer = &URenegadeBuildingCombatComponent::execSetRuntimeTargetPointComponent },
		{ .NameUTF8 = UTF8TEXT("SetTeamId"), .Pointer = &URenegadeBuildingCombatComponent::execSetTeamId },
		{ .NameUTF8 = UTF8TEXT("StartBuildingDefense"), .Pointer = &URenegadeBuildingCombatComponent::execStartBuildingDefense },
		{ .NameUTF8 = UTF8TEXT("StopBuildingDefense"), .Pointer = &URenegadeBuildingCombatComponent::execStopBuildingDefense },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_ClearDefenseTarget, "ClearDefenseTarget" }, // d68b55c3059394c35bc4c721b8d9ca23f601f5b0
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDefenseTargetRefresh, "ForceDefenseTargetRefresh" }, // 4b4cd2eb2c996d40f7eab217f4b61b56f68af6c6
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_ForceDestroyBuilding, "ForceDestroyBuilding" }, // 473800ee556ff4c5b14b477e104de5f1239af2b3
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetHealthPercent, "GetHealthPercent" }, // 9bf628ec5fede7474c2c695d36a50e99e173a9b2
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_GetTargetAimLocation, "GetTargetAimLocation" }, // 81a52d47ceb751d49b60f0cf5a6a248238659e9a
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_HandleOwnerAnyDamage, "HandleOwnerAnyDamage" }, // a12de2e8650bd154f37bca8006691837ffc5fe74
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingLowHealth, "IsBuildingLowHealth" }, // 0c1c0f35bc3d001dfb2fbc398d8223a1d4ddb03f
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsBuildingOperational, "IsBuildingOperational" }, // 68ba0202a867e15f8f42205eaa85ee63b07c4229
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsHostileToActor, "IsHostileToActor" }, // 1f0a1b6311ddaa0a39bfbf6bd9856df3f432fd70
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_IsValidDefenseTarget, "IsValidDefenseTarget" }, // a0f34fd3526c2a6bdc0adab84bb6cb75ae2b2fea
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastAGTRocketsFired, "MulticastAGTRocketsFired" }, // 9ad3a8681ceab9d6b4dd65a8401e895e7ce08069
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingDestroyed, "MulticastBuildingDestroyed" }, // 7867464a77d5e52b8f4bab75ccdcbbfec3bd3c68
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingLowHealthWarning, "MulticastBuildingLowHealthWarning" }, // 5e6deb9f25ec09258cceff23d8ba1fd4fc169199
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastBuildingUnderAttack, "MulticastBuildingUnderAttack" }, // 6fd542487932aeb4c27f30b4919c41aced333a72
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskChargeStarted, "MulticastObeliskChargeStarted" }, // 2b96232fec3f685b20210ff2f53f6075dd884a00
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_MulticastObeliskFired, "MulticastObeliskFired" }, // 9d694df421ba841a748e450a2594ceecb6d1ed83
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 1a2e8081ee8853b2da52d8abf96834f1fc14f59b
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_DefenseTarget, "OnRep_DefenseTarget" }, // e7a3037f41e9ea05f4eadf83bcdb280996b6b1bb
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_Destroyed, "OnRep_Destroyed" }, // a174ce4e3dbde334f26c1b9f3e9cb31a8f20fc20
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_LowHealth, "OnRep_LowHealth" }, // 168f4a93f8625178d52fa1aa16becc79d4075420
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_ObeliskCharging, "OnRep_ObeliskCharging" }, // a61d70b615295f640d2b9bbb6a964de5533c891d
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamId, "OnRep_TeamId" }, // b75a688b731b90c71b449095a52d8bc96aedd74c
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_OnRep_TeamPowerOnline, "OnRep_TeamPowerOnline" }, // 6614c31bcdbcf3636080a9dbac1f6fa4fd6466c7
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewAGTRocketVisuals, "PreviewAGTRocketVisuals" }, // 5531e38c198e1848f7eaaa14b1ec24cc1bb96680
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_PreviewObeliskLaser, "PreviewObeliskLaser" }, // f5ef307561245f22a57415d36c5e4b866637f1a7
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_RepairBuilding, "RepairBuilding" }, // b41926e9b762050c6670ffb9e9239c18bb84ed93
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_RestoreBuilding, "RestoreBuilding" }, // 2f5be961b47337ef23466bfe1cba32cf12a114af
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetBuildingHealth, "SetBuildingHealth" }, // 4d6fed3a6dc741220ed3df025e05e44c4ae282a6
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetDefenseTarget, "SetDefenseTarget" }, // aa98d325d5e6e1bce799b6f0a9c0cb1d2ee0d229
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeAGTRocketMuzzles, "SetRuntimeAGTRocketMuzzles" }, // e672a5dd8290001a9943bac0408a572d35b8b597
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeObeliskLaserStart, "SetRuntimeObeliskLaserStart" }, // d26d4efeb3e71a453ad3c0382e0e468d1b8aaeaf
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetRuntimeTargetPointComponent, "SetRuntimeTargetPointComponent" }, // 5966da12be15af3573ef77d9b43f0bb66af5e9f0
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_SetTeamId, "SetTeamId" }, // cff5f8b1aa68445fdfc4ceaeec5bbb0d87bf941f
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_StartBuildingDefense, "StartBuildingDefense" }, // 80cbc63c7b01995fa07bba5a892f71a9d126019e
		{ &Z_Construct_UFunction_URenegadeBuildingCombatComponent_StopBuildingDefense, "StopBuildingDefense" }, // dd8a001824d40234fa71bf29a1901eec5ab08bf9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeBuildingCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeBuildingCombatComponent Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies = { "bDifferentNonNeutralTeamsAreEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData), NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnsureOwnerReplicates = { "bEnsureOwnerReplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bEnsureOwnerReplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnsureOwnerReplicates_MetaData), NewProp_bEnsureOwnerReplicates_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnsureOwnerAlwaysRelevant = { "bEnsureOwnerAlwaysRelevant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bEnsureOwnerAlwaysRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnsureOwnerAlwaysRelevant_MetaData), NewProp_bEnsureOwnerAlwaysRelevant_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, BuildingType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingType_MetaData), NewProp_BuildingType_MetaData) }; // b84f5c948e08221560ea15f81b29ddecce809ab9
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DefenseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DefenseType = { "DefenseType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, DefenseType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseType_MetaData), NewProp_DefenseType_MetaData) }; // 7022157ce3d5c0f0641ba871f746fcd0fa193716
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HealthSettings = { "HealthSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, HealthSettings), Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSettings_MetaData), NewProp_HealthSettings_MetaData) }; // 7aa9cba6f4bad174e4bbcafd4adc5e41d3cb1c86
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, TargetSettings), Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSettings_MetaData), NewProp_TargetSettings_MetaData) }; // 60bb88de300d61f6bf222275cf9098ba96f14b26
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetPointComponent = { "TargetPointComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, TargetPointComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointComponent_MetaData), NewProp_TargetPointComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetPointComponentTag = { "TargetPointComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, TargetPointComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointComponentTag_MetaData), NewProp_TargetPointComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetPointRelativeOffset = { "TargetPointRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, TargetPointRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointRelativeOffset_MetaData), NewProp_TargetPointRelativeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AudioSettings), Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSettings_MetaData), NewProp_AudioSettings_MetaData) }; // 270548434677779880bba92ee61b85c3d7da5b1e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoStartDefenseOnBeginPlay = { "bAutoStartDefenseOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bAutoStartDefenseOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartDefenseOnBeginPlay_MetaData), NewProp_bAutoStartDefenseOnBeginPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DefenseTargeting = { "DefenseTargeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, DefenseTargeting), Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseTargeting_MetaData), NewProp_DefenseTargeting_MetaData) }; // d5152314679f1443025e13df9bdcdbdc306d21e4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedGuardTower = { "AdvancedGuardTower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AdvancedGuardTower), Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGuardTower_MetaData), NewProp_AdvancedGuardTower_MetaData) }; // 5f7b5f5a8288b93e1659510aceb66b3f9ada0698
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AGTLeftRocketMuzzleComponent = { "AGTLeftRocketMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTLeftRocketMuzzleComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTLeftRocketMuzzleComponent_MetaData), NewProp_AGTLeftRocketMuzzleComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AGTRightRocketMuzzleComponent = { "AGTRightRocketMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTRightRocketMuzzleComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTRightRocketMuzzleComponent_MetaData), NewProp_AGTRightRocketMuzzleComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AGTLeftRocketMuzzleTag = { "AGTLeftRocketMuzzleTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTLeftRocketMuzzleTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTLeftRocketMuzzleTag_MetaData), NewProp_AGTLeftRocketMuzzleTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AGTRightRocketMuzzleTag = { "AGTRightRocketMuzzleTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTRightRocketMuzzleTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTRightRocketMuzzleTag_MetaData), NewProp_AGTRightRocketMuzzleTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AGTLeftRocketMuzzleRelativeOffset = { "AGTLeftRocketMuzzleRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTLeftRocketMuzzleRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTLeftRocketMuzzleRelativeOffset_MetaData), NewProp_AGTLeftRocketMuzzleRelativeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AGTRightRocketMuzzleRelativeOffset = { "AGTRightRocketMuzzleRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, AGTRightRocketMuzzleRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGTRightRocketMuzzleRelativeOffset_MetaData), NewProp_AGTRightRocketMuzzleRelativeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Obelisk = { "Obelisk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, Obelisk), Z_Construct_UScriptStruct_FRenegadeObeliskSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obelisk_MetaData), NewProp_Obelisk_MetaData) }; // d564508416a1a0bd6737990d8885ab7fc82f1451
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ObeliskLaserStartComponent = { "ObeliskLaserStartComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, ObeliskLaserStartComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObeliskLaserStartComponent_MetaData), NewProp_ObeliskLaserStartComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ObeliskLaserStartComponentTag = { "ObeliskLaserStartComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, ObeliskLaserStartComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObeliskLaserStartComponentTag_MetaData), NewProp_ObeliskLaserStartComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ObeliskLaserStartRelativeOffset = { "ObeliskLaserStartRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, ObeliskLaserStartRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObeliskLaserStartRelativeOffset_MetaData), NewProp_ObeliskLaserStartRelativeOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsLowHealth = { "bIsLowHealth", "OnRep_LowHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bIsLowHealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLowHealth_MetaData), NewProp_bIsLowHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsDestroyed = { "bIsDestroyed", "OnRep_Destroyed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDestroyed_MetaData), NewProp_bIsDestroyed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentDefenseTarget = { "CurrentDefenseTarget", "OnRep_DefenseTarget", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, CurrentDefenseTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDefenseTarget_MetaData), NewProp_CurrentDefenseTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bObeliskCharging = { "bObeliskCharging", "OnRep_ObeliskCharging", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bObeliskCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bObeliskCharging_MetaData), NewProp_bObeliskCharging_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTeamPowerOnline = { "bTeamPowerOnline", "OnRep_TeamPowerOnline", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeBuildingCombatComponent), &UHT_STATICS::NewProp_bTeamPowerOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeamPowerOnline_MetaData), NewProp_bTeamPowerOnline_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnBuildingHealthChanged = { "OnBuildingHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnBuildingHealthChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingHealthChanged_MetaData), NewProp_OnBuildingHealthChanged_MetaData) }; // a8d176e1f7621f629b25a6f4d3961f65f5cac4d5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnBuildingUnderAttack = { "OnBuildingUnderAttack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnBuildingUnderAttack), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingUnderAttackSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingUnderAttack_MetaData), NewProp_OnBuildingUnderAttack_MetaData) }; // 385e8da11fbe866494f138ae52df3041b94b86f8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnBuildingLowHealthChanged = { "OnBuildingLowHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnBuildingLowHealthChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingLowHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingLowHealthChanged_MetaData), NewProp_OnBuildingLowHealthChanged_MetaData) }; // cd6e662cb7cf7364d80561400040cb2b8e2e46b8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnBuildingDestroyed = { "OnBuildingDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnBuildingDestroyed), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingDestroyed_MetaData), NewProp_OnBuildingDestroyed_MetaData) }; // 2efac71bb874aacedce33394ae7b8629f225bc72
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnBuildingRestored = { "OnBuildingRestored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnBuildingRestored), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingRestoredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingRestored_MetaData), NewProp_OnBuildingRestored_MetaData) }; // 92f93f5181511da592ed72652a61e0b5d7ef4815
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDefenseTargetChanged = { "OnDefenseTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnDefenseTargetChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseTargetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDefenseTargetChanged_MetaData), NewProp_OnDefenseTargetChanged_MetaData) }; // 1b9fe640645f161e4aaeb6f25083b07f624034a5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDefenseFired = { "OnDefenseFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnDefenseFired), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingDefenseFiredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDefenseFired_MetaData), NewProp_OnDefenseFired_MetaData) }; // d7937d9e176faa482195a0e6dd6d279118e5f5f0
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTeamPowerChanged = { "OnTeamPowerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, OnTeamPowerChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeBuildingPowerChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamPowerChanged_MetaData), NewProp_OnTeamPowerChanged_MetaData) }; // a2c88b675c199d6f2658e6e39baf525b30a9f386
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeTargetPointComponent = { "RuntimeTargetPointComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, RuntimeTargetPointComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTargetPointComponent_MetaData), NewProp_RuntimeTargetPointComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeAGTLeftMuzzleComponent = { "RuntimeAGTLeftMuzzleComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, RuntimeAGTLeftMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeAGTLeftMuzzleComponent_MetaData), NewProp_RuntimeAGTLeftMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeAGTRightMuzzleComponent = { "RuntimeAGTRightMuzzleComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, RuntimeAGTRightMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeAGTRightMuzzleComponent_MetaData), NewProp_RuntimeAGTRightMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeObeliskLaserStartComponent = { "RuntimeObeliskLaserStartComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, RuntimeObeliskLaserStartComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeObeliskLaserStartComponent_MetaData), NewProp_RuntimeObeliskLaserStartComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketVisualComponents_Inner = { "RocketVisualComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RocketVisualComponents = { "RocketVisualComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, RocketVisualComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualComponents_MetaData), NewProp_RocketVisualComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveObeliskCascadeVisuals_Inner = { "ActiveObeliskCascadeVisuals", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleSystemComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveObeliskCascadeVisuals = { "ActiveObeliskCascadeVisuals", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, ActiveObeliskCascadeVisuals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveObeliskCascadeVisuals_MetaData), NewProp_ActiveObeliskCascadeVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveObeliskNiagaraVisuals_Inner = { "ActiveObeliskNiagaraVisuals", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveObeliskNiagaraVisuals = { "ActiveObeliskNiagaraVisuals", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeBuildingCombatComponent, ActiveObeliskNiagaraVisuals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveObeliskNiagaraVisuals_MetaData), NewProp_ActiveObeliskNiagaraVisuals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnsureOwnerReplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnsureOwnerAlwaysRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefenseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoStartDefenseOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefenseTargeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGuardTower,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTLeftRocketMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTRightRocketMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTLeftRocketMuzzleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTRightRocketMuzzleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTLeftRocketMuzzleRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AGTRightRocketMuzzleRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Obelisk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObeliskLaserStartComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObeliskLaserStartComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObeliskLaserStartRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsLowHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentDefenseTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bObeliskCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTeamPowerOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnBuildingHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnBuildingUnderAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnBuildingLowHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnBuildingDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnBuildingRestored,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDefenseTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDefenseFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTeamPowerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeTargetPointComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeAGTLeftMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeAGTRightMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeObeliskLaserStartComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveObeliskCascadeVisuals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveObeliskCascadeVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveObeliskNiagaraVisuals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveObeliskNiagaraVisuals,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeBuildingCombatComponent Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeBuildingCombatComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URenegadeBuildingCombatComponent_StaticRegisterNativesURenegadeBuildingCombatComponent()
{
	UClass* Class = URenegadeBuildingCombatComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeBuildingCombatComponent;
UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeBuildingCombatComponent;
		if (!Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeBuildingCombatComponent"),
				Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.InnerSingleton,
				URenegadeBuildingCombatComponent_StaticRegisterNativesURenegadeBuildingCombatComponent,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeBuildingCombatComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeBuildingCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static FName Name_bIsLowHealth(TEXT("bIsLowHealth"));
	static FName Name_bIsDestroyed(TEXT("bIsDestroyed"));
	static FName Name_CurrentDefenseTarget(TEXT("CurrentDefenseTarget"));
	static FName Name_bObeliskCharging(TEXT("bObeliskCharging"));
	static FName Name_bTeamPowerOnline(TEXT("bTeamPowerOnline"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_bIsLowHealth == ClassReps[(int32)ENetFields_Private::bIsLowHealth].Property->GetFName()
		&& Name_bIsDestroyed == ClassReps[(int32)ENetFields_Private::bIsDestroyed].Property->GetFName()
		&& Name_CurrentDefenseTarget == ClassReps[(int32)ENetFields_Private::CurrentDefenseTarget].Property->GetFName()
		&& Name_bObeliskCharging == ClassReps[(int32)ENetFields_Private::bObeliskCharging].Property->GetFName()
		&& Name_bTeamPowerOnline == ClassReps[(int32)ENetFields_Private::bTeamPowerOnline].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeBuildingCombatComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeBuildingCombatComponent);
URenegadeBuildingCombatComponent::~URenegadeBuildingCombatComponent() {}
// ********** End Class URenegadeBuildingCombatComponent *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeBuildingCombatComponent, TEXT("URenegadeBuildingCombatComponent"), &Z_Registration_Info_UClass_URenegadeBuildingCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeBuildingCombatComponent), 884619964U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h__Script_RenegadeSoldierCombat_26355e40eb2f89d5e3300befad894477915c0ea8{
	TEXT("/Script/RenegadeSoldierCombat"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
