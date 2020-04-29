// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGame;
class URPGSaveGame;
struct FRPGItemSlot;
#ifdef ACTIONRPG_RPGGameInstanceBase_generated_h
#error "RPGGameInstanceBase.generated.h already included, missing '#pragma once' in RPGGameInstanceBase.h"
#endif
#define ACTIONRPG_RPGGameInstanceBase_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WriteSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSlotInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SlotName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSaveSlotInfo(Z_Param_Out_SlotName,Z_Param_Out_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleSaveGameLoaded) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HandleSaveGameLoaded(Z_Param_SaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadOrCreateSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadOrCreateSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSavingEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URPGSaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItemSlot) \
	{ \
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidItemSlot(Z_Param_ItemSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDefaultInventory) \
	{ \
		P_GET_OBJECT(URPGSaveGame,Z_Param_SaveGame); \
		P_GET_UBOOL(Z_Param_bRemoveExtra); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDefaultInventory(Z_Param_SaveGame,Z_Param_bRemoveExtra); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WriteSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSlotInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SlotName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSaveSlotInfo(Z_Param_Out_SlotName,Z_Param_Out_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleSaveGameLoaded) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HandleSaveGameLoaded(Z_Param_SaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadOrCreateSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadOrCreateSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSavingEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URPGSaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItemSlot) \
	{ \
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidItemSlot(Z_Param_ItemSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDefaultInventory) \
	{ \
		P_GET_OBJECT(URPGSaveGame,Z_Param_SaveGame); \
		P_GET_UBOOL(Z_Param_bRemoveExtra); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDefaultInventory(Z_Param_SaveGame,Z_Param_bRemoveExtra); \
		P_NATIVE_END; \
	}


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGameInstanceBase(); \
	friend struct Z_Construct_UClass_URPGGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(URPGGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGGameInstanceBase)


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesURPGGameInstanceBase(); \
	friend struct Z_Construct_UClass_URPGGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(URPGGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGGameInstanceBase)


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGGameInstanceBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGGameInstanceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGameInstanceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGameInstanceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGGameInstanceBase(URPGGameInstanceBase&&); \
	NO_API URPGGameInstanceBase(const URPGGameInstanceBase&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGGameInstanceBase(URPGGameInstanceBase&&); \
	NO_API URPGGameInstanceBase(const URPGGameInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGameInstanceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGameInstanceBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGGameInstanceBase)


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentSaveGame() { return STRUCT_OFFSET(URPGGameInstanceBase, CurrentSaveGame); } \
	FORCEINLINE static uint32 __PPO__bSavingEnabled() { return STRUCT_OFFSET(URPGGameInstanceBase, bSavingEnabled); } \
	FORCEINLINE static uint32 __PPO__bCurrentlySaving() { return STRUCT_OFFSET(URPGGameInstanceBase, bCurrentlySaving); } \
	FORCEINLINE static uint32 __PPO__bPendingSaveRequested() { return STRUCT_OFFSET(URPGGameInstanceBase, bPendingSaveRequested); }


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_17_PROLOG
#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGGameInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGGameInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
