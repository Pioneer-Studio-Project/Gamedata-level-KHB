// Copyright Epic Games, Inc. All Rights Reserved.

#include "clubGameMode.h"
#include "clubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AclubGameMode::AclubGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
