// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyNPC.h"

// Sets default values
AEnemyNPC::AEnemyNPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

