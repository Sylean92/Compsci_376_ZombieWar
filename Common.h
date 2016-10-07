/*
	Common.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef COMMON_H
#define COMMON_H

class Common{

private:
	int health; //variable to hold health
	const int attack; //variable to store attack strength
	
public:
	Common(){health = 30; attack = 5;} //Constructor to initialize a common infected
	int getHealth(){return health;} //Accessor to return the health
	void updateHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack(){return attack;} //Accessor to return the attack strength
	
};

#endif
