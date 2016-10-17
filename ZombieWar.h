/* 
 * File:   ZombieWar.h
 * Author: thaoc
 *
 * Created on May 21, 2015, 1:54 PM
 */

/*
	CREATED BY ALYSSA COOKE
*/

#ifndef ZOMBIEWAR_H
#define	ZOMBIEWAR_H

#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"
#include "CharacterFactory.h"
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class ZombieWar {
private:
    IZombie * randomZombies();
    ISurvivor * randomSurvivors();
    bool allDead(ICharacter * array);

	//added conditions
	int randomN(bool isZombie);
	bool allDead(vector<ICharacter> chVector);
	static int nSoldier;
	static int nTeacher;
	static int nChild;
	static int nCommon;
	static int nTank;
	static int nBaby;
	static int nRunner;

public:
    ZombieWar();
    ZombieWar(const ZombieWar& orig);
    virtual ~ZombieWar();
    void start();
private:

};

#endif	/* ZOMBIEWAR_H */
