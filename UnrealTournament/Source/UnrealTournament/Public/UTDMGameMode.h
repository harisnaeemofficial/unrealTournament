// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "UTDMGameMode.generated.h"

UCLASS()
class UNREALTOURNAMENT_API AUTDMGameMode : public AUTGameMode
{
	GENERATED_UCLASS_BODY()

	/** Flag whether "X kills remain" has been played yet */
	UPROPERTY()
	uint32 bPlayedTenKillsRemain:1;

	UPROPERTY()
	uint32 bPlayedFiveKillsRemain:1;

	UPROPERTY()
	uint32 bPlayedOneKillRemains:1;

	virtual uint8 GetNumMatchesFor(AUTPlayerState* PS, bool bRankedSession) const override;
	virtual int32 GetEloFor(AUTPlayerState* PS, bool bRankedSession) const override;
	virtual void SetEloFor(AUTPlayerState* PS, bool bRankedSession, int32 NewELoValue, bool bIncrementMatchCount) override;

protected:
	virtual void UpdateSkillRating() override;
	virtual void PrepareRankedMatchResultGameCustom(FRankedMatchResult& MatchResult) override;
};



