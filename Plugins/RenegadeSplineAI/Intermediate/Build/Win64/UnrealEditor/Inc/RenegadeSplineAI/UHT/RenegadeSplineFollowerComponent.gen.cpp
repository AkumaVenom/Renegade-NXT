// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSplineFollowerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSplineFollowerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeSplineFollowerComponent Function GetCombatTarget ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventGetCombatTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCombatTarget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCombatTarget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCombatTarget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "GetCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventGetCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventGetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execGetCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function GetCombatTarget ******************

// ********** Begin Class URenegadeSplineFollowerComponent Function GetNormalizedRouteProgress *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetNormalizedRouteProgress_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventGetNormalizedRouteProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNormalizedRouteProgress constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNormalizedRouteProgress constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNormalizedRouteProgress Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventGetNormalizedRouteProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNormalizedRouteProgress Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "GetNormalizedRouteProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventGetNormalizedRouteProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventGetNormalizedRouteProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetNormalizedRouteProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execGetNormalizedRouteProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedRouteProgress();
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function GetNormalizedRouteProgress *******

// ********** Begin Class URenegadeSplineFollowerComponent Function HandleCombatTargetDestroyed ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_HandleCombatTargetDestroyed_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventHandleCombatTargetDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCombatTargetDestroyed constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCombatTargetDestroyed constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCombatTargetDestroyed Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventHandleCombatTargetDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleCombatTargetDestroyed Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "HandleCombatTargetDestroyed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventHandleCombatTargetDestroyed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventHandleCombatTargetDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_HandleCombatTargetDestroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execHandleCombatTargetDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCombatTargetDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function HandleCombatTargetDestroyed ******

// ********** Begin Class URenegadeSplineFollowerComponent Function IsActivelyFollowing ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_IsActivelyFollowing_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventIsActivelyFollowing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsActivelyFollowing constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventIsActivelyFollowing_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsActivelyFollowing constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsActivelyFollowing Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventIsActivelyFollowing_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsActivelyFollowing Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "IsActivelyFollowing", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventIsActivelyFollowing_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventIsActivelyFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_IsActivelyFollowing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execIsActivelyFollowing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActivelyFollowing();
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function IsActivelyFollowing **************

