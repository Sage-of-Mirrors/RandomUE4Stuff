// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimationMontagerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimationMontagerLibrary() {}
// Cross Module References
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary_NoRegister();
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages();
// End Cross Module References
	void UChaoAnimationMontagerLibrary::StaticRegisterNativesUChaoAnimationMontagerLibrary()
	{
		UClass* Class = UChaoAnimationMontagerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMontages", &UChaoAnimationMontagerLibrary::execGenerateMontages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chao Animation Montager" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GenerateMontages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary_NoRegister()
	{
		return UChaoAnimationMontagerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages, "GenerateMontages" }, // 1871963906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChaoAnimationMontagerLibrary.h" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaoAnimationMontagerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::ClassParams = {
		&UChaoAnimationMontagerLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaoAnimationMontagerLibrary, 1500766254);
	template<> RANDOMUE4STUFF_API UClass* StaticClass<UChaoAnimationMontagerLibrary>()
	{
		return UChaoAnimationMontagerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaoAnimationMontagerLibrary(Z_Construct_UClass_UChaoAnimationMontagerLibrary, &UChaoAnimationMontagerLibrary::StaticClass, TEXT("/Script/RandomUE4Stuff"), TEXT("UChaoAnimationMontagerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaoAnimationMontagerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
