// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSObjectiveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSObjectiveActor() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AFPSObjectiveActor::StaticRegisterNativesAFPSObjectiveActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSObjectiveActor);
	UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AFPSObjectiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSObjectiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSObjectiveActor.h" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Tworzenie metadanych (w?a?ciwo?ci) - nowej kategori - w obiekcie dla MeshComp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
		{ "ToolTip", "Tworzenie metadanych (w?a?ciwo?ci) - nowej kategori - w obiekcie dla MeshComp" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Utworzenie w klasie statycznego komponentu o nazwie MeshComp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
		{ "ToolTip", "Utworzenie w klasie statycznego komponentu o nazwie MeshComp" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/FPSObjectiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX = { "PickupFX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSObjectiveActor, PickupFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSObjectiveActor_Statics::NewProp_PickupFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSObjectiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSObjectiveActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams = {
		&AFPSObjectiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSObjectiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSObjectiveActor()
	{
		if (!Z_Registration_Info_UClass_AFPSObjectiveActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSObjectiveActor.OuterSingleton, Z_Construct_UClass_AFPSObjectiveActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSObjectiveActor.OuterSingleton;
	}
	template<> FPSGAME_API UClass* StaticClass<AFPSObjectiveActor>()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSObjectiveActor);
	struct Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSObjectiveActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSObjectiveActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSObjectiveActor, AFPSObjectiveActor::StaticClass, TEXT("AFPSObjectiveActor"), &Z_Registration_Info_UClass_AFPSObjectiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSObjectiveActor), 1362095275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSObjectiveActor_h_125907935(TEXT("/Script/FPSGame"),
		Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSObjectiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSObjectiveActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
