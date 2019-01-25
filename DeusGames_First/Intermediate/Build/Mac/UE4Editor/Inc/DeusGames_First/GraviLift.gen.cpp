// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeusGames_First/GraviLift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraviLift() {}
// Cross Module References
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AGraviLift_NoRegister();
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AGraviLift();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeusGames_First();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AGraviLift_ApplyForcer();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGraviLift::StaticRegisterNativesAGraviLift()
	{
		UClass* Class = AGraviLift::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyForcer", &AGraviLift::execApplyForcer },
			{ "OnForcerOverlapBegin", &AGraviLift::execOnForcerOverlapBegin },
			{ "OnForcerOverlapEnd", &AGraviLift::execOnForcerOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Called every tick to add force to affected actores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGraviLift, "ApplyForcer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGraviLift_ApplyForcer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGraviLift_ApplyForcer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics
	{
		struct GraviLift_eventOnForcerOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GraviLift_eventOnForcerOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GraviLift_eventOnForcerOverlapBegin_Parms), &Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Overlap begin function for forcer collider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGraviLift, "OnForcerOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(GraviLift_eventOnForcerOverlapBegin_Parms), Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics
	{
		struct GraviLift_eventOnForcerOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GraviLift_eventOnForcerOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Overlap end function for forcer collider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGraviLift, "OnForcerOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GraviLift_eventOnForcerOverlapEnd_Parms), Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGraviLift_NoRegister()
	{
		return AGraviLift::StaticClass();
	}
	struct Z_Construct_UClass_AGraviLift_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcerCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcerCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGraviLift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeusGames_First,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGraviLift_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGraviLift_ApplyForcer, "ApplyForcer" }, // 2886082949
		{ &Z_Construct_UFunction_AGraviLift_OnForcerOverlapBegin, "OnForcerOverlapBegin" }, // 2625174453
		{ &Z_Construct_UFunction_AGraviLift_OnForcerOverlapEnd, "OnForcerOverlapEnd" }, // 2050086416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraviLift_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GraviLift.h" },
		{ "ModuleRelativePath", "GraviLift.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects_MetaData[] = {
		{ "Category", "GraviLift Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Array containing all actors' components in area of effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "AffectedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000020009, 1, nullptr, STRUCT_OFFSET(AGraviLift, AffectedObjects), METADATA_PARAMS(Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AffectedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00000000000a0008, 1, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraviLift_Statics::NewProp_ForceValue_MetaData[] = {
		{ "Category", "GraviLift Settings" },
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Force added to objects." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGraviLift_Statics::NewProp_ForceValue = { UE4CodeGen_Private::EPropertyClass::Float, "ForceValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGraviLift, ForceValue), METADATA_PARAMS(Z_Construct_UClass_AGraviLift_Statics::NewProp_ForceValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::NewProp_ForceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraviLift_Statics::NewProp_ForcerCollider_MetaData[] = {
		{ "Category", "GraviLift Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Forcer collision component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGraviLift_Statics::NewProp_ForcerCollider = { UE4CodeGen_Private::EPropertyClass::Object, "ForcerCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AGraviLift, ForcerCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGraviLift_Statics::NewProp_ForcerCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::NewProp_ForcerCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraviLift_Statics::NewProp_MainMesh_MetaData[] = {
		{ "Category", "GraviLift Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GraviLift.h" },
		{ "ToolTip", "Main mesh component acting as root component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGraviLift_Statics::NewProp_MainMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MainMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AGraviLift, MainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGraviLift_Statics::NewProp_MainMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::NewProp_MainMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGraviLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraviLift_Statics::NewProp_AffectedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraviLift_Statics::NewProp_ForceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraviLift_Statics::NewProp_ForcerCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraviLift_Statics::NewProp_MainMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGraviLift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGraviLift>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGraviLift_Statics::ClassParams = {
		&AGraviLift::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGraviLift_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGraviLift_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGraviLift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGraviLift()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGraviLift_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGraviLift, 2981876717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGraviLift(Z_Construct_UClass_AGraviLift, &AGraviLift::StaticClass, TEXT("/Script/DeusGames_First"), TEXT("AGraviLift"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGraviLift);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
