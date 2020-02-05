// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMUE4STUFF_ChaoAnimEntry_generated_h
#error "ChaoAnimEntry.generated.h already included, missing '#pragma once' in ChaoAnimEntry.h"
#endif
#define RANDOMUE4STUFF_ChaoAnimEntry_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimEntry_h


#define FOREACH_ENUM_CHAOPOSE(op) \
	op(ChaoPose::STANDING) \
	op(ChaoPose::SITTING) \
	op(ChaoPose::LAYING_ON_BACK) \
	op(ChaoPose::LAYING_ON_FRONT) \
	op(ChaoPose::IN_AIR) \
	op(ChaoPose::HOPPING) 

enum class ChaoPose : uint8;
template<> RANDOMUE4STUFF_API UEnum* StaticEnum<ChaoPose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
