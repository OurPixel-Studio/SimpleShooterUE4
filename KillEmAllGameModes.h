// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleShooterGameMode.h"
#include "KillEmAllGameModes.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AKillEmAllGameModes : public ASimpleShooterGameMode
{
	GENERATED_BODY()

	public:
	virtual void PawnKilled(APawn* PawnKilled);

	private:
	void EndGame(bool bIsPlayerWinner);
	
};
