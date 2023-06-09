// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/EnemyNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyNPC() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_AEnemyNPC_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_AEnemyNPC();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void AEnemyNPC::StaticRegisterNativesAEnemyNPC()
	{
	}
	UClass* Z_Construct_UClass_AEnemyNPC_NoRegister()
	{
		return AEnemyNPC::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyNPC.h" },
		{ "ModuleRelativePath", "EnemyNPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyNPC_Statics::ClassParams = {
		&AEnemyNPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyNPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyNPC, 3238497233);
	template<> STEALTHGAME_API UClass* StaticClass<AEnemyNPC>()
	{
		return AEnemyNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyNPC(Z_Construct_UClass_AEnemyNPC, &AEnemyNPC::StaticClass, TEXT("/Script/StealthGame"), TEXT("AEnemyNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
