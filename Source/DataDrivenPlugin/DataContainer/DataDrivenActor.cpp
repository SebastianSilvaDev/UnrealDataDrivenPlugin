// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenActor.h"

#include "DataDrivenComponentInterface.h"
#include "DataDrivenPlugin/Initialization/InitializableInterface.h"
#include "DataDrivenPlugin/DataDrivenHelpers/DataDrivenHelpers.h"


// Sets default values
ADataDrivenActor::ADataDrivenActor()
{
	DataContainerComponent = CreateDefaultSubobject<UDataContainerComponent>("DataContainerComponent");
}

void ADataDrivenActor::BeginPlay()
{
	Super::BeginPlay();
	DataContainerComponent->RegisterDataContainer(DataContainer);
	INITIALIZE_COMPONENTS(DataContainerComponent)
}

void ADataDrivenActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	REGISTER_DATA_CONTAINER()
}
