// Fill out your copyright notice in the Description page of Project Settings.

#include "ChaoAnimationMontagerLibrary.h"
#include "ChaoAnimEntry.h"
#include "RandomUE4Stuff.h"
#include <EngineUtils.h>

void UChaoAnimationMontagerLibrary::GenerateMontages() {
	TArray<ChaoAnimEntry> ini_entries = GetIniList();

	TArray<UObject*> assets;
	EngineUtils::FindOrLoadAssetsByPath(TEXT("/Game/ThirdPersonBP/Chao/Model/Animation"), assets, EngineUtils::EAssetToLoad::ATL_Regular);
	UObject** aaa = assets.GetData();

	UE_LOG(LogTemp, Warning, TEXT("%s"), *aaa[0]->GetFName().ToString());
}

TArray<ChaoAnimEntry> UChaoAnimationMontagerLibrary::GetIniList() {
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString ini_path = FString(TEXT("D:\\Github\\RandomUE4Stuff\\RandomUE4Stuff\\Content\\ThirdPersonBP\\Chao\\Model\\Animation\\info.ini"));

	int64 FileSize = PlatformFile.FileSize(*ini_path);
	UE_LOG(LogTemp, Warning, TEXT("Filesize: %d"), FileSize);

	TArray<FString> lines;
	FFileHelper::LoadFileToStringArray(lines, *ini_path);
	FString* test = lines.GetData();

	int32 index = 0;
	int32 max_lines = lines.Num();
	TArray<ChaoAnimEntry> anim_entries;

	for (int i = 0; i < 622; i++) {
		anim_entries.Add(CreateEntry(test, index, max_lines));
	}

	UE_LOG(LogTemp, Warning, TEXT("Done. Results: %i"), anim_entries.Num());

	return anim_entries;
}

ChaoAnimEntry UChaoAnimationMontagerLibrary::CreateEntry(FString* file, int32& index, int32 max) {
	FString id_str = file[index++];
	FString line = file[index];
	ChaoAnimEntry entry;

	while (!line.StartsWith("[")) {
		FString cur_attribute = file[index];
		UE_LOG(LogTemp, Warning, TEXT("%s"), *cur_attribute);

		TArray<FString> buf;
		cur_attribute.ParseIntoArray(buf, TEXT("="));
		FString* dat = buf.GetData();

		if (dat[0] == "TransitionID") {
			entry.TransitionID = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "StartFrame") {
			entry.StartFrame = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "EndFrame") {
			entry.EndFrame = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "PlaySpeed") {
			entry.PlaySpeed = FCString::Atof(*dat[1]);
			UE_LOG(LogTemp, Warning, TEXT("%f"), entry.PlaySpeed);
		}
		else if (dat[0] == "Pose") {
			entry.Pose = (ChaoPose)FCString::Atoi(*dat[1]);
		}

		if (index + 1 < max) {
			line = file[++index];
		}
		else {
			break;
		}
	}

	return entry;
}