// ********** Begin Class URenegadeSplineFollowerComponent Function OnRep_FollowState **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_OnRep_FollowState_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventOnRep_FollowState_Parms
	{
		ERenegadeSplineFollowState PreviousState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_FollowState constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_FollowState constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_FollowState Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventOnRep_FollowState_Parms, PreviousState), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, METADATA_PARAMS(0, nullptr) }; // 33c27e3e3c98f36d6092c042d687486f4b5c82b0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_FollowState Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "OnRep_FollowState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventOnRep_FollowState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventOnRep_FollowState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_OnRep_FollowState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execOnRep_FollowState)
{
	P_GET_ENUM(ERenegadeSplineFollowState,Z_Param_PreviousState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FollowState(ERenegadeSplineFollowState(Z_Param_PreviousState));
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function OnRep_FollowState ****************

// ********** Begin Class URenegadeSplineFollowerComponent Function PauseForCombat *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_PauseForCombat_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventPauseForCombat_Parms
	{
		AActor* CombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Immediately yields movement to combat logic. */" },
#endif
		{ "CPP_Default_CombatTarget", "None" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Immediately yields movement to combat logic." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PauseForCombat constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PauseForCombat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PauseForCombat Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventPauseForCombat_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PauseForCombat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "PauseForCombat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventPauseForCombat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventPauseForCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_PauseForCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execPauseForCombat)
{
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseForCombat(Z_Param_CombatTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function PauseForCombat *******************

// ********** Begin Class URenegadeSplineFollowerComponent Function ReacquireRouteFromCurrentLocation 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_ReacquireRouteFromCurrentLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventReacquireRouteFromCurrentLocation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Recovery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projects the pawn's current location onto the assigned spline and updates progress. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projects the pawn's current location onto the assigned spline and updates progress." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReacquireRouteFromCurrentLocation constinit property declarations *****
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventReacquireRouteFromCurrentLocation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReacquireRouteFromCurrentLocation constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReacquireRouteFromCurrentLocation Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventReacquireRouteFromCurrentLocation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReacquireRouteFromCurrentLocation Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "ReacquireRouteFromCurrentLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventReacquireRouteFromCurrentLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventReacquireRouteFromCurrentLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_ReacquireRouteFromCurrentLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execReacquireRouteFromCurrentLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReacquireRouteFromCurrentLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function ReacquireRouteFromCurrentLocation 

// ********** Begin Class URenegadeSplineFollowerComponent Function ResumeAfterCombatDelay *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeAfterCombatDelay_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeAfterCombatDelay constinit property declarations ****************
// ********** End Function ResumeAfterCombatDelay constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "ResumeAfterCombatDelay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeAfterCombatDelay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execResumeAfterCombatDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeAfterCombatDelay();
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function ResumeAfterCombatDelay ***********

// ********** Begin Class URenegadeSplineFollowerComponent Function ResumeFollowing ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeFollowing_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventResumeFollowing_Parms
	{
		bool bReacquireFromCurrentLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resumes route following, normally after combat ends. */" },
#endif
		{ "CPP_Default_bReacquireFromCurrentLocation", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resumes route following, normally after combat ends." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeFollowing constinit property declarations ***********************
	static void NewProp_bReacquireFromCurrentLocation_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventResumeFollowing_Parms*)Obj)->bReacquireFromCurrentLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReacquireFromCurrentLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventResumeFollowing_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResumeFollowing constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResumeFollowing Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReacquireFromCurrentLocation = { "bReacquireFromCurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventResumeFollowing_Parms), &UHT_STATICS::NewProp_bReacquireFromCurrentLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventResumeFollowing_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReacquireFromCurrentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResumeFollowing Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "ResumeFollowing", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventResumeFollowing_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventResumeFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeFollowing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execResumeFollowing)
{
	P_GET_UBOOL(Z_Param_bReacquireFromCurrentLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResumeFollowing(Z_Param_bReacquireFromCurrentLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function ResumeFollowing ******************

// ********** Begin Class URenegadeSplineFollowerComponent Function SetCombatActive ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetCombatActive_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventSetCombatActive_Parms
	{
		bool bCombatActive;
		AActor* CombatTarget;
		float ResumeDelayOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Convenience combat bridge.\n     * Call true when an enemy is acquired. Call false when combat ends.\n     * A negative ResumeDelayOverride uses DefaultCombatResumeDelay.\n     */" },
#endif
		{ "CPP_Default_CombatTarget", "None" },
		{ "CPP_Default_ResumeDelayOverride", "-1.000000" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience combat bridge.\nCall true when an enemy is acquired. Call false when combat ends.\nA negative ResumeDelayOverride uses DefaultCombatResumeDelay." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCombatActive constinit property declarations ***********************
	static void NewProp_bCombatActive_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventSetCombatActive_Parms*)Obj)->bCombatActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResumeDelayOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCombatActive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCombatActive Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCombatActive = { "bCombatActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventSetCombatActive_Parms), &UHT_STATICS::NewProp_bCombatActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventSetCombatActive_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ResumeDelayOverride = { "ResumeDelayOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventSetCombatActive_Parms, ResumeDelayOverride), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCombatActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeDelayOverride,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCombatActive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "SetCombatActive", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventSetCombatActive_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventSetCombatActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetCombatActive(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execSetCombatActive)
{
	P_GET_UBOOL(Z_Param_bCombatActive);
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ResumeDelayOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatActive(Z_Param_bCombatActive,Z_Param_CombatTarget,Z_Param_ResumeDelayOverride);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function SetCombatActive ******************

// ********** Begin Class URenegadeSplineFollowerComponent Function SetRouteDistance ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetRouteDistance_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms
	{
		float NewDistanceAlongSpline;
		bool bImmediatelyMove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly set progress, useful for spawning waves part-way along a route. */" },
#endif
		{ "CPP_Default_bImmediatelyMove", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly set progress, useful for spawning waves part-way along a route." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRouteDistance constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDistanceAlongSpline;
	static void NewProp_bImmediatelyMove_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms*)Obj)->bImmediatelyMove = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediatelyMove;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRouteDistance constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRouteDistance Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewDistanceAlongSpline = { "NewDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms, NewDistanceAlongSpline), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bImmediatelyMove = { "bImmediatelyMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms), &UHT_STATICS::NewProp_bImmediatelyMove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDistanceAlongSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bImmediatelyMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRouteDistance Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "SetRouteDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventSetRouteDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetRouteDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execSetRouteDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistanceAlongSpline);
	P_GET_UBOOL(Z_Param_bImmediatelyMove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRouteDistance(Z_Param_NewDistanceAlongSpline,Z_Param_bImmediatelyMove);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function SetRouteDistance *****************

// ********** Begin Class URenegadeSplineFollowerComponent Function StartFollowing *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_StartFollowing_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventStartFollowing_Parms
	{
		ARenegadeSplinePath* NewPath;
		bool bReacquireFromCurrentLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign and begin following a route. Runs on the authority/server. */" },
#endif
		{ "CPP_Default_bReacquireFromCurrentLocation", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign and begin following a route. Runs on the authority/server." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartFollowing constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPath;
	static void NewProp_bReacquireFromCurrentLocation_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventStartFollowing_Parms*)Obj)->bReacquireFromCurrentLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReacquireFromCurrentLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventStartFollowing_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartFollowing constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartFollowing Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewPath = { "NewPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineFollowerComponent_eventStartFollowing_Parms, NewPath), Z_Construct_UClass_ARenegadeSplinePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReacquireFromCurrentLocation = { "bReacquireFromCurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventStartFollowing_Parms), &UHT_STATICS::NewProp_bReacquireFromCurrentLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventStartFollowing_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReacquireFromCurrentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartFollowing Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "StartFollowing", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventStartFollowing_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventStartFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_StartFollowing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execStartFollowing)
{
	P_GET_OBJECT(ARenegadeSplinePath,Z_Param_NewPath);
	P_GET_UBOOL(Z_Param_bReacquireFromCurrentLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartFollowing(Z_Param_NewPath,Z_Param_bReacquireFromCurrentLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function StartFollowing *******************

// ********** Begin Class URenegadeSplineFollowerComponent Function StopFollowing ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineFollowerComponent_StopFollowing_Statics
struct UHT_STATICS
{
	struct RenegadeSplineFollowerComponent_eventStopFollowing_Parms
	{
		bool bClearAssignedPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops issuing movement without entering combat. Assigned route is retained unless requested. */" },
#endif
		{ "CPP_Default_bClearAssignedPath", "false" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops issuing movement without entering combat. Assigned route is retained unless requested." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopFollowing constinit property declarations *************************
	static void NewProp_bClearAssignedPath_SetBit(void* Obj)
	{
		((RenegadeSplineFollowerComponent_eventStopFollowing_Parms*)Obj)->bClearAssignedPath = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearAssignedPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopFollowing constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopFollowing Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearAssignedPath = { "bClearAssignedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineFollowerComponent_eventStopFollowing_Parms), &UHT_STATICS::NewProp_bClearAssignedPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearAssignedPath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopFollowing Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineFollowerComponent, nullptr, "StopFollowing", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineFollowerComponent_eventStopFollowing_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineFollowerComponent_eventStopFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineFollowerComponent_StopFollowing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineFollowerComponent::execStopFollowing)
{
	P_GET_UBOOL(Z_Param_bClearAssignedPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFollowing(Z_Param_bClearAssignedPath);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineFollowerComponent Function StopFollowing ********************

// ********** Begin Class URenegadeSplineFollowerComponent *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeSplineFollowerComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * NavMesh-driven spline route follower for combat AI.\n *\n * Add this component to any Pawn/Character blueprint possessed by an AIController.\n * It repeatedly asks the controller to move toward short look-ahead points on a spline.\n * Combat can pause the component, use the same controller for attacking/chasing, then resume\n * by projecting the pawn's current world location back onto the route.\n */" },
#endif
		{ "IncludePath", "RenegadeSplineFollowerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NavMesh-driven spline route follower for combat AI.\n\nAdd this component to any Pawn/Character blueprint possessed by an AIController.\nIt repeatedly asks the controller to move toward short look-ahead points on a spline.\nCombat can pause the component, use the same controller for attacking/chasing, then resume\nby projecting the pawn's current world location back onto the route." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignedPath_MetaData[] = {
		{ "Category", "Renegade Spline AI|Route" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Route used when auto-starting. Can also be assigned at runtime. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Route used when auto-starting. Can also be assigned at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Renegade Spline AI|Route" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade Spline AI|Route" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-defined team ID. A path with an empty AllowedTeamIds array accepts every team. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-defined team ID. A path with an empty AllowedTeamIds array accepts every team." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TravelDirection_MetaData[] = {
		{ "Category", "Renegade Spline AI|Route" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneOffset_MetaData[] = {
		{ "Category", "Renegade Spline AI|Route" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "-2000.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lateral offset from the spline, useful for several soldiers sharing a route. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lateral offset from the spline, useful for several soldiers sharing a route." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadDistance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance ahead of current route progress used as the next NavMesh goal. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance ahead of current route progress used as the next NavMesh goal." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLookAheadDistance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ClampMin", "50.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum look-ahead used while recovering from failed move requests. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum look-ahead used while recovering from failed move requests." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RouteEndTolerance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance from the end of an open route at which it is considered complete. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from the end of an open route at which it is considered complete." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalsToNavigation_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPaths_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanStrafe_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlap_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentDelay_MetaData[] = {
		{ "Category", "Renegade Spline AI|Movement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Small delay between successful route segments. Zero gives continuous movement. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Small delay between successful route segments. Zero gives continuous movement." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumePolicy_MetaData[] = {
		{ "Category", "Renegade Spline AI|Recovery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Recovery --------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Recovery --------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumResumeBacktrack_MetaData[] = {
		{ "Category", "Renegade Spline AI|Recovery" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum backwards route loss allowed by PreserveProgress on an open route. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum backwards route loss allowed by PreserveProgress on an open route." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedMoveRetryDelay_MetaData[] = {
		{ "Category", "Renegade Spline AI|Recovery" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumConsecutiveMoveFailures_MetaData[] = {
		{ "Category", "Renegade Spline AI|Recovery" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCombatResumeDelay_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay used when SetCombatActive(false) receives a negative ResumeDelayOverride. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay used when SetCombatActive(false) receives a negative ResumeDelayOverride." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResumeWhenCombatTargetDestroyed_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically resume when the supplied combat target actor is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically resume when the supplied combat target actor is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Renegade Spline AI|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Debug --------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Debug --------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowState_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDistanceAlongSpline_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMoveGoal_MetaData[] = {
		{ "Category", "Renegade Spline AI|State" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFollowStateChanged_MetaData[] = {
		{ "Category", "Renegade Spline AI|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRouteProgress_MetaData[] = {
		{ "Category", "Renegade Spline AI|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRouteCompleted_MetaData[] = {
		{ "Category", "Renegade Spline AI|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveFailure_MetaData[] = {
		{ "Category", "Renegade Spline AI|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSplineFollowerComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeSplineFollowerComponent constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignedPath;
	static void NewProp_bAutoStart_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bAutoStart = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TravelDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TravelDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLookAheadDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RouteEndTolerance;
	static void NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bUsePathfinding = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static void NewProp_bProjectGoalsToNavigation_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bProjectGoalsToNavigation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalsToNavigation;
	static void NewProp_bAllowPartialPaths_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bAllowPartialPaths = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPaths;
	static void NewProp_bCanStrafe_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bCanStrafe = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
	static void NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bStopOnOverlap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResumePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResumePolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumResumeBacktrack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FailedMoveRetryDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumConsecutiveMoveFailures;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCombatResumeDelay;
	static void NewProp_bResumeWhenCombatTargetDestroyed_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bResumeWhenCombatTargetDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeWhenCombatTargetDestroyed;
	static void NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((URenegadeSplineFollowerComponent*)Obj)->bDrawDebug = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FollowState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FollowState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDistanceAlongSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMoveGoal;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFollowStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRouteProgress;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRouteCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeSplineFollowerComponent constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCombatTarget"), .Pointer = &URenegadeSplineFollowerComponent::execGetCombatTarget },
		{ .NameUTF8 = UTF8TEXT("GetNormalizedRouteProgress"), .Pointer = &URenegadeSplineFollowerComponent::execGetNormalizedRouteProgress },
		{ .NameUTF8 = UTF8TEXT("HandleCombatTargetDestroyed"), .Pointer = &URenegadeSplineFollowerComponent::execHandleCombatTargetDestroyed },
		{ .NameUTF8 = UTF8TEXT("IsActivelyFollowing"), .Pointer = &URenegadeSplineFollowerComponent::execIsActivelyFollowing },
		{ .NameUTF8 = UTF8TEXT("OnRep_FollowState"), .Pointer = &URenegadeSplineFollowerComponent::execOnRep_FollowState },
		{ .NameUTF8 = UTF8TEXT("PauseForCombat"), .Pointer = &URenegadeSplineFollowerComponent::execPauseForCombat },
		{ .NameUTF8 = UTF8TEXT("ReacquireRouteFromCurrentLocation"), .Pointer = &URenegadeSplineFollowerComponent::execReacquireRouteFromCurrentLocation },
		{ .NameUTF8 = UTF8TEXT("ResumeAfterCombatDelay"), .Pointer = &URenegadeSplineFollowerComponent::execResumeAfterCombatDelay },
		{ .NameUTF8 = UTF8TEXT("ResumeFollowing"), .Pointer = &URenegadeSplineFollowerComponent::execResumeFollowing },
		{ .NameUTF8 = UTF8TEXT("SetCombatActive"), .Pointer = &URenegadeSplineFollowerComponent::execSetCombatActive },
		{ .NameUTF8 = UTF8TEXT("SetRouteDistance"), .Pointer = &URenegadeSplineFollowerComponent::execSetRouteDistance },
		{ .NameUTF8 = UTF8TEXT("StartFollowing"), .Pointer = &URenegadeSplineFollowerComponent::execStartFollowing },
		{ .NameUTF8 = UTF8TEXT("StopFollowing"), .Pointer = &URenegadeSplineFollowerComponent::execStopFollowing },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetCombatTarget, "GetCombatTarget" }, // f469261af5248a12e3d2932f313ab0d6ed6acf3d
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_GetNormalizedRouteProgress, "GetNormalizedRouteProgress" }, // b14eef44eacdaff6c99a1079beeda465f1d783aa
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_HandleCombatTargetDestroyed, "HandleCombatTargetDestroyed" }, // 8cae0733a34b988a7f2d0c3c39f0e534d76882cc
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_IsActivelyFollowing, "IsActivelyFollowing" }, // 8586a4fb7a9d6f119dc89235aaeb4c83e6ef89e7
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_OnRep_FollowState, "OnRep_FollowState" }, // 1a3896ce45010d42ab72bdbe6928adf930e74c62
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_PauseForCombat, "PauseForCombat" }, // e4dabd9906ed45f9587f0df5ffb93600c8b53bc5
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_ReacquireRouteFromCurrentLocation, "ReacquireRouteFromCurrentLocation" }, // fc257ccdce44cf3139ce5dcb7217b4fde6c3161d
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeAfterCombatDelay, "ResumeAfterCombatDelay" }, // 3cfbab59bf172c975dd8278dd02288ab121e56d6
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_ResumeFollowing, "ResumeFollowing" }, // 13c5254b78e900c30be3bf32c77967486ba585d4
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetCombatActive, "SetCombatActive" }, // cf3ab6da25045502be6305006be0faa73ca3370f
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_SetRouteDistance, "SetRouteDistance" }, // 75089a59ddfd6b9e58a54020dc49eeac9286c9a7
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_StartFollowing, "StartFollowing" }, // 27afbe139dd4f92979f09cc641899183fa13e4c5
		{ &Z_Construct_UFunction_URenegadeSplineFollowerComponent_StopFollowing, "StopFollowing" }, // 1d826b95893c81397364060fb3a33717256d19bd
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeSplineFollowerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeSplineFollowerComponent Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssignedPath = { "AssignedPath", nullptr, (EPropertyFlags)0x0114000000000825, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, AssignedPath), Z_Construct_UClass_ARenegadeSplinePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignedPath_MetaData), NewProp_AssignedPath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TravelDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TravelDirection = { "TravelDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, TravelDirection), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TravelDirection_MetaData), NewProp_TravelDirection_MetaData) }; // e29a42f19c2e6517a42753edfb0fe244154b8d82
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaneOffset = { "LaneOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, LaneOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneOffset_MetaData), NewProp_LaneOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LookAheadDistance = { "LookAheadDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, LookAheadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAheadDistance_MetaData), NewProp_LookAheadDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumLookAheadDistance = { "MinimumLookAheadDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, MinimumLookAheadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLookAheadDistance_MetaData), NewProp_MinimumLookAheadDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RouteEndTolerance = { "RouteEndTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, RouteEndTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RouteEndTolerance_MetaData), NewProp_RouteEndTolerance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathfinding_MetaData), NewProp_bUsePathfinding_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bProjectGoalsToNavigation = { "bProjectGoalsToNavigation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bProjectGoalsToNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectGoalsToNavigation_MetaData), NewProp_bProjectGoalsToNavigation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowPartialPaths = { "bAllowPartialPaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bAllowPartialPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPartialPaths_MetaData), NewProp_bAllowPartialPaths_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanStrafe_MetaData), NewProp_bCanStrafe_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopOnOverlap_MetaData), NewProp_bStopOnOverlap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SegmentDelay = { "SegmentDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, SegmentDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentDelay_MetaData), NewProp_SegmentDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ResumePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ResumePolicy = { "ResumePolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, ResumePolicy), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumePolicy_MetaData), NewProp_ResumePolicy_MetaData) }; // c1bfd30498851d7f3e6b75bd88cb1a6354dc0364
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumResumeBacktrack = { "MaximumResumeBacktrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, MaximumResumeBacktrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumResumeBacktrack_MetaData), NewProp_MaximumResumeBacktrack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FailedMoveRetryDelay = { "FailedMoveRetryDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, FailedMoveRetryDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedMoveRetryDelay_MetaData), NewProp_FailedMoveRetryDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaximumConsecutiveMoveFailures = { "MaximumConsecutiveMoveFailures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, MaximumConsecutiveMoveFailures), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumConsecutiveMoveFailures_MetaData), NewProp_MaximumConsecutiveMoveFailures_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultCombatResumeDelay = { "DefaultCombatResumeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, DefaultCombatResumeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCombatResumeDelay_MetaData), NewProp_DefaultCombatResumeDelay_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResumeWhenCombatTargetDestroyed = { "bResumeWhenCombatTargetDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bResumeWhenCombatTargetDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResumeWhenCombatTargetDestroyed_MetaData), NewProp_bResumeWhenCombatTargetDestroyed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSplineFollowerComponent), &UHT_STATICS::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FollowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FollowState = { "FollowState", "OnRep_FollowState", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, FollowState), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowState_MetaData), NewProp_FollowState_MetaData) }; // 33c27e3e3c98f36d6092c042d687486f4b5c82b0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentDistanceAlongSpline = { "CurrentDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, CurrentDistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDistanceAlongSpline_MetaData), NewProp_CurrentDistanceAlongSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurrentMoveGoal = { "CurrentMoveGoal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, CurrentMoveGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMoveGoal_MetaData), NewProp_CurrentMoveGoal_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFollowStateChanged = { "OnFollowStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, OnFollowStateChanged), Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFollowStateChanged_MetaData), NewProp_OnFollowStateChanged_MetaData) }; // 35fd4a3b4432585052b0a9b96a67ac71a7f8102f
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRouteProgress = { "OnRouteProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, OnRouteProgress), Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRouteProgress_MetaData), NewProp_OnRouteProgress_MetaData) }; // 402badff9418c698f7f93cb9a6e8f37220665010
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRouteCompleted = { "OnRouteCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, OnRouteCompleted), Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRouteCompleted_MetaData), NewProp_OnRouteCompleted_MetaData) }; // 78b553dcb35feba02db0d2141edc3db4b7a6620b
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnMoveFailure = { "OnMoveFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSplineFollowerComponent, OnMoveFailure), Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMoveFailure_MetaData), NewProp_OnMoveFailure_MetaData) }; // 4e6fb605f8f42643f526af0079c5140a3056ddb9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssignedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TravelDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TravelDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LookAheadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumLookAheadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RouteEndTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bProjectGoalsToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowPartialPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumResumeBacktrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FailedMoveRetryDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumConsecutiveMoveFailures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultCombatResumeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResumeWhenCombatTargetDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FollowState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FollowState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentDistanceAlongSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMoveGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFollowStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRouteProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRouteCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnMoveFailure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeSplineFollowerComponent Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeSplineFollowerComponent,
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
static void URenegadeSplineFollowerComponent_StaticRegisterNativesURenegadeSplineFollowerComponent()
{
	UClass* Class = URenegadeSplineFollowerComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeSplineFollowerComponent;
UClass* Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeSplineFollowerComponent;
		if (!Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSplineFollowerComponent"),
				Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.InnerSingleton,
				URenegadeSplineFollowerComponent_StaticRegisterNativesURenegadeSplineFollowerComponent,
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
		return Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeSplineFollowerComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeSplineFollowerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_AssignedPath(TEXT("AssignedPath"));
	static FName Name_FollowState(TEXT("FollowState"));
	static FName Name_CurrentDistanceAlongSpline(TEXT("CurrentDistanceAlongSpline"));
	const bool bIsValid = true
		&& Name_AssignedPath == ClassReps[(int32)ENetFields_Private::AssignedPath].Property->GetFName()
		&& Name_FollowState == ClassReps[(int32)ENetFields_Private::FollowState].Property->GetFName()
		&& Name_CurrentDistanceAlongSpline == ClassReps[(int32)ENetFields_Private::CurrentDistanceAlongSpline].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeSplineFollowerComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeSplineFollowerComponent);
URenegadeSplineFollowerComponent::~URenegadeSplineFollowerComponent() {}
// ********** End Class URenegadeSplineFollowerComponent *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeSplineFollowerComponent, TEXT("URenegadeSplineFollowerComponent"), &Z_Registration_Info_UClass_URenegadeSplineFollowerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeSplineFollowerComponent), 3591385771U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h__Script_RenegadeSplineAI_c93c3ecc6ace46e5446e54b6f550cffd07431323{
	TEXT("/Script/RenegadeSplineAI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
