// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEUSGAMES_FIRST_ZeroGravityEmuBase_generated_h
#error "ZeroGravityEmuBase.generated.h already included, missing '#pragma once' in ZeroGravityEmuBase.h"
#endif
#define DEUSGAMES_FIRST_ZeroGravityEmuBase_generated_h

#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAccelOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAccelOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAccelOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAccelOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyAcceleration(); \
		P_NATIVE_END; \
	}


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAccelOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAccelOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAccelOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAccelOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyAcceleration(); \
		P_NATIVE_END; \
	}


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZeroGravityEmuBase(); \
	friend struct Z_Construct_UClass_AZeroGravityEmuBase_Statics; \
public: \
	DECLARE_CLASS(AZeroGravityEmuBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeusGames_First"), NO_API) \
	DECLARE_SERIALIZER(AZeroGravityEmuBase)


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAZeroGravityEmuBase(); \
	friend struct Z_Construct_UClass_AZeroGravityEmuBase_Statics; \
public: \
	DECLARE_CLASS(AZeroGravityEmuBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeusGames_First"), NO_API) \
	DECLARE_SERIALIZER(AZeroGravityEmuBase)


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZeroGravityEmuBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZeroGravityEmuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZeroGravityEmuBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZeroGravityEmuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZeroGravityEmuBase(AZeroGravityEmuBase&&); \
	NO_API AZeroGravityEmuBase(const AZeroGravityEmuBase&); \
public:


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZeroGravityEmuBase(AZeroGravityEmuBase&&); \
	NO_API AZeroGravityEmuBase(const AZeroGravityEmuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZeroGravityEmuBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZeroGravityEmuBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZeroGravityEmuBase)


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_PRIVATE_PROPERTY_OFFSET
#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_13_PROLOG
#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_RPC_WRAPPERS \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_INCLASS \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_INCLASS_NO_PURE_DECLS \
	DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeusGames_First_Source_DeusGames_First_ZeroGravityEmuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
