// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC1B501C6,
				0x8E008113,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSGame(Z_Construct_UPackage__Script_FPSGame, TEXT("/Script/FPSGame"), Z_Registration_Info_UPackage__Script_FPSGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1B501C6, 0x8E008113));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
