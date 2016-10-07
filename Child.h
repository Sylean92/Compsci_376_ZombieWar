/*
	Child.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef CHILD_H
#define CHILD_H

class Child{

private:
	int health; //variable to hold health
	int attack; //variable to store attack strength
	
public:
	Child(){health = 20; attack = 2;} //Constructor to initialize a child
	int getHealth(){return health;} //Accessor to return the health
	void updateHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack(){return attack;} //Accessor to return the attack strength
	
};

#endif
