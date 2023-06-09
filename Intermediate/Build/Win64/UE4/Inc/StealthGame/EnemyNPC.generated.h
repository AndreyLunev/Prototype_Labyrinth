// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTHGAME_EnemyNPC_generated_h
#error "EnemyNPC.generated.h already included, missing '#pragma once' in EnemyNPC.h"
#endif
#define STEALTHGAME_EnemyNPC_generated_h

#define StealthGame_Source_StealthGame_EnemyNPC_h_12_RPC_WRAPPERS
#define StealthGame_Source_StealthGame_EnemyNPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_StealthGame_EnemyNPC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyNPC(); \
	friend struct Z_Construct_UClass_AEnemyNPC_Statics; \
public: \
	DECLARE_CLASS(AEnemyNPC, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyNPC)


#define StealthGame_Source_StealthGame_EnemyNPC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyNPC(); \
	friend struct Z_Construct_UClass_AEnemyNPC_Statics; \
public: \
	DECLARE_CLASS(AEnemyNPC, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyNPC)


#define StealthGame_Source_StealthGame_EnemyNPC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyNPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyNPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyNPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyNPC(AEnemyNPC&&); \
	NO_API AEnemyNPC(const AEnemyNPC&); \
public:


#define StealthGame_Source_StealthGame_EnemyNPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyNPC(AEnemyNPC&&); \
	NO_API AEnemyNPC(const AEnemyNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyNPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyNPC)


#define StealthGame_Source_StealthGame_EnemyNPC_h_12_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_StealthGame_EnemyNPC_h_9_PROLOG
#define StealthGame_Source_StealthGame_EnemyNPC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_INCLASS \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_EnemyNPC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_EnemyNPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AEnemyNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_EnemyNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
