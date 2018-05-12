// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LesserKeyOfSamuelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLesserKeyOfSamuelGameMode() {}
// Cross Module References
	LESSERKEYOFSAMUEL_API UClass* Z_Construct_UClass_ALesserKeyOfSamuelGameMode_NoRegister();
	LESSERKEYOFSAMUEL_API UClass* Z_Construct_UClass_ALesserKeyOfSamuelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LesserKeyOfSamuel();
// End Cross Module References
	void ALesserKeyOfSamuelGameMode::StaticRegisterNativesALesserKeyOfSamuelGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALesserKeyOfSamuelGameMode_NoRegister()
	{
		return ALesserKeyOfSamuelGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ALesserKeyOfSamuelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_LesserKeyOfSamuel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "LesserKeyOfSamuelGameMode.h" },
				{ "ModuleRelativePath", "LesserKeyOfSamuelGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALesserKeyOfSamuelGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALesserKeyOfSamuelGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALesserKeyOfSamuelGameMode, 3137845347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALesserKeyOfSamuelGameMode(Z_Construct_UClass_ALesserKeyOfSamuelGameMode, &ALesserKeyOfSamuelGameMode::StaticClass, TEXT("/Script/LesserKeyOfSamuel"), TEXT("ALesserKeyOfSamuelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALesserKeyOfSamuelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
