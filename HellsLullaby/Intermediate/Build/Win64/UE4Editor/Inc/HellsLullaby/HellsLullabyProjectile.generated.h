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
struct FVector;
struct FHitResult;
#ifdef HELLSLULLABY_HellsLullabyProjectile_generated_h
#error "HellsLullabyProjectile.generated.h already included, missing '#pragma once' in HellsLullabyProjectile.h"
#endif
#define HELLSLULLABY_HellsLullabyProjectile_generated_h

#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHellsLullabyProjectile(); \
	friend struct Z_Construct_UClass_AHellsLullabyProjectile_Statics; \
public: \
	DECLARE_CLASS(AHellsLullabyProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HellsLullaby"), NO_API) \
	DECLARE_SERIALIZER(AHellsLullabyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHellsLullabyProjectile(); \
	friend struct Z_Construct_UClass_AHellsLullabyProjectile_Statics; \
public: \
	DECLARE_CLASS(AHellsLullabyProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HellsLullaby"), NO_API) \
	DECLARE_SERIALIZER(AHellsLullabyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHellsLullabyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHellsLullabyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHellsLullabyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHellsLullabyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHellsLullabyProjectile(AHellsLullabyProjectile&&); \
	NO_API AHellsLullabyProjectile(const AHellsLullabyProjectile&); \
public:


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHellsLullabyProjectile(AHellsLullabyProjectile&&); \
	NO_API AHellsLullabyProjectile(const AHellsLullabyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHellsLullabyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHellsLullabyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHellsLullabyProjectile)


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHellsLullabyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHellsLullabyProjectile, ProjectileMovement); }


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_9_PROLOG
#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_RPC_WRAPPERS \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_INCLASS \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_INCLASS_NO_PURE_DECLS \
	HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HellsLullaby_Source_HellsLullaby_HellsLullabyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
