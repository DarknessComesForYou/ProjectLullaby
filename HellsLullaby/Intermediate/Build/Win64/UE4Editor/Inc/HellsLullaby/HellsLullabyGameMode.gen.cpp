// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellsLullaby/HellsLullabyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellsLullabyGameMode() {}
// Cross Module References
	HELLSLULLABY_API UClass* Z_Construct_UClass_AHellsLullabyGameMode_NoRegister();
	HELLSLULLABY_API UClass* Z_Construct_UClass_AHellsLullabyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HellsLullaby();
// End Cross Module References
	void AHellsLullabyGameMode::StaticRegisterNativesAHellsLullabyGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHellsLullabyGameMode_NoRegister()
	{
		return AHellsLullabyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHellsLullabyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHellsLullabyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HellsLullaby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHellsLullabyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HellsLullabyGameMode.h" },
		{ "ModuleRelativePath", "HellsLullabyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHellsLullabyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHellsLullabyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHellsLullabyGameMode_Statics::ClassParams = {
		&AHellsLullabyGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHellsLullabyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHellsLullabyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHellsLullabyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHellsLullabyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHellsLullabyGameMode, 1603412357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHellsLullabyGameMode(Z_Construct_UClass_AHellsLullabyGameMode, &AHellsLullabyGameMode::StaticClass, TEXT("/Script/HellsLullaby"), TEXT("AHellsLullabyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHellsLullabyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
