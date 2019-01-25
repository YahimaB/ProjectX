// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeusGames_First/KeyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyBase() {}
// Cross Module References
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AKeyBase_NoRegister();
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AKeyBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeusGames_First();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AKeyBase_Activate();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AKeyBase_StrongActivate();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AKeyBase_Activate = FName(TEXT("Activate"));
	void AKeyBase::Activate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKeyBase_Activate),NULL);
	}
	static FName NAME_AKeyBase_StrongActivate = FName(TEXT("StrongActivate"));
	void AKeyBase::StrongActivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKeyBase_StrongActivate),NULL);
	}
	void AKeyBase::StaticRegisterNativesAKeyBase()
	{
		UClass* Class = AKeyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivatorOverlapBegin", &AKeyBase::execOnActivatorOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKeyBase_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyActions" },
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Function that initializes the action performed on activation with key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyBase, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics
	{
		struct KeyBase_eventOnActivatorOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(KeyBase_eventOnActivatorOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((KeyBase_eventOnActivatorOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KeyBase_eventOnActivatorOverlapBegin_Parms), &Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KeyBase_eventOnActivatorOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(KeyBase_eventOnActivatorOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KeyBase_eventOnActivatorOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(KeyBase_eventOnActivatorOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Declare overlap begin function for activator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyBase, "OnActivatorOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(KeyBase_eventOnActivatorOverlapBegin_Parms), Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKeyBase_StrongActivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyBase_StrongActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyActions" },
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Function that initializes the action performed on activation with key and accumulator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyBase_StrongActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyBase, "StrongActivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyBase_StrongActivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKeyBase_StrongActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyBase_StrongActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyBase_StrongActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKeyBase_NoRegister()
	{
		return AKeyBase::StaticClass();
	}
	struct Z_Construct_UClass_AKeyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Powered_MetaData[];
#endif
		static void NewProp_Powered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Powered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivatorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatorCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatorCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeusGames_First,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKeyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKeyBase_Activate, "Activate" }, // 1551022445
		{ &Z_Construct_UFunction_AKeyBase_OnActivatorOverlapBegin, "OnActivatorOverlapBegin" }, // 3017833278
		{ &Z_Construct_UFunction_AKeyBase_StrongActivate, "StrongActivate" }, // 1453496560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KeyBase.h" },
		{ "ModuleRelativePath", "KeyBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered_MetaData[] = {
		{ "Category", "Key Settings" },
		{ "ModuleRelativePath", "KeyBase.h" },
	};
#endif
	void Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered_SetBit(void* Obj)
	{
		((AKeyBase*)Obj)->Powered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered = { UE4CodeGen_Private::EPropertyClass::Bool, "Powered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AKeyBase), &Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Key Settings" },
		{ "ModuleRelativePath", "KeyBase.h" },
	};
#endif
	void Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((AKeyBase*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "Enabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AKeyBase), &Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorName_MetaData[] = {
		{ "Category", "Key Settings" },
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Name of activator needed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorName = { UE4CodeGen_Private::EPropertyClass::Name, "ActivatorName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AKeyBase, ActivatorName), METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorCollider_MetaData[] = {
		{ "Category", "Key Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Sphere collision component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorCollider = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatorCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AKeyBase, ActivatorCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyBase_Statics::NewProp_MainMesh_MetaData[] = {
		{ "Category", "Key Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyBase.h" },
		{ "ToolTip", "Main mesh component acting as root component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyBase_Statics::NewProp_MainMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MainMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AKeyBase, MainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::NewProp_MainMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::NewProp_MainMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyBase_Statics::NewProp_Powered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyBase_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyBase_Statics::NewProp_ActivatorCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyBase_Statics::NewProp_MainMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeyBase_Statics::ClassParams = {
		&AKeyBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AKeyBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AKeyBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKeyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeyBase, 3108533603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeyBase(Z_Construct_UClass_AKeyBase, &AKeyBase::StaticClass, TEXT("/Script/DeusGames_First"), TEXT("AKeyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
