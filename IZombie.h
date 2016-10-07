/* 
 * File:   IZombie.h
 * Author: thaoc
 *
 * Created on May 20, 2015, 8:05 PM
 */

#ifndef IZOMBIE_H
#define	IZOMBIE_H

#include "ICharacter.h"
#include "ISurvivor.h"

class ISurvivor;

class IZombie:ICharacter{
	private:
		static IZombie* zombie;
		static zombie;
    	public:
		IZombie();
		virtual ~IZombie();
    		virtual void attack(ISurvivor * survivor) = 0;
};



#endif	/* IZOMBIE_H */

