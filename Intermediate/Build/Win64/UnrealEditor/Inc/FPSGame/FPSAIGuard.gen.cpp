// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSAIGuard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAIGuard() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAIState();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
	static UEnum* EAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EAIState, Z_Construct_UPackage__Script_FPSGame(), TEXT("EAIState"));
		}
		return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSGame_EAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSGame_EAIState_Statics::Enumerators[] = {
		{ "EAIState::Idle", (int64)EAIState::Idle },
		{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
		{ "EAIState::Alerted", (int64)EAIState::Alerted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSGame_EAIState_Statics::Enum_MetaDataParams[] = {
		{ "Alerted.Name", "EAIState::Alerted" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "EAIState::Idle" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
		{ "Suspicious.Name", "EAIState::Suspicious" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSGame_EAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
		nullptr,
		"EAIState",
		"EAIState",
		Z_Construct_UEnum_FPSGame_EAIState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EAIState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FPSGame_EAIState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EAIState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FPSGame_EAIState()
	{
		if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_FPSGame_EAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execFirstPointPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirstPointPatrol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execGeneratePointPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GeneratePointPatrol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execPatrolPointMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PatrolPointMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execSetGuardState)
	{
		P_GET_ENUM(EAIState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuardState(EAIState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execOnRep_GuardState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GuardState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execResetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execResetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execOnNoiseHear)
	{
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNoiseHear(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	static FName NAME_AFPSAIGuard_GetRandomLocation = FName(TEXT("GetRandomLocation"));
	void AFPSAIGuard::GetRandomLocation(FVector Origin, float Radius)
	{
		FPSAIGuard_eventGetRandomLocation_Parms Parms;
		Parms.Origin=Origin;
		Parms.Radius=Radius;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAIGuard_GetRandomLocation),&Parms);
	}
	static FName NAME_AFPSAIGuard_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AFPSAIGuard::OnStateChanged(EAIState NewState)
	{
		FPSAIGuard_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAIGuard_OnStateChanged),&Parms);
	}
	void AFPSAIGuard::StaticRegisterNativesAFPSAIGuard()
	{
		UClass* Class = AFPSAIGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirstPointPatrol", &AFPSAIGuard::execFirstPointPatrol },
			{ "GeneratePointPatrol", &AFPSAIGuard::execGeneratePointPatrol },
			{ "OnNoiseHear", &AFPSAIGuard::execOnNoiseHear },
			{ "OnPawnSeen", &AFPSAIGuard::execOnPawnSeen },
			{ "OnRep_GuardState", &AFPSAIGuard::execOnRep_GuardState },
			{ "PatrolPointMovement", &AFPSAIGuard::execPatrolPointMovement },
			{ "ResetLocation", &AFPSAIGuard::execResetLocation },
			{ "ResetOrientation", &AFPSAIGuard::execResetOrientation },
			{ "SetGuardState", &AFPSAIGuard::execSetGuardState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "FirstPointPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "GeneratePointPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventGetRandomLocation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventGetRandomLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "GetRandomLocation", nullptr, nullptr, sizeof(FPSAIGuard_eventGetRandomLocation_Parms), Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics
	{
		struct FPSAIGuard_eventOnNoiseHear_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHear_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHear_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHear_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_NoiseInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnNoiseHear", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::FPSAIGuard_eventOnNoiseHear_Parms), Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics
	{
		struct FPSAIGuard_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnPawnSeen", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::FPSAIGuard_eventOnPawnSeen_Parms), Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnRep_GuardState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(nullptr, 0) }; // 3443720981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(FPSAIGuard_eventOnStateChanged_Parms), Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "PatrolPointMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "ResetLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_ResetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_ResetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "ResetOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_ResetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics
	{
		struct FPSAIGuard_eventSetGuardState_Parms
		{
			EAIState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventSetGuardState_Parms, NewState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(nullptr, 0) }; // 3443720981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "SetGuardState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::FPSAIGuard_eventSetGuardState_Parms), Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_SetGuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_SetGuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSAIGuard);
	UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister()
	{
		return AFPSAIGuard::StaticClass();
	}
	struct Z_Construct_UClass_AFPSAIGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GuardState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GuardState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[];
#endif
		static void NewProp_bPatrol_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPatrol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePatrol_MetaData[];
#endif
		static void NewProp_bGeneratePatrol_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePatrol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFirstPointPatrolAtInPutLocation_MetaData[];
#endif
		static void NewProp_bFirstPointPatrolAtInPutLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstPointPatrolAtInPutLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceCheck_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointPatrol_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxPointPatrol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusGeneratorPatrolPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusGeneratorPatrolPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToPawnCheck_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToPawnCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToWaitSEEN_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWaitSEEN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToWaitHEAR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWaitHEAR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GuardMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGeneratedLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeneratedLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSAIGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSAIGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSAIGuard_FirstPointPatrol, "FirstPointPatrol" }, // 2688466207
		{ &Z_Construct_UFunction_AFPSAIGuard_GeneratePointPatrol, "GeneratePointPatrol" }, // 899751403
		{ &Z_Construct_UFunction_AFPSAIGuard_GetRandomLocation, "GetRandomLocation" }, // 2220061127
		{ &Z_Construct_UFunction_AFPSAIGuard_OnNoiseHear, "OnNoiseHear" }, // 442730481
		{ &Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen, "OnPawnSeen" }, // 3642711876
		{ &Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState, "OnRep_GuardState" }, // 3689582687
		{ &Z_Construct_UFunction_AFPSAIGuard_OnStateChanged, "OnStateChanged" }, // 3551791036
		{ &Z_Construct_UFunction_AFPSAIGuard_PatrolPointMovement, "PatrolPointMovement" }, // 4051246615
		{ &Z_Construct_UFunction_AFPSAIGuard_ResetLocation, "ResetLocation" }, // 2755436358
		{ &Z_Construct_UFunction_AFPSAIGuard_ResetOrientation, "ResetOrientation" }, // 3454973683
		{ &Z_Construct_UFunction_AFPSAIGuard_SetGuardState, "SetGuardState" }, // 3619409478
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSAIGuard.h" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState = { "GuardState", "OnRep_GuardState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, GuardState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData)) }; // 3443720981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_SetBit(void* Obj)
	{
		((AFPSAIGuard*)Obj)->bPatrol = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol = { "bPatrol", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAIGuard), &Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "EditCOndition", "bPatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol_SetBit(void* Obj)
	{
		((AFPSAIGuard*)Obj)->bGeneratePatrol = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol = { "bGeneratePatrol", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAIGuard), &Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "EditCOndition", "!bGeneratePatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation_SetBit(void* Obj)
	{
		((AFPSAIGuard*)Obj)->bFirstPointPatrolAtInPutLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation = { "bFirstPointPatrolAtInPutLocation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAIGuard), &Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceCheck_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceCheck = { "DistanceCheck", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, DistanceCheck), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_MaxPointPatrol_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "EditCondition", "bGeneratePatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_MaxPointPatrol = { "MaxPointPatrol", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, MaxPointPatrol), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_MaxPointPatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_MaxPointPatrol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_RadiusGeneratorPatrolPoint_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "EditCondition", "bGeneratePatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_RadiusGeneratorPatrolPoint = { "RadiusGeneratorPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, RadiusGeneratorPatrolPoint), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_RadiusGeneratorPatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_RadiusGeneratorPatrolPoint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint_Inner = { "PatrolPoint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint_MetaData[] = {
		{ "Category", "AI Patrol" },
		{ "EditCondition", "!bGeneratePatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint = { "PatrolPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, PatrolPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceToPawnCheck_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceToPawnCheck = { "DistanceToPawnCheck", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, DistanceToPawnCheck), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceToPawnCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceToPawnCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitSEEN_MetaData[] = {
		{ "Category", "Difficult" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitSEEN = { "TimeToWaitSEEN", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, TimeToWaitSEEN), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitSEEN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitSEEN_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitHEAR_MetaData[] = {
		{ "Category", "Difficult" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitHEAR = { "TimeToWaitHEAR", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, TimeToWaitHEAR), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitHEAR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitHEAR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardMovementSpeed = { "GuardMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, GuardMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_NewGeneratedLocation_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_NewGeneratedLocation = { "NewGeneratedLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, NewGeneratedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_NewGeneratedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_NewGeneratedLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bGeneratePatrol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bFirstPointPatrolAtInPutLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_MaxPointPatrol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_RadiusGeneratorPatrolPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_DistanceToPawnCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitSEEN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_TimeToWaitHEAR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_NewGeneratedLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSAIGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSAIGuard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams = {
		&AFPSAIGuard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSAIGuard()
	{
		if (!Z_Registration_Info_UClass_AFPSAIGuard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSAIGuard.OuterSingleton, Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSAIGuard.OuterSingleton;
	}
	template<> FPSGAME_API UClass* StaticClass<AFPSAIGuard>()
	{
		return AFPSAIGuard::StaticClass();
	}

	void AFPSAIGuard::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GuardState(TEXT("GuardState"));

		const bool bIsValid = true
			&& Name_GuardState == ClassReps[(int32)ENetFields_Private::GuardState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSAIGuard"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSAIGuard);
	struct Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::EnumInfo[] = {
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3443720981U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSAIGuard, AFPSAIGuard::StaticClass, TEXT("AFPSAIGuard"), &Z_Registration_Info_UClass_AFPSAIGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSAIGuard), 1196350857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_4183179371(TEXT("/Script/FPSGame"),
		Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StealthGame_Source_FPSGame_Public_FPSAIGuard_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
