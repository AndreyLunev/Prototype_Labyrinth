// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/CharacterNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterNPC() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_ACharacterNPC_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_ACharacterNPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void ACharacterNPC::StaticRegisterNativesACharacterNPC()
	{
	}
	UClass* Z_Construct_UClass_ACharacterNPC_NoRegister()
	{
		return ACharacterNPC::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterNPC.h" },
		{ "ModuleRelativePath", "CharacterNPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterNPC_Statics::ClassParams = {
		&ACharacterNPC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACharacterNPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACharacterNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterNPC, 4188271905);
	template<> STEALTHGAME_API UClass* StaticClass<ACharacterNPC>()
	{
		return ACharacterNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterNPC(Z_Construct_UClass_ACharacterNPC, &ACharacterNPC::StaticClass, TEXT("/Script/StealthGame"), TEXT("ACharacterNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
