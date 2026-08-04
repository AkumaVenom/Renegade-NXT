// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSoldierCombatComponent.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeSoldierCombatComponent_generated_h
#error "RenegadeSoldierCombatComponent.generated.h already included, missing '#pragma once' in RenegadeSoldierCombatComponent.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeSoldierCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class USkeletalMeshComponent;
enum class ERenegadeCombatMoveType : uint8;
struct FHitResult;
struct FRenegadeWeaponSettings;

// ********** Begin Class URenegadeSoldierCombatComponent ******************************************
#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFinishRespawn_Implementation(FTransform RespawnTransform); \
	virtual void MulticastBeginDeath_Implementation(AActor* Killer, FVector RagdollImpulse, FName HitBone); \
	virtual void MulticastReloadFinished_Implementation(); \
	virtual void MulticastReloadStarted_Implementation(); \
	virtual void MulticastShotFired_Implementation(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult); \
	DECLARE_FUNCTION(execMulticastFinishRespawn); \
	DECLARE_FUNCTION(execMulticastBeginDeath); \
	DECLARE_FUNCTION(execMulticastReloadFinished); \
	DECLARE_FUNCTION(execMulticastReloadStarted); \
	DECLARE_FUNCTION(execMulticastShotFired); \
	DECLARE_FUNCTION(execOnRep_CurrentTarget); \
	DECLARE_FUNCTION(execOnRep_Dead); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execHandleOwnerAnyDamage); \
	DECLARE_FUNCTION(execGetActiveWeaponSettings); \
	DECLARE_FUNCTION(execGetResolvedRagdollMesh); \
	DECLARE_FUNCTION(execValidateRagdollSetup); \
	DECLARE_FUNCTION(execIsInvulnerable); \
	DECLARE_FUNCTION(execSetInvulnerable); \
	DECLARE_FUNCTION(execRespawnNow); \
	DECLARE_FUNCTION(execForceKill); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsInCombat); \
	DECLARE_FUNCTION(execIsValidCombatTarget); \
	DECLARE_FUNCTION(execIsHostileToActor); \
	DECLARE_FUNCTION(execSetTeamId); \
	DECLARE_FUNCTION(execIsCombatRotationLockEnabled); \
	DECLARE_FUNCTION(execSetCombatRotationLockEnabled); \
	DECLARE_FUNCTION(execForceTargetRefresh); \
	DECLARE_FUNCTION(execClearCombatTarget); \
	DECLARE_FUNCTION(execSetCombatTarget); \
	DECLARE_FUNCTION(execStopAutoCombat); \
	DECLARE_FUNCTION(execStartAutoCombat);


#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);

#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeSoldierCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeSoldierCombatComponent) \
	DECLARE_SERIALIZER(URenegadeSoldierCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		bLockCombatRotationToCurrentTarget, \
		CurrentHealth, \
		bIsDead, \
		CurrentTarget, \
		CurrentMagazineAmmo, \
		NETFIELD_REP_END=CurrentMagazineAmmo	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeSoldierCombatComponent(URenegadeSoldierCombatComponent&&) = delete; \
	URenegadeSoldierCombatComponent(const URenegadeSoldierCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeSoldierCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeSoldierCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeSoldierCombatComponent) \
	NO_API virtual ~URenegadeSoldierCombatComponent();


#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_34_PROLOG
#define FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_CALLBACK_WRAPPERS \
	FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeSoldierCombatComponent;

// ********** End Class URenegadeSoldierCombatComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_619_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
