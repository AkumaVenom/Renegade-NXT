// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSplineAIBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSplineAIBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function FindNearestCompatiblePath *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldLocation;
		int32 TeamId;
		FName RequiredRouteGroup;
		float MaxSearchDistance;
		ARenegadeSplinePath* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Finds the nearest enabled route that accepts TeamId.\n     * RequiredRouteGroup NAME_None accepts any route group.\n     * MaxSearchDistance <= 0 means unlimited.\n     */" },
#endif
		{ "CPP_Default_MaxSearchDistance", "0.000000" },
		{ "CPP_Default_RequiredRouteGroup", "None" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the nearest enabled route that accepts TeamId.\nRequiredRouteGroup NAME_None accepts any route group.\nMaxSearchDistance <= 0 means unlimited." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindNearestCompatiblePath constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredRouteGroup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSearchDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNearestCompatiblePath constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNearestCompatiblePath Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RequiredRouteGroup = { "RequiredRouteGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, RequiredRouteGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxSearchDistance = { "MaxSearchDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, MaxSearchDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, ReturnValue), Z_Construct_UClass_ARenegadeSplinePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredRouteGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindNearestCompatiblePath Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "FindNearestCompatiblePath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execFindNearestCompatiblePath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FNameProperty,Z_Param_RequiredRouteGroup);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSearchDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeSplinePath**)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::FindNearestCompatiblePath(Z_Param_WorldContextObject,Z_Param_WorldLocation,Z_Param_TeamId,Z_Param_RequiredRouteGroup,Z_Param_MaxSearchDistance);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function FindNearestCompatiblePath *******

// ********** Begin Class URenegadeSplineAIBlueprintLibrary ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RenegadeSplineAIBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeSplineAIBlueprintLibrary constinit property declarations ********
// ********** End Class URenegadeSplineAIBlueprintLibrary constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindNearestCompatiblePath"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execFindNearestCompatiblePath },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath, "FindNearestCompatiblePath" }, // 3d140abcbac11e786670966a9dc26245abc5b075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeSplineAIBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URenegadeSplineAIBlueprintLibrary_StaticRegisterNativesURenegadeSplineAIBlueprintLibrary()
{
	UClass* Class = URenegadeSplineAIBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary;
UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeSplineAIBlueprintLibrary;
		if (!Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSplineAIBlueprintLibrary"),
				Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton,
				URenegadeSplineAIBlueprintLibrary_StaticRegisterNativesURenegadeSplineAIBlueprintLibrary,
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
		return Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton;
}
#undef UHT_STATICS
URenegadeSplineAIBlueprintLibrary::URenegadeSplineAIBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeSplineAIBlueprintLibrary);
URenegadeSplineAIBlueprintLibrary::~URenegadeSplineAIBlueprintLibrary() {}
// ********** End Class URenegadeSplineAIBlueprintLibrary ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, TEXT("URenegadeSplineAIBlueprintLibrary"), &Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeSplineAIBlueprintLibrary), 1504992047U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h__Script_RenegadeSplineAI_9b65f44cb043c57e20325075324961c7d4fab617{
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
