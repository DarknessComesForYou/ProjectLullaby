// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellsLullaby/HellsLullabyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellsLullabyHUD() {}
// Cross Module References
	HELLSLULLABY_API UClass* Z_Construct_UClass_AHellsLullabyHUD_NoRegister();
	HELLSLULLABY_API UClass* Z_Construct_UClass_AHellsLullabyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HellsLullaby();
// End Cross Module References
	void AHellsLullabyHUD::StaticRegisterNativesAHellsLullabyHUD()
	{
	}
	UClass* Z_Construct_UClass_AHellsLullabyHUD_NoRegister()
	{
		return AHellsLullabyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHellsLullabyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHellsLullabyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HellsLullaby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHellsLullabyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HellsLullabyHUD.h" },
		{ "ModuleRelativePath", "HellsLullabyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHellsLullabyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHellsLullabyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHellsLullabyHUD_Statics::ClassParams = {
		&AHellsLullabyHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHellsLullabyHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHellsLullabyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHellsLullabyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHellsLullabyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHellsLullabyHUD, 4038266456);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHellsLullabyHUD(Z_Construct_UClass_AHellsLullabyHUD, &AHellsLullabyHUD::StaticClass, TEXT("/Script/HellsLullaby"), TEXT("AHellsLullabyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHellsLullabyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
