// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "UTHUD_DM.h"
#include "UTHUD_TeamDM.generated.h"

UCLASS()
class AUTHUD_TeamDM : public AUTHUD_DM
{
	GENERATED_UCLASS_BODY()

public:
	virtual FLinearColor GetBaseHUDColor();

};