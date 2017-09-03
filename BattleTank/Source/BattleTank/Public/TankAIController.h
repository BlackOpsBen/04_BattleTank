// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" //Default
#include "Tank.h"
#include "AIController.h" //Default
#include "TankAIController.generated.h" //Default

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;

protected:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
