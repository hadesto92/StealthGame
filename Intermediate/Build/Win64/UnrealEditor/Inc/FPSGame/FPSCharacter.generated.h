// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSGAME_FPSCharacter_generated_h

#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_SPARSE_DATA
#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire);


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire);


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_EVENT_PARMS
#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_CALLBACK_WRAPPERS
#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCarryingObjective=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCarryingObjective	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCarryingObjective=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCarryingObjective	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_18_PROLOG \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_EVENT_PARMS


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_SPARSE_DATA \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_CALLBACK_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_SPARSE_DATA \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_CALLBACK_WRAPPERS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_StealthGame_Source_FPSGame_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
