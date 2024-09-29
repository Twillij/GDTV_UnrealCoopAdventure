// Copyright Epic Games, Inc. All Rights Reserved.

#include "GdtvCoopAdventureGameMode.h"
#include "GdtvCoopAdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGdtvCoopAdventureGameMode::AGdtvCoopAdventureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
