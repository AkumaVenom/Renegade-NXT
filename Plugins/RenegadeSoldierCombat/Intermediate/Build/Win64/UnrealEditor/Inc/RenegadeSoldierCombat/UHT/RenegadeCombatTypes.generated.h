// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeCombatTypes.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeCombatTypes_generated_h
#error "RenegadeCombatTypes.generated.h already included, missing '#pragma once' in RenegadeCombatTypes.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeCombatTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRenegadeWeaponSettings *******************************************
struct Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics;
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);

#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase::Inner); }


struct FRenegadeWeaponSettings;
// ********** End ScriptStruct FRenegadeWeaponSettings *********************************************

// ********** Begin ScriptStruct FRenegadeTargetingSettings ****************************************
struct Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics;
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase);

#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase::Inner); }


struct FRenegadeTargetingSettings;
// ********** End ScriptStruct FRenegadeTargetingSettings ******************************************

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings ***********************************
struct Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics;
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase);

#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase::Inner); }


struct FRenegadeCombatMovementSettings;
// ********** End ScriptStruct FRenegadeCombatMovementSettings *************************************

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings ************************************
struct Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics;
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase);

#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase::Inner); }


struct FRenegadeHealthRespawnSettings;
// ********** End ScriptStruct FRenegadeHealthRespawnSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h

// ********** Begin Enum ERenegadeWeaponClass ******************************************************
#define FOREACH_ENUM_ERENEGADEWEAPONCLASS(op) \
	op(ERenegadeWeaponClass::AutomaticRifle) \
	op(ERenegadeWeaponClass::Pistol) \
	op(ERenegadeWeaponClass::Custom) 

enum class ERenegadeWeaponClass : uint8;
template<> struct TIsUEnumClass<ERenegadeWeaponClass> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeWeaponClass>();
// ********** End Enum ERenegadeWeaponClass ********************************************************

// ********** Begin Enum ERenegadeCombatMoveType ***************************************************
#define FOREACH_ENUM_ERENEGADECOMBATMOVETYPE(op) \
	op(ERenegadeCombatMoveType::Hold) \
	op(ERenegadeCombatMoveType::Advance) \
	op(ERenegadeCombatMoveType::Retreat) \
	op(ERenegadeCombatMoveType::StrafeLeft) \
	op(ERenegadeCombatMoveType::StrafeRight) \
	op(ERenegadeCombatMoveType::SearchLastKnownPosition) 

enum class ERenegadeCombatMoveType : uint8;
template<> struct TIsUEnumClass<ERenegadeCombatMoveType> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeCombatMoveType>();
// ********** End Enum ERenegadeCombatMoveType *****************************************************

// ********** Begin Enum ERenegadeRespawnTransformMode *********************************************
#define FOREACH_ENUM_ERENEGADERESPAWNTRANSFORMMODE(op) \
	op(ERenegadeRespawnTransformMode::OriginalTransform) \
	op(ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint) \
	op(ERenegadeRespawnTransformMode::CustomTransform) 

enum class ERenegadeRespawnTransformMode : uint8;
template<> struct TIsUEnumClass<ERenegadeRespawnTransformMode> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeRespawnTransformMode>();
// ********** End Enum ERenegadeRespawnTransformMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
