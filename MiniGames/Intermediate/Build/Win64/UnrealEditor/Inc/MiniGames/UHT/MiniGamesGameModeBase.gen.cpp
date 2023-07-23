// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/MiniGamesGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGamesGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MINIGAMES_API UClass* Z_Construct_UClass_AMiniGamesGameModeBase();
	MINIGAMES_API UClass* Z_Construct_UClass_AMiniGamesGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void AMiniGamesGameModeBase::StaticRegisterNativesAMiniGamesGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniGamesGameModeBase);
	UClass* Z_Construct_UClass_AMiniGamesGameModeBase_NoRegister()
	{
		return AMiniGamesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMiniGamesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniGamesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGamesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MiniGamesGameModeBase.h" },
		{ "ModuleRelativePath", "MiniGamesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniGamesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniGamesGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniGamesGameModeBase_Statics::ClassParams = {
		&AMiniGamesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMiniGamesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGamesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiniGamesGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMiniGamesGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniGamesGameModeBase.OuterSingleton, Z_Construct_UClass_AMiniGamesGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMiniGamesGameModeBase.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<AMiniGamesGameModeBase>()
	{
		return AMiniGamesGameModeBase::StaticClass();
	}
	AMiniGamesGameModeBase::AMiniGamesGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniGamesGameModeBase);
	AMiniGamesGameModeBase::~AMiniGamesGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_MiniGamesGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_MiniGamesGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMiniGamesGameModeBase, AMiniGamesGameModeBase::StaticClass, TEXT("AMiniGamesGameModeBase"), &Z_Registration_Info_UClass_AMiniGamesGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniGamesGameModeBase), 1564291407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_MiniGamesGameModeBase_h_2246616991(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_MiniGamesGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_MiniGamesGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
