// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/Public/GameSettings/GM_CoinPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_CoinPickup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MINIGAMES_API UClass* Z_Construct_UClass_AGM_CoinPickup();
	MINIGAMES_API UClass* Z_Construct_UClass_AGM_CoinPickup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void AGM_CoinPickup::StaticRegisterNativesAGM_CoinPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_CoinPickup);
	UClass* Z_Construct_UClass_AGM_CoinPickup_NoRegister()
	{
		return AGM_CoinPickup::StaticClass();
	}
	struct Z_Construct_UClass_AGM_CoinPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_CoinPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_CoinPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSettings/GM_CoinPickup.h" },
		{ "ModuleRelativePath", "Public/GameSettings/GM_CoinPickup.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_CoinPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_CoinPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_CoinPickup_Statics::ClassParams = {
		&AGM_CoinPickup::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGM_CoinPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_CoinPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_CoinPickup()
	{
		if (!Z_Registration_Info_UClass_AGM_CoinPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_CoinPickup.OuterSingleton, Z_Construct_UClass_AGM_CoinPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGM_CoinPickup.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<AGM_CoinPickup>()
	{
		return AGM_CoinPickup::StaticClass();
	}
	AGM_CoinPickup::AGM_CoinPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_CoinPickup);
	AGM_CoinPickup::~AGM_CoinPickup() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_GameSettings_GM_CoinPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_GameSettings_GM_CoinPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGM_CoinPickup, AGM_CoinPickup::StaticClass, TEXT("AGM_CoinPickup"), &Z_Registration_Info_UClass_AGM_CoinPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_CoinPickup), 157078947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_GameSettings_GM_CoinPickup_h_1485642383(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_GameSettings_GM_CoinPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_GameSettings_GM_CoinPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
