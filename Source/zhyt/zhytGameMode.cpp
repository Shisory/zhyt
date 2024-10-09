// Copyright Epic Games, Inc. All Rights Reserved.

#include "zhytGameMode.h"
#include "zhytCharacter.h"
#include "UObject/ConstructorHelpers.h"

AzhytGameMode::AzhytGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
