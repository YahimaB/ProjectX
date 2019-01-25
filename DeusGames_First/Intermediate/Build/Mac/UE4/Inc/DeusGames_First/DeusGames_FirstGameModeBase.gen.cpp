// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeusGames_First/DeusGames_FirstGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeusGames_FirstGameModeBase() {}
// Cross Module References
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_ADeusGames_FirstGameModeBase_NoRegister();
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_ADeusGames_FirstGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DeusGames_First();
// End Cross Module References
	void ADeusGames_FirstGameModeBase::StaticRegisterNativesADeusGames_FirstGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADeusGames_FirstGameModeBase_NoRegister()
	{
		return ADeusGames_FirstGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeusGames_First,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DeusGames_FirstGameModeBase.h" },
		{ "ModuleRelativePath", "DeusGames_FirstGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeusGames_FirstGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::ClassParams = {
		&ADeusGames_FirstGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeusGames_FirstGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeusGames_FirstGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeusGames_FirstGameModeBase, 830848542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeusGames_FirstGameModeBase(Z_Construct_UClass_ADeusGames_FirstGameModeBase, &ADeusGames_FirstGameModeBase::StaticClass, TEXT("/Script/DeusGames_First"), TEXT("ADeusGames_FirstGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeusGames_FirstGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
