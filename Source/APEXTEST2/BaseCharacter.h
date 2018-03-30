// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class APEXTEST2_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Health = 100;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Armor = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Speed = 550;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float BaseHealthType1 = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float BaseHealthType2 = 150;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float BaseArmorType1 = 200;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float BaseArmorType2 = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Damage = -30;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
		bool isDead = false;

	virtual void CalculateDead();
	
	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float delta);
	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void PowerUp(int type);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif



	// Sets default values for this character's properties
	ABaseCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
