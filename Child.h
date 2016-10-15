/*
	Child.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef CHILD_H
#define CHILD_H
#include "IZombie.h"
#include "ISurvivor.h"

class IZombie;

class Child{

private:
	int health; //variable to hold health
	int at; //variable to store attack strength
	
public:
	Child(){health = 20; at = 2;} //Constructor to initialize a child
	int getHealth(){return health;} //Accessor to return the health
	void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack(){return at;} //Accessor to return the attack strength


	virtual void attack(IZombie * zombie){
		zombie -> decreaseHealth(getAttack());
	}

};

#endif
