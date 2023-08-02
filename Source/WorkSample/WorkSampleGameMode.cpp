// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorkSampleGameMode.h"
#include "WorkSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorkSampleGameMode::AWorkSampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
