// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UTCTFFlagBase.h"
#include "UTCTFGameState.generated.h"

UCLASS()
class AUTCTFGameState: public AUTGameState
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintReadOnly,Replicated,Category = CTF)
	uint32 bOldSchool : 1;
	
	UPROPERTY(BlueprintReadOnly,Replicated,Category = CTF)
	uint32 bSecondHalf : 1;

	UPROPERTY(BlueprintReadOnly,Replicated,Category = CTF)
	uint32 bHalftime : 1;

	UPROPERTY(BlueprintReadOnly,Replicated,Category = CTF)
	uint8 MaxNumberOfTeams;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = CTF)
	TArray<AUTCTFFlagBase*> FlagBases;

	/** Sets the # of teams.  This will also Pre-seed FlagsBases */
	virtual void SetMaxNumberOfTeams(int TeamCount);

	/** Cache a flag by in the FlagBases array */
	virtual void CacheFlagBase(AUTCTFFlagBase* BaseToCache);

	/** Returns the current state of a given flag */
	virtual FName GetFlagState(uint8 TeamNum);

	virtual AUTPlayerState* GetFlagHolder(uint8 TeamNum);
	virtual void ResetFlags();

	/** Find the current team that is in the lead */
	virtual AUTTeamInfo* FindLeadingTeam();

};