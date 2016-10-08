/* 
 * File:   ISurvival.h
 * Author: thaoc
 *
 * Created on May 20, 2015, 8:08 PM
 */

#ifndef ISURVIVAL_H
#define	ISURVIVAL_H

#include "ICharacter.h"
#include "IZombie.h"
//#include "Child.h"
//#include "Teacher.h"
//#include "Soldier.h"
#include <string>

using namespace std;

class IZombie;

class ISurvivor:public ICharacter{
public:
    virtual void attack(IZombie* zombie) = 0;
    virtual string getName(); //function added by Lauren 
};

#endif	/* ISURVIVAL_H */
