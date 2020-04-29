// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
struct FActiveGameplayEffectHandle;
struct FRPGGameplayEffectContainerSpec;
struct FRPGGameplayEffectContainer;
#ifdef ACTIONRPG_RPGGameplayAbility_generated_h
#error "RPGGameplayAbility.generated.h already included, missing '#pragma once' in RPGGameplayAbility.h"
#endif
#define ACTIONRPG_RPGGameplayAbility_generated_h

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEffectContainerSpec) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainer,Z_Param_Out_Container); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffectContainerSpec) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEffectContainerSpec) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer) \
	{ \
		P_GET_STRUCT_REF(FRPGGameplayEffectContainer,Z_Param_Out_Container); \
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OverrideGameplayLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGameplayAbility(); \
	friend struct Z_Construct_UClass_URPGGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(URPGGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGGameplayAbility)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURPGGameplayAbility(); \
	friend struct Z_Construct_UClass_URPGGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(URPGGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGGameplayAbility)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGGameplayAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGGameplayAbility(URPGGameplayAbility&&); \
	NO_API URPGGameplayAbility(const URPGGameplayAbility&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGGameplayAbility(URPGGameplayAbility&&); \
	NO_API URPGGameplayAbility(const URPGGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGGameplayAbility)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_16_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_Abilities_RPGGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
