#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ChaoPose : uint8 {
	STANDING,
	SITTING,
	LAYING_ON_BACK,
	LAYING_ON_FRONT,
	IN_AIR,
	HOPPING
};

struct ChaoAnimEntry {
	int32 ID = 0;
	int32 TransitionID = -1;
	int32 StartFrame = 0;
	int32 EndFrame = 0;
	float PlaySpeed = 1.0f;
	ChaoPose Pose = ChaoPose::STANDING;
};