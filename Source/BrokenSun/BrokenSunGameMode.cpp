// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrokenSunGameMode.h"
#include "BrokenSunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABrokenSunGameMode::ABrokenSunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
