// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "WeaponClass.generated.h"

UCLASS(Blueprintable)
class APEXTEST2_API AWeaponClass : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
		int ClipSize = 60;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
		int All_Ammo = 760;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
		int Cur_Ammo_in_Clip = 60;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		virtual void CalculateAmmo(int delta);

public:	
	// Sets default values for this actor's properties
	AWeaponClass();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
