// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DataDrivenComponentInterface.generated.h"

class UDataContainerComponent;

// This class does not need to be modified.
UINTERFACE()
class UDataDrivenComponentInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVENPLUGIN_API IDataDrivenComponentInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	void IRegisterDataContainerComponent(UDataContainerComponent* NewDataContainerComponent);
};
