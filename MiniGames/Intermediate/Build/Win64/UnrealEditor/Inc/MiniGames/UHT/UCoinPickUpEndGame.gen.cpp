// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/Public/UI/UCoinPickUpEndGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCoinPickUpEndGame() {}
// Cross Module References
	MINIGAMES_API UClass* Z_Construct_UClass_UUCoinPickUpEndGame();
	MINIGAMES_API UClass* Z_Construct_UClass_UUCoinPickUpEndGame_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void UUCoinPickUpEndGame::StaticRegisterNativesUUCoinPickUpEndGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUCoinPickUpEndGame);
	UClass* Z_Construct_UClass_UUCoinPickUpEndGame_NoRegister()
	{
		return UUCoinPickUpEndGame::StaticClass();
	}
	struct Z_Construct_UClass_UUCoinPickUpEndGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUCoinPickUpEndGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCoinPickUpEndGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UCoinPickUpEndGame.h" },
		{ "ModuleRelativePath", "Public/UI/UCoinPickUpEndGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUCoinPickUpEndGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUCoinPickUpEndGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUCoinPickUpEndGame_Statics::ClassParams = {
		&UUCoinPickUpEndGame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUCoinPickUpEndGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUCoinPickUpEndGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUCoinPickUpEndGame()
	{
		if (!Z_Registration_Info_UClass_UUCoinPickUpEndGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUCoinPickUpEndGame.OuterSingleton, Z_Construct_UClass_UUCoinPickUpEndGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUCoinPickUpEndGame.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<UUCoinPickUpEndGame>()
	{
		return UUCoinPickUpEndGame::StaticClass();
	}
	UUCoinPickUpEndGame::UUCoinPickUpEndGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUCoinPickUpEndGame);
	UUCoinPickUpEndGame::~UUCoinPickUpEndGame() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickUpEndGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickUpEndGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUCoinPickUpEndGame, UUCoinPickUpEndGame::StaticClass, TEXT("UUCoinPickUpEndGame"), &Z_Registration_Info_UClass_UUCoinPickUpEndGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUCoinPickUpEndGame), 3331506013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickUpEndGame_h_2959076963(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickUpEndGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_UI_UCoinPickUpEndGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
