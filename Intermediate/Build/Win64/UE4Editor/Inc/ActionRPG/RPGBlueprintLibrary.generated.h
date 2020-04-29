// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRPGGameplayEffectContainerSpec;
struct FActiveGameplayEffectHandle;
struct FHitResult;
class AActor;
struct FRPGItemSlot;
#ifdef ACTIONRPG_RPGBlueprintLibrary_generated_h
#error "RPGBlueprintLibrary.generated.h already included, missing '#pragma once' in RPGBlueprintLibrary.h"
#endif
#define ACTIONRPG_RPGBlueprintLibrary_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=URPGBlueprintLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyExternalEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=URPGBlueprintLibrary::ApplyExternalEffectContainerSpec(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTargetsToEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=URPGBlueprintLibrary::AddTargetsToEffectContainerSpec(Z_Param_Out_ContainerSpec,Z_Param_Out_HitResults,Z_Param_Out_TargetActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveTargets) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveTargets(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveEffects) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveEffects(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_ItemSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsValidItemSlot(Z_Param_Out_ItemSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_RPGItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::NotEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_RPGItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::EqualEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLoadingScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URPGBlueprintLibrary::StopLoadingScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLoadingScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bPlayUntilStopped); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URPGBlueprintLibrary::PlayLoadingScreen(Z_Param_bPlayUntilStopped,Z_Param_PlayTime); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=URPGBlueprintLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyExternalEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=URPGBlueprintLibrary::ApplyExternalEffectContainerSpec(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTargetsToEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=URPGBlueprintLibrary::AddTargetsToEffectContainerSpec(Z_Param_Out_ContainerSpec,Z_Param_Out_HitResults,Z_Param_Out_TargetActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveTargets) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveTargets(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveEffects) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveEffects(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_ItemSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsValidItemSlot(Z_Param_Out_ItemSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_RPGItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::NotEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_RPGItemSlot) \
	{ \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::EqualEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLoadingScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URPGBlueprintLibrary::StopLoadingScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLoadingScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bPlayUntilStopped); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URPGBlueprintLibrary::PlayLoadingScreen(Z_Param_bPlayUntilStopped,Z_Param_PlayTime); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URPGBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URPGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURPGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URPGBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URPGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGBlueprintLibrary(URPGBlueprintLibrary&&); \
	NO_API URPGBlueprintLibrary(const URPGBlueprintLibrary&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGBlueprintLibrary(URPGBlueprintLibrary&&); \
	NO_API URPGBlueprintLibrary(const URPGBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RPGBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
