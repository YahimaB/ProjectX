// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeusGames_First/ZeroGravityEmuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZeroGravityEmuBase() {}
// Cross Module References
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AZeroGravityEmuBase_NoRegister();
	DEUSGAMES_FIRST_API UClass* Z_Construct_UClass_AZeroGravityEmuBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeusGames_First();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEUSGAMES_FIRST_API UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZeroGravityEmuBase::StaticRegisterNativesAZeroGravityEmuBase()
	{
		UClass* Class = AZeroGravityEmuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAcceleration", &AZeroGravityEmuBase::execApplyAcceleration },
			{ "OnAccelOverlapBegin", &AZeroGravityEmuBase::execOnAccelOverlapBegin },
			{ "OnAccelOverlapEnd", &AZeroGravityEmuBase::execOnAccelOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Called every tick to add acceleration to affected actores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZeroGravityEmuBase, "ApplyAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics
	{
		struct ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms), &Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Overlap begin function for accel collider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZeroGravityEmuBase, "OnAccelOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(ZeroGravityEmuBase_eventOnAccelOverlapBegin_Parms), Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics
	{
		struct ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Overlap end function for accel collider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZeroGravityEmuBase, "OnAccelOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ZeroGravityEmuBase_eventOnAccelOverlapEnd_Parms), Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZeroGravityEmuBase_NoRegister()
	{
		return AZeroGravityEmuBase::StaticClass();
	}
	struct Z_Construct_UClass_AZeroGravityEmuBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZeroGravityEmuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeusGames_First,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZeroGravityEmuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZeroGravityEmuBase_ApplyAcceleration, "ApplyAcceleration" }, // 214938443
		{ &Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapBegin, "OnAccelOverlapBegin" }, // 2387637684
		{ &Z_Construct_UFunction_AZeroGravityEmuBase_OnAccelOverlapEnd, "OnAccelOverlapEnd" }, // 2472845402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZeroGravityEmuBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZeroGravityEmuBase.h" },
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects_MetaData[] = {
		{ "Category", "ZeroGravityEmu Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Array containing all actors' components in area of effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "AffectedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000020009, 1, nullptr, STRUCT_OFFSET(AZeroGravityEmuBase, AffectedObjects), METADATA_PARAMS(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AffectedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00000000000a0008, 1, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelerationValue_MetaData[] = {
		{ "Category", "ZeroGravityEmu Settings" },
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Acceleration added to objects." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelerationValue = { UE4CodeGen_Private::EPropertyClass::Float, "AccelerationValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AZeroGravityEmuBase, AccelerationValue), METADATA_PARAMS(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelerationValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelerationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelCollider_MetaData[] = {
		{ "Category", "ZeroGravityEmu Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Accel collision component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelCollider = { UE4CodeGen_Private::EPropertyClass::Object, "AccelCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AZeroGravityEmuBase, AccelCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_MainMesh_MetaData[] = {
		{ "Category", "ZeroGravityEmu Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZeroGravityEmuBase.h" },
		{ "ToolTip", "Main mesh component acting as root component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_MainMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MainMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AZeroGravityEmuBase, MainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_MainMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_MainMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZeroGravityEmuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AffectedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelerationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_AccelCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZeroGravityEmuBase_Statics::NewProp_MainMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZeroGravityEmuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZeroGravityEmuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZeroGravityEmuBase_Statics::ClassParams = {
		&AZeroGravityEmuBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AZeroGravityEmuBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AZeroGravityEmuBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZeroGravityEmuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZeroGravityEmuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZeroGravityEmuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZeroGravityEmuBase, 3752542161);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZeroGravityEmuBase(Z_Construct_UClass_AZeroGravityEmuBase, &AZeroGravityEmuBase::StaticClass, TEXT("/Script/DeusGames_First"), TEXT("AZeroGravityEmuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZeroGravityEmuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
