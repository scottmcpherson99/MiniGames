// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/Public/Pickups/CoinPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPickup() {}
// Cross Module References
	MINIGAMES_API UClass* Z_Construct_UClass_ACoinPickup();
	MINIGAMES_API UClass* Z_Construct_UClass_ACoinPickup_NoRegister();
	MINIGAMES_API UClass* Z_Construct_UClass_APickUpBase();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void ACoinPickup::StaticRegisterNativesACoinPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinPickup);
	UClass* Z_Construct_UClass_ACoinPickup_NoRegister()
	{
		return ACoinPickup::StaticClass();
	}
	struct Z_Construct_UClass_ACoinPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUpBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/CoinPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/CoinPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPickup_Statics::ClassParams = {
		&ACoinPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinPickup()
	{
		if (!Z_Registration_Info_UClass_ACoinPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPickup.OuterSingleton, Z_Construct_UClass_ACoinPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinPickup.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<ACoinPickup>()
	{
		return ACoinPickup::StaticClass();
	}
	ACoinPickup::ACoinPickup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPickup);
	ACoinPickup::~ACoinPickup() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_CoinPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_CoinPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPickup, ACoinPickup::StaticClass, TEXT("ACoinPickup"), &Z_Registration_Info_UClass_ACoinPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPickup), 443168064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_CoinPickup_h_3940144433(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_CoinPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_CoinPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
