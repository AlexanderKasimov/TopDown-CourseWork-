// Fill out your copyright notice in the Description page of Project Settings.

#include "APEXTEST2.h"
#include "BaseCharacter.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}
void ABaseCharacter::PowerUp(int type)
{
	if (type == 0) {
		BaseHealthType1 += BaseHealthType1 / 100;
	}
	if (type == 1) {	
		BaseArmorType1 += BaseArmorType1 / 100;
	}
	if (type == 2) {
		BaseHealthType2 += BaseHealthType2 / 100;
		BaseArmorType2 += BaseArmorType2/ 100;		
	}
	if (type == 3) {
		Speed += Speed / 200;
		Damage += Damage / 100;
	}

}

void ABaseCharacter::CalculateHealth(float delta)
{
	if (Armor < 0) Armor = 0;
	if (Armor != 0) {
		if (Armor >= delta) {
			Health -= (delta*delta)/Armor;
			if ((Armor -= (delta*delta) / Armor) >= 0)
				Armor -= (delta*delta) / Armor;
			else Armor = 0;
		}
		else {
			Health +=delta-Armor/delta;
			if ((Armor += delta - Armor / delta) >= 0)
				Armor += delta- Armor / delta;
			else Armor = 0;
		}
	}
	else
	Health += delta;
	CalculateDead();
}
void ABaseCharacter::CalculateDead()
{
	if (Health <= 0)
		isDead = true;
	else
		isDead = false;
}

#if WITH_EDITOR
void ABaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	isDead = false;
	Health = 100;
	Armor = 10;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}
#endif