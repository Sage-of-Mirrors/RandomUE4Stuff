// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimEntry() {}
// Cross Module References
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
// End Cross Module References
	static UEnum* ChaoPose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RandomUE4Stuff_ChaoPose, Z_Construct_UPackage__Script_RandomUE4Stuff(), TEXT("ChaoPose"));
		}
		return Singleton;
	}
	template<> RANDOMUE4STUFF_API UEnum* StaticEnum<ChaoPose>()
	{
		return ChaoPose_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ChaoPose(ChaoPose_StaticEnum, TEXT("/Script/RandomUE4Stuff"), TEXT("ChaoPose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RandomUE4Stuff_ChaoPose_Hash() { return 2556325300U; }
	UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RandomUE4Stuff();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ChaoPose"), 0, Get_Z_Construct_UEnum_RandomUE4Stuff_ChaoPose_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ChaoPose::STANDING", (int64)ChaoPose::STANDING },
				{ "ChaoPose::SITTING", (int64)ChaoPose::SITTING },
				{ "ChaoPose::LAYING_ON_BACK", (int64)ChaoPose::LAYING_ON_BACK },
				{ "ChaoPose::LAYING_ON_FRONT", (int64)ChaoPose::LAYING_ON_FRONT },
				{ "ChaoPose::IN_AIR", (int64)ChaoPose::IN_AIR },
				{ "ChaoPose::HOPPING", (int64)ChaoPose::HOPPING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HOPPING.Name", "ChaoPose::HOPPING" },
				{ "IN_AIR.Name", "ChaoPose::IN_AIR" },
				{ "LAYING_ON_BACK.Name", "ChaoPose::LAYING_ON_BACK" },
				{ "LAYING_ON_FRONT.Name", "ChaoPose::LAYING_ON_FRONT" },
				{ "ModuleRelativePath", "ChaoAnimEntry.h" },
				{ "SITTING.Name", "ChaoPose::SITTING" },
				{ "STANDING.Name", "ChaoPose::STANDING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
				nullptr,
				"ChaoPose",
				"ChaoPose",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
