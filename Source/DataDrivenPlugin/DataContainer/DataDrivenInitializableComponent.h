// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataContainerComponent.h"
#include "Components/ActorComponent.h"
#include "DataDrivenPlugin/Initialization/InitializableInterface.h"
#include "DataDrivenInitializableComponent.generated.h"

class UDataContainerComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UDataDrivenInitializableComponent : public UActorComponent, public IInitializableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDataDrivenInitializableComponent();

	virtual void IFinishInitialization_Implementation() override;
	
protected:

	template<class T>
	T* FindDataPiece()
	{
		if (!IsValid(DataContainerComponent))
		{
			DataContainerComponent = GetOwner()->FindComponentByClass<UDataContainerComponent>();
		}
		ensure(IsValid(DataContainerComponent));
		return DataContainerComponent->GetDataPiece<T>();	
	}
	
	UPROPERTY()
	UDataContainerComponent* DataContainerComponent = nullptr;
	
};
