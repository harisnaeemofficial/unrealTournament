// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"


class FAnimGraphModule : public IModuleInterface
{
public:
	/** IModuleInterface interface */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
