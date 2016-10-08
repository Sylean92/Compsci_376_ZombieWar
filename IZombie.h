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
#include <string>

using namespace std;

class ISurvivor;

class IZombie:public ICharacter{
//	private:
	//	static IZombie* zombie;
	//	static zombie;
    	public:
//		IZombie();
//		virtual ~IZombie();
    		virtual void attack(ISurvivor * survivor) = 0;
		virtual string getName(); //function added by Lauren
};



#endif	/* IZOMBIE_H */

