// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuldingEscape2018GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuldingEscape2018GameModeBase() {}
// Cross Module References
	BULDINGESCAPE2018_API UClass* Z_Construct_UClass_ABuldingEscape2018GameModeBase_NoRegister();
	BULDINGESCAPE2018_API UClass* Z_Construct_UClass_ABuldingEscape2018GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuldingEscape2018();
// End Cross Module References
	void ABuldingEscape2018GameModeBase::StaticRegisterNativesABuldingEscape2018GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuldingEscape2018GameModeBase_NoRegister()
	{
		return ABuldingEscape2018GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuldingEscape2018GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BuldingEscape2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BuldingEscape2018GameModeBase.h" },
				{ "ModuleRelativePath", "BuldingEscape2018GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABuldingEscape2018GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABuldingEscape2018GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ABuldingEscape2018GameModeBase, 3348111340);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuldingEscape2018GameModeBase(Z_Construct_UClass_ABuldingEscape2018GameModeBase, &ABuldingEscape2018GameModeBase::StaticClass, TEXT("/Script/BuldingEscape2018"), TEXT("ABuldingEscape2018GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuldingEscape2018GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
