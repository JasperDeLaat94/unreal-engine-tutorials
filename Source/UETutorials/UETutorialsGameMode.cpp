// Copyright Jasper de Laat. Licensed under GPL-3.0

#include "UETutorialsGameMode.h"
#include "UETutorialsHUD.h"
#include "UETutorialsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUETutorialsGameMode::AUETutorialsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUETutorialsHUD::StaticClass();
}
