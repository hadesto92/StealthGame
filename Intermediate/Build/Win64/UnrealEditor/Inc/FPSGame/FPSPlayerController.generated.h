// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FPSGAME_FPSPlayerController_generated_h

#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_SPARSE_DATA
#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS
#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_EVENT_PARMS \
	struct FPSPlayerController_eventOnMissionCompleted_Parms \
	{ \
		APawn* InstigatoryPawn; \
		bool bMissionSuccess; \
	};


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public:


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController)


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_12_PROLOG \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_EVENT_PARMS


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_SPARSE_DATA \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_SPARSE_DATA \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_StealthGame_Source_FPSGame_Public_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
