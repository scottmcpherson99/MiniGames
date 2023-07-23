// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGames_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MiniGames;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MiniGames()
	{
		if (!Z_Registration_Info_UPackage__Script_MiniGames.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MiniGames",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDE9A56D6,
				0x2E3C8CBD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MiniGames.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MiniGames.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MiniGames(Z_Construct_UPackage__Script_MiniGames, TEXT("/Script/MiniGames"), Z_Registration_Info_UPackage__Script_MiniGames, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDE9A56D6, 0x2E3C8CBD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
