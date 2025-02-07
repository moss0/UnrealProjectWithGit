// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealProjectWithGitGameMode.h"
#include "UnrealProjectWithGitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealProjectWithGitGameMode::AUnrealProjectWithGitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
