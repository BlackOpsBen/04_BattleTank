// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" //Default
#include "Tank.h"
#include "GameFramework/PlayerController.h" //Default
#include "TankPlayerController.generated.h" //Default

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) override;

	void BeginPlay() override;

	ATank* GetControlledTank() const;

private:
	// Start moving the barrel so that the shot would hit where the crosshair hits the world.
	void AimTowardsCrosshair();

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
};
