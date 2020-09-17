// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "hsilva_trialGameMode.h"
#include "hsilva_trialCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ahsilva_trialGameMode::Ahsilva_trialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
