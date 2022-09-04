// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpleShooterGameMode.generated.h"

UCLASS(minimalapi)
class ASimpleShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASimpleShooterGameMode();
	virtual void PawnKilled(APawn* PawnKilled);
};



