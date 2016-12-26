// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjetoPacMan.h"
#include "t.h"


// Sets default values
At::At()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void At::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void At::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void At::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

