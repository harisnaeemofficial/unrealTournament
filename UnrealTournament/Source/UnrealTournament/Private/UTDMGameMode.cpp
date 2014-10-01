// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "UnrealTournament.h"
#include "UTHUD_DM.h"
#include "UTDMGameMode.h"


AUTDMGameMode::AUTDMGameMode(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{
	HUDClass = AUTHUD_DM::StaticClass();
	FriendlyGameName = TEXT("Deathmatch");
}
