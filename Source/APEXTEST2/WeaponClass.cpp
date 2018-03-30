// Fill out your copyright notice in the Description page of Project Settings.

#include "APEXTEST2.h"
#include "WeaponClass.h"


// Sets default values
AWeaponClass::AWeaponClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeaponClass::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeaponClass::CalculateAmmo(int delta) {
	if (Cur_Ammo_in_Clip - delta == 0) {
		if (All_Ammo - ClipSize >= 0) {
			Cur_Ammo_in_Clip = ClipSize;
			All_Ammo -= ClipSize;
		}
		else {
			Cur_Ammo_in_Clip = All_Ammo;
			All_Ammo = 0;
		}
	}
	else Cur_Ammo_in_Clip -= delta;
}

// Called every frame
void AWeaponClass::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

