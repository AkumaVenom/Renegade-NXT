// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSoldierCombatComponent.h"
#include "Engine/HitResult.h"
#include "RenegadeCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSoldierCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_ACharacter(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeWeaponProfile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeTargetChangedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms
	{
		AActor* PreviousTarget;
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeTargetChangedSignature constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeTargetChangedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeTargetChangedSignature Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeTargetChangedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeTargetChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeTargetChangedSignature *****************************************

// ********** Begin Delegate FRenegadeCombatStartedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatStartedSignature constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatStartedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatStartedSignature Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms, Target), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatStartedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatStartedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatStartedSignature *****************************************

// ********** Begin Delegate FRenegadeCombatEndedSignature *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms
	{
		AActor* PreviousTarget;
		FVector ResumeFromLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatEndedSignature constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResumeFromLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatEndedSignature constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatEndedSignature Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResumeFromLocation = { "ResumeFromLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms, ResumeFromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeFromLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatEndedSignature Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatEndedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatEndedSignature *******************************************

// ********** Begin Delegate FRenegadeShotFiredSignature *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms
	{
		FVector TraceStart;
		FVector TraceEnd;
		bool bBlockingHit;
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeShotFiredSignature constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms*)Obj)->bBlockingHit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeShotFiredSignature constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeShotFiredSignature Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms), &UHT_STATICS::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeShotFiredSignature Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeShotFiredSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeShotFiredSignature *********************************************

// ********** Begin Delegate FRenegadeReloadSignature **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeReloadSignature constinit property declarations **************
// ********** End Delegate FRenegadeReloadSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeReloadSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeReloadSignature ************************************************

// ********** Begin Delegate FRenegadeHealthChangedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms
	{
		float PreviousHealth;
		float NewHealth;
		AActor* DamageCauser;
		AController* InstigatedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHealthChangedSignature constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHealthChangedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHealthChangedSignature Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHealthChangedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHealthChangedSignature *****************************************

// ********** Begin Delegate FRenegadeDeathSignature ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms
	{
		AActor* Killer;
		FVector RagdollImpulse;
		FName HitBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeDeathSignature constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollImpulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeDeathSignature constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeDeathSignature Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RagdollImpulse = { "RagdollImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, RagdollImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HitBone = { "HitBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, HitBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitBone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeDeathSignature Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeDeathSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeDeathSignature *************************************************

// ********** Begin Delegate FRenegadeSimpleSignature **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSimpleSignature constinit property declarations **************
// ********** End Delegate FRenegadeSimpleSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSimpleSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSimpleSignature ************************************************

// ********** Begin Delegate FRenegadeCombatMoveSignature ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms
	{
		FVector Destination;
		ERenegadeCombatMoveType MoveType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatMoveSignature constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatMoveSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatMoveSignature Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms, MoveType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, METADATA_PARAMS(0, nullptr) }; // 5803b7773b7316479520a813b089f81802a69d23
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatMoveSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatMoveSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatMoveSignature ********************************************

// ********** Begin Delegate FRenegadeSplinePauseSignature *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms
	{
		AActor* CombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplinePauseSignature constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplinePauseSignature constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplinePauseSignature Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplinePauseSignature Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSplinePauseSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplinePauseSignature *******************************************

// ********** Begin Delegate FRenegadeSplineResumeSignature ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms
	{
		FVector ResumeFromLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineResumeSignature constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResumeFromLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineResumeSignature constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineResumeSignature Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResumeFromLocation = { "ResumeFromLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms, ResumeFromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeFromLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineResumeSignature Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSplineResumeSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineResumeSignature ******************************************

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearCombatTarget ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms
	{
		bool bResumeSplineMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "CPP_Default_bResumeSplineMovement", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearCombatTarget constinit property declarations *********************
	static void NewProp_bResumeSplineMovement_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms*)Obj)->bResumeSplineMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeSplineMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearCombatTarget Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResumeSplineMovement = { "bResumeSplineMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms), &UHT_STATICS::NewProp_bResumeSplineMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResumeSplineMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearCombatTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearCombatTarget)
{
	P_GET_UBOOL(Z_Param_bResumeSplineMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCombatTarget(Z_Param_bResumeSplineMovement);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearCombatTarget *****************

// ********** Begin Class URenegadeSoldierCombatComponent Function ForceKill ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventForceKill_Parms
	{
		AActor* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "CPP_Default_Killer", "None" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceKill constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceKill constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceKill Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventForceKill_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceKill Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ForceKill", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventForceKill_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventForceKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execForceKill)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceKill(Z_Param_Killer);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ForceKill *************************

// ********** Begin Class URenegadeSoldierCombatComponent Function ForceTargetRefresh **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceTargetRefresh constinit property declarations ********************
// ********** End Function ForceTargetRefresh constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ForceTargetRefresh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execForceTargetRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceTargetRefresh();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ForceTargetRefresh ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetActiveWeaponSettings *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveWeaponSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveWeaponSettings constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveWeaponSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 19c59a16e3906ca9d4dd253b4d50fb218db2f74a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveWeaponSettings Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetActiveWeaponSettings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetActiveWeaponSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=P_THIS->GetActiveWeaponSettings();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetActiveWeaponSettings ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function GetHealthPercent ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetHealthPercent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetHealthPercent ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetResolvedRagdollMesh **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the skeletal mesh currently selected for automatic ragdoll. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the skeletal mesh currently selected for automatic ragdoll." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResolvedRagdollMesh constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResolvedRagdollMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResolvedRagdollMesh Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetResolvedRagdollMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetResolvedRagdollMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetResolvedRagdollMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetResolvedRagdollMesh();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetResolvedRagdollMesh ************

// ********** Begin Class URenegadeSoldierCombatComponent Function HandleOwnerAnyDamage ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleOwnerAnyDamage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "HandleOwnerAnyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execHandleOwnerAnyDamage)
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
// ********** End Class URenegadeSoldierCombatComponent Function HandleOwnerAnyDamage **************

// ********** Begin Class URenegadeSoldierCombatComponent Function Heal ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventHeal_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Heal constinit property declarations **********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Heal constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Heal Property Definitions *********************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHeal_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Heal Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "Heal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventHeal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function Heal ******************************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsCombatRotationLockEnabled *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCombatRotationLockEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCombatRotationLockEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCombatRotationLockEnabled Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCombatRotationLockEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsCombatRotationLockEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsCombatRotationLockEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCombatRotationLockEnabled();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsCombatRotationLockEnabled *******

// ********** Begin Class URenegadeSoldierCombatComponent Function IsHostileToActor ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms
	{
		const AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHostileToActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHostileToActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHostileToActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHostileToActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsHostileToActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsHostileToActor)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHostileToActor(Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsHostileToActor ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsInCombat **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsInCombat_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInCombat constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsInCombat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInCombat constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInCombat Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsInCombat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsInCombat Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsInCombat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInCombat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsInCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCombat();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsInCombat ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsInvulnerable ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInvulnerable constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInvulnerable constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInvulnerable Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsInvulnerable Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsInvulnerable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsInvulnerable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInvulnerable();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsInvulnerable ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsValidCombatTarget *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms
	{
		const AActor* PossibleTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibleTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidCombatTarget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PossibleTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidCombatTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidCombatTarget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PossibleTarget = { "PossibleTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms, PossibleTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibleTarget_MetaData), NewProp_PossibleTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PossibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidCombatTarget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsValidCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsValidCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PossibleTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCombatTarget(Z_Param_PossibleTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsValidCombatTarget ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastBeginDeath *************
struct RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms
{
	AActor* Killer;
	FVector RagdollImpulse;
	FName HitBone;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastBeginDeath = FName(TEXT("MulticastBeginDeath"));
void URenegadeSoldierCombatComponent::MulticastBeginDeath(AActor* Killer, FVector RagdollImpulse, FName HitBone)
{
	RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms Parms;
	Parms.Killer=Killer;
	Parms.RagdollImpulse=RagdollImpulse;
	Parms.HitBone=HitBone;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastBeginDeath);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastBeginDeath constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollImpulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastBeginDeath constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastBeginDeath Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RagdollImpulse = { "RagdollImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, RagdollImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HitBone = { "HitBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, HitBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitBone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastBeginDeath Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastBeginDeath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastBeginDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_GET_STRUCT(FVector,Z_Param_RagdollImpulse);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBeginDeath_Implementation(Z_Param_Killer,Z_Param_RagdollImpulse,Z_Param_HitBone);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastBeginDeath ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastFinishRespawn **********
struct RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms
{
	FTransform RespawnTransform;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastFinishRespawn = FName(TEXT("MulticastFinishRespawn"));
void URenegadeSoldierCombatComponent::MulticastFinishRespawn(FTransform RespawnTransform)
{
	RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms Parms;
	Parms.RespawnTransform=RespawnTransform;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastFinishRespawn);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastFinishRespawn constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastFinishRespawn constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastFinishRespawn Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RespawnTransform = { "RespawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms, RespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastFinishRespawn Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastFinishRespawn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastFinishRespawn)
{
	P_GET_STRUCT(FTransform,Z_Param_RespawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastFinishRespawn_Implementation(Z_Param_RespawnTransform);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastFinishRespawn ************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastReloadFinished *********
static FName NAME_URenegadeSoldierCombatComponent_MulticastReloadFinished = FName(TEXT("MulticastReloadFinished"));
void URenegadeSoldierCombatComponent::MulticastReloadFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastReloadFinished);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastReloadFinished constinit property declarations ***************
// ********** End Function MulticastReloadFinished constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastReloadFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastReloadFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReloadFinished_Implementation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastReloadFinished ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastReloadStarted **********
static FName NAME_URenegadeSoldierCombatComponent_MulticastReloadStarted = FName(TEXT("MulticastReloadStarted"));
void URenegadeSoldierCombatComponent::MulticastReloadStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastReloadStarted);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastReloadStarted constinit property declarations ****************
// ********** End Function MulticastReloadStarted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastReloadStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastReloadStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReloadStarted_Implementation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastReloadStarted ************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastShotFired **************
struct RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
	bool bBlockingHit;
	FHitResult HitResult;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastShotFired = FName(TEXT("MulticastShotFired"));
void URenegadeSoldierCombatComponent::MulticastShotFired(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult)
{
	RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	Parms.bBlockingHit=bBlockingHit ? true : false;
	Parms.HitResult=HitResult;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastShotFired);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastShotFired constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms*)Obj)->bBlockingHit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastShotFired constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastShotFired Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms), &UHT_STATICS::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastShotFired Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastShotFired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastShotFired)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_GET_UBOOL(Z_Param_bBlockingHit);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastShotFired_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bBlockingHit,Z_Param_HitResult);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastShotFired ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_CurrentHealth *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms
	{
		float PreviousHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentHealth Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_CurrentHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_CurrentHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_CurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_PreviousHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_CurrentHealth ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_CurrentTarget *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentTarget constinit property declarations *******************
// ********** End Function OnRep_CurrentTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_CurrentTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_CurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_CurrentTarget ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_Dead **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Dead constinit property declarations ****************************
// ********** End Function OnRep_Dead constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_Dead", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_Dead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dead();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_Dead ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_TeamId ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamId constinit property declarations **************************
// ********** End Function OnRep_TeamId constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_TeamId", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_TeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamId();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_TeamId **********************

// ********** Begin Class URenegadeSoldierCombatComponent Function RespawnNow **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RespawnNow constinit property declarations ****************************
// ********** End Function RespawnNow constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "RespawnNow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execRespawnNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnNow();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function RespawnNow ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetCombatRotationLockEnabled ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables body-yaw locking to the current enemy at runtime. Call on the server. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables body-yaw locking to the current enemy at runtime. Call on the server." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCombatRotationLockEnabled constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCombatRotationLockEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCombatRotationLockEnabled Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCombatRotationLockEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetCombatRotationLockEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetCombatRotationLockEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatRotationLockEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetCombatRotationLockEnabled ******

// ********** Begin Class URenegadeSoldierCombatComponent Function SetCombatTarget *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCombatTarget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCombatTarget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCombatTarget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetCombatTarget *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetInvulnerable *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms
	{
		bool bNewInvulnerable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInvulnerable constinit property declarations ***********************
	static void NewProp_bNewInvulnerable_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms*)Obj)->bNewInvulnerable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInvulnerable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInvulnerable constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInvulnerable Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNewInvulnerable = { "bNewInvulnerable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms), &UHT_STATICS::NewProp_bNewInvulnerable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNewInvulnerable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetInvulnerable Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetInvulnerable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetInvulnerable)
{
	P_GET_UBOOL(Z_Param_bNewInvulnerable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvulnerable(Z_Param_bNewInvulnerable);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetInvulnerable *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetTeamId ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetTeamId_Parms
	{
		FName NewTeamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeamId constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeamId constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeamId Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NewTeamId = { "NewTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetTeamId_Parms, NewTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTeamId Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetTeamId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamId(Z_Param_NewTeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetTeamId *************************

// ********** Begin Class URenegadeSoldierCombatComponent Function StartAutoCombat *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAutoCombat constinit property declarations ***********************
// ********** End Function StartAutoCombat constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "StartAutoCombat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execStartAutoCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAutoCombat();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function StartAutoCombat *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function StopAutoCombat ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms
	{
		bool bResumeSplineMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "CPP_Default_bResumeSplineMovement", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopAutoCombat constinit property declarations ************************
	static void NewProp_bResumeSplineMovement_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms*)Obj)->bResumeSplineMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeSplineMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopAutoCombat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopAutoCombat Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResumeSplineMovement = { "bResumeSplineMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms), &UHT_STATICS::NewProp_bResumeSplineMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResumeSplineMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopAutoCombat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "StopAutoCombat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execStopAutoCombat)
{
	P_GET_UBOOL(Z_Param_bResumeSplineMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAutoCombat(Z_Param_bResumeSplineMovement);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function StopAutoCombat ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function ValidateRagdollSetup ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms
	{
		FString FailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Validates the selected ragdoll mesh and Physics Asset. FailureReason is suitable for Print String. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validates the selected ragdoll mesh and Physics Asset. FailureReason is suitable for Print String." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateRagdollSetup constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateRagdollSetup constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateRagdollSetup Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms, FailureReason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateRagdollSetup Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ValidateRagdollSetup", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execValidateRagdollSetup)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateRagdollSetup(Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ValidateRagdollSetup **************

// ********** Begin Class URenegadeSoldierCombatComponent ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RenegadeNXT" },
		{ "IncludePath", "RenegadeSoldierCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCombatEnabled_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterAsCombatTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartOnBeginPlay_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targeting_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatMovement_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockCombatRotationToCurrentTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the soldier keeps its body yaw facing the active combat target while advancing, retreating, or strafing. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the soldier keeps its body yaw facing the active combat target while advancing, retreating, or strafing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetRotationSpeedDegrees_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum body turning speed while combat-facing is locked. Set to 0 for an instant rotation. */" },
#endif
		{ "EditCondition", "bLockCombatRotationToCurrentTarget" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum body turning speed while combat-facing is locked. Set to 0 for an instant rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "EditCondition", "bUseWeaponProfile" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineWeaponSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "EditCondition", "!bUseWeaponProfile" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAndRespawn_MetaData[] = {
		{ "Category", "Renegade NXT|Health and Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagazineAmmo_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatEnded_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShotFired_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadFinished_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRagdollStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRespawned_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatMoveRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSplineMovementPauseRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Spline Integration" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSplineMovementResumeRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Spline Integration" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCapsule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeSoldierCombatComponent constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bDifferentNonNeutralTeamsAreEnemies = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDifferentNonNeutralTeamsAreEnemies;
	static void NewProp_bAutoCombatEnabled_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bAutoCombatEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCombatEnabled;
	static void NewProp_bRegisterAsCombatTarget_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bRegisterAsCombatTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsCombatTarget;
	static void NewProp_bAutoStartOnBeginPlay_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bAutoStartOnBeginPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartOnBeginPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targeting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatMovement;
	static void NewProp_bLockCombatRotationToCurrentTarget_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bLockCombatRotationToCurrentTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCombatRotationToCurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatTargetRotationSpeedDegrees;
	static void NewProp_bUseWeaponProfile_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bUseWeaponProfile = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineWeaponSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthAndRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static void NewProp_bIsDead_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bIsDead = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagazineAmmo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShotFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRagdollStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRespawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatMoveRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineMovementPauseRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineMovementResumeRequested;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeSoldierCombatComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execClearCombatTarget },
		{ .NameUTF8 = UTF8TEXT("ForceKill"), .Pointer = &URenegadeSoldierCombatComponent::execForceKill },
		{ .NameUTF8 = UTF8TEXT("ForceTargetRefresh"), .Pointer = &URenegadeSoldierCombatComponent::execForceTargetRefresh },
		{ .NameUTF8 = UTF8TEXT("GetActiveWeaponSettings"), .Pointer = &URenegadeSoldierCombatComponent::execGetActiveWeaponSettings },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &URenegadeSoldierCombatComponent::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetResolvedRagdollMesh"), .Pointer = &URenegadeSoldierCombatComponent::execGetResolvedRagdollMesh },
		{ .NameUTF8 = UTF8TEXT("HandleOwnerAnyDamage"), .Pointer = &URenegadeSoldierCombatComponent::execHandleOwnerAnyDamage },
		{ .NameUTF8 = UTF8TEXT("Heal"), .Pointer = &URenegadeSoldierCombatComponent::execHeal },
		{ .NameUTF8 = UTF8TEXT("IsCombatRotationLockEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execIsCombatRotationLockEnabled },
		{ .NameUTF8 = UTF8TEXT("IsHostileToActor"), .Pointer = &URenegadeSoldierCombatComponent::execIsHostileToActor },
		{ .NameUTF8 = UTF8TEXT("IsInCombat"), .Pointer = &URenegadeSoldierCombatComponent::execIsInCombat },
		{ .NameUTF8 = UTF8TEXT("IsInvulnerable"), .Pointer = &URenegadeSoldierCombatComponent::execIsInvulnerable },
		{ .NameUTF8 = UTF8TEXT("IsValidCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execIsValidCombatTarget },
		{ .NameUTF8 = UTF8TEXT("MulticastBeginDeath"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastBeginDeath },
		{ .NameUTF8 = UTF8TEXT("MulticastFinishRespawn"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastFinishRespawn },
		{ .NameUTF8 = UTF8TEXT("MulticastReloadFinished"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastReloadFinished },
		{ .NameUTF8 = UTF8TEXT("MulticastReloadStarted"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastReloadStarted },
		{ .NameUTF8 = UTF8TEXT("MulticastShotFired"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastShotFired },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_CurrentHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentTarget"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_CurrentTarget },
		{ .NameUTF8 = UTF8TEXT("OnRep_Dead"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_Dead },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamId"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_TeamId },
		{ .NameUTF8 = UTF8TEXT("RespawnNow"), .Pointer = &URenegadeSoldierCombatComponent::execRespawnNow },
		{ .NameUTF8 = UTF8TEXT("SetCombatRotationLockEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execSetCombatRotationLockEnabled },
		{ .NameUTF8 = UTF8TEXT("SetCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execSetCombatTarget },
		{ .NameUTF8 = UTF8TEXT("SetInvulnerable"), .Pointer = &URenegadeSoldierCombatComponent::execSetInvulnerable },
		{ .NameUTF8 = UTF8TEXT("SetTeamId"), .Pointer = &URenegadeSoldierCombatComponent::execSetTeamId },
		{ .NameUTF8 = UTF8TEXT("StartAutoCombat"), .Pointer = &URenegadeSoldierCombatComponent::execStartAutoCombat },
		{ .NameUTF8 = UTF8TEXT("StopAutoCombat"), .Pointer = &URenegadeSoldierCombatComponent::execStopAutoCombat },
		{ .NameUTF8 = UTF8TEXT("ValidateRagdollSetup"), .Pointer = &URenegadeSoldierCombatComponent::execValidateRagdollSetup },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget, "ClearCombatTarget" }, // 53ad295c3b208cbd58a633f0cf71dafe9a005691
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill, "ForceKill" }, // 850f9b6b9cbccb8365a994c5c90c0347ba2b21ca
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh, "ForceTargetRefresh" }, // a20fc1421e2f1b8d07ea8dd6069f21b67a5a9329
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings, "GetActiveWeaponSettings" }, // c2aed7c9abc7e93a52996c5d3d48b40670b837a2
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent, "GetHealthPercent" }, // 2f82521d095f98594e97cd44ad8af636eeb43833
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh, "GetResolvedRagdollMesh" }, // 36841be3c84129d2af62b92ad1af26f02df52d7c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage, "HandleOwnerAnyDamage" }, // 181d257095ff7c253de0928943ba796f3c4c1208
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal, "Heal" }, // 0933c5575c1d8edb7f6824cedb3082223a1bf21f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled, "IsCombatRotationLockEnabled" }, // 7848a12dff7a8149dc5ab7fb14aeed1a8d1d8b31
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor, "IsHostileToActor" }, // 9abcdd1426dc138fa830e2bda21936a1ff39ff18
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat, "IsInCombat" }, // bc486ab9c9ebef6d38379a96bf9e67116187e448
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable, "IsInvulnerable" }, // 5c3ee41ec7323d20fdb1ddce98f094bfaf31f431
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget, "IsValidCombatTarget" }, // b0213b8c94638aaad260727cd96b1eff68af844e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath, "MulticastBeginDeath" }, // 6221bdddb7c52eb795af8ad68946cb254ad0166f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn, "MulticastFinishRespawn" }, // aa44649ca8f680eadaf41bd87747c8aeaaeb562d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished, "MulticastReloadFinished" }, // 2e0a8c14f03fc01afa4347b0df493f2eee2bb7ea
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted, "MulticastReloadStarted" }, // 1fb778da69012993da0b98bd8ad555030b1d2db4
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired, "MulticastShotFired" }, // 237e48190bcfd1df927e8f7b2393b5303ab27379
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // ac86c90b607679f592261f0d0fc064dce8933ac9
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget, "OnRep_CurrentTarget" }, // 0c0d72f44964e6d3a0bfaa55fca6b999d564618b
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead, "OnRep_Dead" }, // d3c05d97e9e6b1e1ad24ed58279b7e41c46a32cb
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId, "OnRep_TeamId" }, // 7baede63230f963333df75a43c947d49e504247c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow, "RespawnNow" }, // eef0eb0339b955eb5ffaef1b1add0484439da5fe
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled, "SetCombatRotationLockEnabled" }, // 7a6e332b036bef6e1aa90fb7a4db43aaf047e870
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget, "SetCombatTarget" }, // 4889eeb8592e9eba70cbecd3a892cfef2cdcdfa3
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable, "SetInvulnerable" }, // acb8f084e19905028047c6720f329673268209fa
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId, "SetTeamId" }, // 85fd3037caf0398fdf986e41434059535e00bddc
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat, "StartAutoCombat" }, // 17518c17b4edb5027504ce14c5f592c27d6d5868
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat, "StopAutoCombat" }, // 8a8ddd1e5e1338abe2fbcf32685fd834f48254eb
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup, "ValidateRagdollSetup" }, // 629a5c55504c2a8fbfcca9a287abfb4470e5914b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeSoldierCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeSoldierCombatComponent Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies = { "bDifferentNonNeutralTeamsAreEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData), NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoCombatEnabled = { "bAutoCombatEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bAutoCombatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCombatEnabled_MetaData), NewProp_bAutoCombatEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRegisterAsCombatTarget = { "bRegisterAsCombatTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bRegisterAsCombatTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterAsCombatTarget_MetaData), NewProp_bRegisterAsCombatTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoStartOnBeginPlay = { "bAutoStartOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bAutoStartOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartOnBeginPlay_MetaData), NewProp_bAutoStartOnBeginPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Targeting = { "Targeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, Targeting), Z_Construct_UScriptStruct_FRenegadeTargetingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targeting_MetaData), NewProp_Targeting_MetaData) }; // aac6eaac7ee7153722d825cd03c914b734989eaa
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CombatMovement = { "CombatMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CombatMovement), Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatMovement_MetaData), NewProp_CombatMovement_MetaData) }; // b5ce1d26d6f08ef16986d51ddeadc4d689d7e315
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget = { "bLockCombatRotationToCurrentTarget", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockCombatRotationToCurrentTarget_MetaData), NewProp_bLockCombatRotationToCurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CombatTargetRotationSpeedDegrees = { "CombatTargetRotationSpeedDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CombatTargetRotationSpeedDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTargetRotationSpeedDegrees_MetaData), NewProp_CombatTargetRotationSpeedDegrees_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseWeaponProfile = { "bUseWeaponProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bUseWeaponProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWeaponProfile_MetaData), NewProp_bUseWeaponProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WeaponProfile = { "WeaponProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, WeaponProfile), Z_Construct_UClass_URenegadeWeaponProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponProfile_MetaData), NewProp_WeaponProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InlineWeaponSettings = { "InlineWeaponSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, InlineWeaponSettings), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineWeaponSettings_MetaData), NewProp_InlineWeaponSettings_MetaData) }; // 19c59a16e3906ca9d4dd253b4d50fb218db2f74a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HealthAndRespawn = { "HealthAndRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, HealthAndRespawn), Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAndRespawn_MetaData), NewProp_HealthAndRespawn_MetaData) }; // 67f90c93315a143abad4c317602e79181afb65f6
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsDead = { "bIsDead", "OnRep_Dead", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTarget = { "CurrentTarget", "OnRep_CurrentTarget", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentMagazineAmmo = { "CurrentMagazineAmmo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentMagazineAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagazineAmmo_MetaData), NewProp_CurrentMagazineAmmo_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTargetChanged = { "OnTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnTargetChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetChanged_MetaData), NewProp_OnTargetChanged_MetaData) }; // b571e1eca28629b1b2d61a6133248f685b1f40d4
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatStarted = { "OnCombatStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatStarted_MetaData), NewProp_OnCombatStarted_MetaData) }; // 64dc7839f181e5b8732183015534bf20262d2c3c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatEnded = { "OnCombatEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatEnded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatEnded_MetaData), NewProp_OnCombatEnded_MetaData) }; // fb77aa189c75ab1c6f849d4d459f8a6632772ab1
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnShotFired = { "OnShotFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnShotFired), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShotFired_MetaData), NewProp_OnShotFired_MetaData) }; // 4482a1334368de87c8e11b0fdec2757d803b242e
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReloadStarted = { "OnReloadStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnReloadStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadStarted_MetaData), NewProp_OnReloadStarted_MetaData) }; // 87e2f88bbde94b3c70e3219f948a1bfdb4f1f497
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReloadFinished = { "OnReloadFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnReloadFinished), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadFinished_MetaData), NewProp_OnReloadFinished_MetaData) }; // 87e2f88bbde94b3c70e3219f948a1bfdb4f1f497
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnHealthChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 9acbb4fe658eff1a8946b6dfa600817140308844
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnDeath), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 5966d604a8b412245f56c94f71c47e5b22e738b8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRagdollStarted = { "OnRagdollStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRagdollStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRagdollStarted_MetaData), NewProp_OnRagdollStarted_MetaData) }; // a8f4fb926a58c2dca9dd23d3539f783ef0cecd4a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRespawned = { "OnRespawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRespawned), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRespawned_MetaData), NewProp_OnRespawned_MetaData) }; // a8f4fb926a58c2dca9dd23d3539f783ef0cecd4a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatMoveRequested = { "OnCombatMoveRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatMoveRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatMoveRequested_MetaData), NewProp_OnCombatMoveRequested_MetaData) }; // 99bb38ef9d89ba601197072e0ca01dc178fd4843
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSplineMovementPauseRequested = { "OnSplineMovementPauseRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnSplineMovementPauseRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSplineMovementPauseRequested_MetaData), NewProp_OnSplineMovementPauseRequested_MetaData) }; // 2722e7b1a93d2ab7e5f275dbfd9551c8dd563d43
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSplineMovementResumeRequested = { "OnSplineMovementResumeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnSplineMovementResumeRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSplineMovementResumeRequested_MetaData), NewProp_OnSplineMovementResumeRequested_MetaData) }; // fc1fbdce5c178fc997579e6591e3bed9661e7013
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerCharacter), Z_Construct_UClass_ACharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerCapsule = { "OwnerCapsule", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerCapsule), Z_Construct_UClass_UCapsuleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCapsule_MetaData), NewProp_OwnerCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerMovement = { "OwnerMovement", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerMovement), Z_Construct_UClass_UCharacterMovementComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovement_MetaData), NewProp_OwnerMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoCombatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRegisterAsCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoStartOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTargetRotationSpeedDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseWeaponProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InlineWeaponSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthAndRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMagazineAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnShotFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReloadStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReloadFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRagdollStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRespawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatMoveRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSplineMovementPauseRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSplineMovementResumeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeSoldierCombatComponent Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeSoldierCombatComponent,
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
static void URenegadeSoldierCombatComponent_StaticRegisterNativesURenegadeSoldierCombatComponent()
{
	UClass* Class = URenegadeSoldierCombatComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeSoldierCombatComponent;
UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeSoldierCombatComponent;
		if (!Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSoldierCombatComponent"),
				Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton,
				URenegadeSoldierCombatComponent_StaticRegisterNativesURenegadeSoldierCombatComponent,
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
		return Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeSoldierCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_bLockCombatRotationToCurrentTarget(TEXT("bLockCombatRotationToCurrentTarget"));
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static FName Name_bIsDead(TEXT("bIsDead"));
	static FName Name_CurrentTarget(TEXT("CurrentTarget"));
	static FName Name_CurrentMagazineAmmo(TEXT("CurrentMagazineAmmo"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_bLockCombatRotationToCurrentTarget == ClassReps[(int32)ENetFields_Private::bLockCombatRotationToCurrentTarget].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
		&& Name_CurrentMagazineAmmo == ClassReps[(int32)ENetFields_Private::CurrentMagazineAmmo].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeSoldierCombatComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeSoldierCombatComponent);
URenegadeSoldierCombatComponent::~URenegadeSoldierCombatComponent() {}
// ********** End Class URenegadeSoldierCombatComponent ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeSoldierCombatComponent, TEXT("URenegadeSoldierCombatComponent"), &Z_Registration_Info_UClass_URenegadeSoldierCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeSoldierCombatComponent), 3682122701U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h__Script_RenegadeSoldierCombat_12a95afc05a43d697a503ef754e06f5e87333c7f{
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
