// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/ControllerComponentInterface.h"
#include "DDControllerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UDDControllerComponent : public UActorComponent, public IControllerComponentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDDControllerComponent();

	virtual void IOnPossesPawn_Implementation(APawn* NewPawn) override;
	
	virtual void IOnUnPossesPawn_Implementation() override;

	UFUNCTION(BlueprintGetter)
	FORCEINLINE APawn* GetControlledPawn() const
	{
		return ControlledPawn;
	}

	UFUNCTION(BlueprintGetter)
	FORCEINLINE AController* GetOwnerController() const
	{
		if (ControlledPawn == nullptr)
		{
			return GetOwner<AController>();
		}
		return ControlledPawn->GetController();
	}
	
protected:
	UPROPERTY(BlueprintGetter=GetControlledPawn)
	TObjectPtr<APawn> ControlledPawn = nullptr;
};
