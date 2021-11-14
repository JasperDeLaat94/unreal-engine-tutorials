// Copyright Jasper de Laat. Licensed under GPL-3.0

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UETutorialsHUD.generated.h"

UCLASS()
class AUETutorialsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUETutorialsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

