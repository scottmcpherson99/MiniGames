// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/Public/UI/UCoinPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCoinPickup() {}
// Cross Module References
	MINIGAMES_API UClass* Z_Construct_UClass_UUCoinPickup();
	MINIGAMES_API UClass* Z_Construct_UClass_UUCoinPickup_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void UUCoinPickup::StaticRegisterNativesUUCoinPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUCoinPickup);
	UClass* Z_Construct_UClass_UUCoinPickup_NoRegister()
	{
		return UUCoinPickup::StaticClass();
	}
	struct Z_Construct_UClass_UUCoinPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUCoinPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCoinPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UCoinPickup.h" },
		{ "ModuleRelativePath", "Public/UI/UCoinPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUCoinPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUCoinPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUCoinPickup_Statics::ClassParams = {
		&UUCoinPickup::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUCoinPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUCoinPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUCoinPickup()
	{
		if (!Z_Registration_Info_UClass_UUCoinPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUCoinPickup.OuterSingleton, Z_Construct_UClass_UUCoinPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUCoinPickup.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<UUCoinPickup>()
	{
		return UUCoinPickup::StaticClass();
	}
	UUCoinPickup::UUCoinPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUCoinPickup);
	UUCoinPickup::~UUCoinPickup() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUCoinPickup, UUCoinPickup::StaticClass, TEXT("UUCoinPickup"), &Z_Registration_Info_UClass_UUCoinPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUCoinPickup), 4186108277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickup_h_75664316(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
