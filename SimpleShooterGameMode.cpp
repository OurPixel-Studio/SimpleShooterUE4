// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleShooterGameMode.h"
#include "SimpleShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleShooterGameMode::ASimpleShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ASimpleShooterGameMode::PawnKilled(APawn* PawnKilled)
{
}
