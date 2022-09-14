// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"

#include "Components/Interfaces/ControllerComponentInterface.h"


// Sets default values
ABasePlayerController::ABasePlayerController()
{
	
}

void ABasePlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	TArray<UActorComponent*> ControllerComponents = GetComponentsByInterface(UControllerComponentInterface::StaticClass());
	if(!ControllerComponents.IsEmpty())
	{
		for (auto& Component : ControllerComponents)
		{
			IControllerComponentInterface::Execute_IOnPossesPawn(Component, aPawn);
		}
	}
}

void ABasePlayerController::OnUnPossess()
{
	Super::OnUnPossess();
	TArray<UActorComponent*> ControllerComponents = GetComponentsByInterface(UControllerComponentInterface::StaticClass());
	if(!ControllerComponents.IsEmpty())
	{
		for (auto& Component : ControllerComponents)
		{
			IControllerComponentInterface::Execute_IOnUnPossesPawn(Component);
		}
	}
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}
