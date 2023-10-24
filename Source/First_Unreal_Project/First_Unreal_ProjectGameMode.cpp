// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_Unreal_ProjectGameMode.h"
#include "First_Unreal_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_Unreal_ProjectGameMode::AFirst_Unreal_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
