// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterUEGameModeBase.h"
#include "PlayerCharacter.h"

AShooterUEGameModeBase::AShooterUEGameModeBase()
{
	DefaultPawnClass = APlayerCharacter::StaticClass();
}
