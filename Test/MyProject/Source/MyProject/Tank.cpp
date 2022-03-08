// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"

ATank::ATank()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	/* setting up the base stats for the scout class on game start*/
	stats.health = 100;
	stats.attack = 20;
	stats.defense = 5;
	stats.magic_attack = 5;
	stats.magic_def = 5;
	/* how many tiles the unit can move on top of random #*/
	stats.speed = 3;
	/* xp required for next level*/
	stats.xp = 0;
	/* how many tiles the unit can see (fog of war)*/
	stats.visibilty = 6;
	/* how many tiles from current pos can the unit attack from*/
	stats.range = 1;
	/* how many action points the player has*/
	stats.actionPoints = 2;
}


void ATank::BeginPlay()
{
	Super::BeginPlay();
}

/* sets the health of the player */
void ATank::setHealth(int dmgTaken) {
	stats.health = stats.health - dmgTaken;
}

/* gets the health of the player*/
int ATank::getHealth() {
	return stats.health;
}


void ATank::setAP(int ap) {
	stats.actionPoints = stats.actionPoints - ap;
}

/* gets the health of the player*/
int ATank::getAP() {
	return stats.actionPoints;
}
