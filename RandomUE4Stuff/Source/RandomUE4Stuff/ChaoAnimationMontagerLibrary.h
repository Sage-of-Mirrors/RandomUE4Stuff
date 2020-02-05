// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Core.h"
#include "ChaoAnimationMontagerLibrary.generated.h"

struct ChaoAnimEntry;

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UChaoAnimationMontagerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Chao Animation Montager")
	static void GenerateMontages();

	static TArray<ChaoAnimEntry> GetIniList();
	static ChaoAnimEntry CreateEntry(FString* file, int32& index, int32 max);
};
