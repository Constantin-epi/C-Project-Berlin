// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class RACING_API AMyPawn : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    AMyPawn();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* InInputComponent) override;

    UPROPERTY()
        class UParticleSystemComponent* OurParticleSystem;

    UPROPERTY()
        class UCollidingPawnMovementComponent* OurMovementComponent;

        USceneComponent* OurVisibleComponent;

        virtual UPawnMovementComponent* GetMovementComponent() const override;

    void MoveForward(float AxisValue);
    void MoveBoost(float AxisValue);
    void MoveRight(float AxisValue);
    void Turn(float AxisValue);
    void ParticleToggle();
};