// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniGames/Public/Pickups/PickUpBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MINIGAMES_API UClass* Z_Construct_UClass_APickUpBase();
	MINIGAMES_API UClass* Z_Construct_UClass_APickUpBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MiniGames();
// End Cross Module References
	void APickUpBase::StaticRegisterNativesAPickUpBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUpBase);
	UClass* Z_Construct_UClass_APickUpBase_NoRegister()
	{
		return APickUpBase::StaticClass();
	}
	struct Z_Construct_UClass_APickUpBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/PickUpBase.h" },
		{ "ModuleRelativePath", "Public/Pickups/PickUpBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpBase_Statics::ClassParams = {
		&APickUpBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpBase()
	{
		if (!Z_Registration_Info_UClass_APickUpBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpBase.OuterSingleton, Z_Construct_UClass_APickUpBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickUpBase.OuterSingleton;
	}
	template<> MINIGAMES_API UClass* StaticClass<APickUpBase>()
	{
		return APickUpBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpBase);
	APickUpBase::~APickUpBase() {}
	struct Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_PickUpBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_PickUpBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickUpBase, APickUpBase::StaticClass, TEXT("APickUpBase"), &Z_Registration_Info_UClass_APickUpBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpBase), 4183057876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_PickUpBase_h_2346724697(TEXT("/Script/MiniGames"),
		Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_PickUpBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniGames_Source_MiniGames_Public_Pickups_PickUpBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
