// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptExplorerGameMode.h"
#include "CryptExplorerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACryptExplorerGameMode::ACryptExplorerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
