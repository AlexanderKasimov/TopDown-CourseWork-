// Fill out your copyright notice in the Description page of Project Settings.

#include "APEXTEST2.h"
#include "EnemySpawnerClass.h"


// Sets default values
AEnemySpawnerClass::AEnemySpawnerClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawnerClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemySpawnerClass::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

