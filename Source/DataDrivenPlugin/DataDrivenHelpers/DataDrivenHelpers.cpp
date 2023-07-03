// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenHelpers.h"
#include "DataDrivenPlugin/DataContainer/DataPiece.h"
#include "DataDrivenPlugin/DataContainer/DataContainerComponent.h"

UActorComponent* UDataDrivenHelpers::GetValidatedComponentByClass(AActor* Target,
                                                                  TSubclassOf<UActorComponent> ComponentClass, TEnumAsByte<EValidationPin>& ExecOutput)
{
	if (!IsValid(Target))
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	UActorComponent* Component = Target->FindComponentByClass(ComponentClass);
	ExecOutput = IsValid(Component) ? EValidationPin::Valid : EValidationPin::Invalid;
	return Component;
}

UInterface* UDataDrivenHelpers::GetValidatedComponentByInterface(AActor* Target,
	TSubclassOf<UInterface> InterfaceClass, TEnumAsByte<EValidationPin>& ExecOutput)
{
	if (!IsValid(Target))
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	TArray<UActorComponent*> ValidComponents = Target->GetComponentsByInterface(InterfaceClass);
	if (ValidComponents.IsEmpty())
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	ExecOutput = EValidationPin::Valid;
	return Cast<UInterface>(ValidComponents.Top());
}

UObject* UDataDrivenHelpers::GetValidatedDataPiece(UDataContainerComponent* Target, TSubclassOf<UDataPiece> DataPieceClass,
                                                   TEnumAsByte<EValidationPin>& ExecOutput)
{
	if (!IsValid(Target))
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	UObject* DataPiece = Target->GetDataPiece(DataPieceClass);
	ExecOutput = IsValid(DataPiece) ? EValidationPin::Valid : EValidationPin::Invalid;
	return DataPiece;
}
