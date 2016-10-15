/*
	Teacher.h
	Written By: Lauren Shirley
	Date: 10/10/16
	Description:
*/

#ifndef TEACHER_H
#define TEACHER_H
#include "IZombie.h"
#include "ISurvivor.h"

class Teacher{

private:
	int health; //variable to hold health
	int at; //variable to store attack strength
	
public:
	Teacher(){health = 50; at = 5;} //Constructor to initialize a teacher
	int getHealth(){return health;} //Accessor to return the health
	void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
	int getAttack(){return at;} //Accessor to return the attack strength

        virtual void attack(IZombie * zombie){
                zombie -> decreaseHealth(getAttack());
        }
	
};

#endif
