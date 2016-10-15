/*
	Common.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef COMMON_H
#define COMMON_H
#include "ISurvivor.h"
#include "IZombie.h"

class ISurvivor;

class Common{

private:
	int health; //variable to hold health
	int at; //variable to store attack strength
	
public:
	Common(){health = 30; at = 5;} //Constructor to initialize a common infected
	int getHealth(){return health;} //Accessor to return the health
	void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack() {return at;}

	 virtual void attack(ISurvivor * Survivor){
                Survivor -> decreaseHealth(getAttack());
        }

};

#endif

