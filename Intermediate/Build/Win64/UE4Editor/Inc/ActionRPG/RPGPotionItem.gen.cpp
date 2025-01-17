// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Items/RPGPotionItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPotionItem() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGPotionItem_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGPotionItem();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGPotionItem::StaticRegisterNativesURPGPotionItem()
	{
	}
	UClass* Z_Construct_UClass_URPGPotionItem_NoRegister()
	{
		return URPGPotionItem::StaticClass();
	}
	struct Z_Construct_UClass_URPGPotionItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGPotionItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGPotionItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Native base class for potions, should be blueprinted */" },
		{ "IncludePath", "Items/RPGPotionItem.h" },
		{ "ModuleRelativePath", "Public/Items/RPGPotionItem.h" },
		{ "ToolTip", "Native base class for potions, should be blueprinted" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGPotionItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGPotionItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGPotionItem_Statics::ClassParams = {
		&URPGPotionItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGPotionItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGPotionItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGPotionItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGPotionItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGPotionItem, 581325549);
	template<> ACTIONRPG_API UClass* StaticClass<URPGPotionItem>()
	{
		return URPGPotionItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGPotionItem(Z_Construct_UClass_URPGPotionItem, &URPGPotionItem::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGPotionItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGPotionItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
