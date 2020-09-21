// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryMan.h"

// Sets default values
ABatteryMan::ABatteryMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

     //first initialization from \bueprint to the Batteryman camera viewpoint
     //this changes the viewpoint of the camera for the character
     //InitCapsuleSize determines orientation in radious then height
     GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

     //this next set of code prevents character from moving into rotatiing the camera instead.
     bUseControllerRotationPitch = false;
     bUseControllerRotationYaw = false;
     bUseControllerRotationRoll = false; 
        //pointer. this allow movement to the direction the character movement unattached to the camera. 
     GetCharacterMovement()->bOrientRotationToMovement = true;
     GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
     GetCharacterMovement()->JumpZVelocity = 600.0f;
     GetCharacterMovement()->AirControl = 0.2f;

     CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
     CameraBoom->SetupAttachment(RootComponent);

        //Camera length away from target
     CameraBoom->TargetArmLength = 300.0f;
     CameraBoom->bUsePawnControlRotation = true; 

     FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
     FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
     FollowCamera->bUsePawnControlRotation = false; 






}

// Called when the game starts or when spawned
void ABatteryMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatteryMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatteryMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

