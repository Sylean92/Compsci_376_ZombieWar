/* 
 * File:   Runner.h
 * Author: Collin S.
 *
 * Created on October 10, 2016, 5:47 PM
 */

#ifndef RUNNER_H
#define	RUNNER_H
#include "ISurvivor.h"
#include "IZombie.h"

 class ISurvivor;

class Runner {
 
	private:
		int health;
		int at;
	public:

        Runner(){health = 5; at = 8;} //Constructor to initialize a runner zombie
        int getHealth(){return health;} //Accessor to return the health
        void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
        int getAttack(){return at;} //Accessor to return the attack strength


        virtual void attack(IZombie * zombie){
                zombie -> decreaseHealth(getAttack());
        }

};

#endif	/* RUNNER_H */
