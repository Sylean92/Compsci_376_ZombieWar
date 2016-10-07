/*
	Teacher.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef TEACHER_H
#define TEACHER_H

class Teacher{

private:
	int health; //variable to hold health
	int attack; //variable to store attack strength
	
public:
	Teacher(){health = 50; attack = 5;} //Constructor to initialize a teacher
	int getHealth(){return health;} //Accessor to return the health
	void updateHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack(){return attack;} //Accessor to return the attack strength
	
};

#endif
