// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Object.h"
#include "UTGhostData.generated.h"


/**
 * 
 */
UCLASS(CustomConstructor, Blueprintable)
class UNREALTOURNAMENT_API UUTGhostData : public UObject
{
	GENERATED_UCLASS_BODY()

	UUTGhostData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ghost)
	TArray<class UUTGhostEvent*> Events;
};
