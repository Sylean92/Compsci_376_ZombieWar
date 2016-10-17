/* 
 * File:   ZombieWar.cpp
 * Author: thaoc
 * 
 * Created on May 21, 2015, 1:54 PM
 */

/*
	MODIFIED BY ALYSSA COOKE
 */

#include <iostream>
#include "ZombieWar.h"
#include "CharacterFactory.h"

int globalRandomS = 0;

ZombieWar::ZombieWar()
{
}

ZombieWar::ZombieWar(const ZombieWar& orig)
{
}

ZombieWar::~ZombieWar()
{
}

//added random function generaters

int rGenerator(int min, int max)
{
	int total = rand() % (max - min + 1) + min;
	//cout <<"rGenerator:" << total <<endl;
	return total;
}

int ZombieWar::randomN(bool isZombie)
{
	//get values from 0 to 2
	cout << "isZombie:" << isZombie << endl;
	if (isZombie) {
		int value = rGenerator(0, 3);
		return value;
		// rand() % 3;

	}//get rest aside 0 to 2
	else {
		int value2 = rGenerator(3, 6);
		return value2;
		//	return  rand() % 10;

	}
}
/**
 * Generates a random number of zombies.
 * @return a pointer to an array of zombies
 */
int ZombieWar::nTank = 0;
int ZombieWar::nCommon = 0;
int ZombieWar::nRunner = 0;

IZombie * ZombieWar::randomZombies()
{

	//Alyssa Cooke created logic for randomZombies

	CharacterFactory *f = CharacterFactory::instance();

	//begin creating random characters
	//	int rand = this -> randomN(true); 
	//	cout <<endl <<"randomZombie:" << rand <<endl;
	cout << endl << "CREATED ZOMBIE" << endl;

	int rand = rGenerator(0, 2);
	//cout <<"randomZombies:"<<rand<<endl;

	//start if statements to create characters
	if (rand == 0) {
		//cout <<endl<<"Tank++ : " <<nTank;
		//call class ZombieWar and add to the number of Tank zombies
		nTank++;
		cout << endl << "TankTotal : " << nTank;

		//next return pointer f from CharacterFactory and make the tank character after adding to number of Tank zombies
		return(IZombie *) f -> makeCharacter(CharacterFactory::tank); //tank is from CharacterFactory
	}//if statement to get other Zombie type
	else if (rand == 1) {
		//call class ZombieWar and add to the number of Common zombies
		nCommon++;
		cout << endl << "CommonTotal : " << nCommon;

		//next return pointer f from CharacterFactory and make the common infected character after adding to number of Common Infected zombies
		return(IZombie *) f -> makeCharacter(CharacterFactory::common); //common is from CharacterFactory
	} else if (rand == 2) {
		//call class ZombieWar and add to the number of runner zombies
		nRunner++;
		cout << endl << "RunnerTotal : " << nRunner;

		//next return pointer f from CharacterFactory and make the runner infected character after adding to number of runner Infected zombies
		return(IZombie *) f -> makeCharacter(CharacterFactory::runner); //runner is from CharacterFactory
	}

	return 0;
}

/**
 * Generates a random set of survivors
 * @return a pointer to an array of survivors
 */
int ZombieWar::nBaby = 0;
int ZombieWar::nSoldier = 0;
int ZombieWar::nTeacher = 0;
int ZombieWar::nChild = 0;

ISurvivor * ZombieWar::randomSurvivors()
{

	//Alyssa Cooke did logic for randomSurvivors

	CharacterFactory *f = CharacterFactory::instance();

	//begin creating random characters
	//int rand = this -> randomN(false);
	//cout <<"randomSurv:"<<rand<<end;


	cout << endl << "CREATED SURVIVOR" << endl;

	int rand = rGenerator(2, 5);
	//cout <<"randomSurv:"<<rand<<endl;

	//start if statements to create characters
	if (rand == 5) {
		//add to number of Soldier survivors
		//ZombieWar::nBaby++;
		nBaby++;
		cout << endl << "BabyTotal : " << nBaby;

		//return point f to make a survivor soldier character
		return(ISurvivor *) f -> makeCharacter(CharacterFactory::baby); //soldier is from CharacterFactory
	}
	if (rand == 4) {
		//add to number of Soldier survivors
		//ZombieWar::nSoldier++;
		nSoldier++;
		cout << endl << "SoldierTotal : " << nSoldier;

		//return point f to make a survivor soldier character
		return(ISurvivor *) f -> makeCharacter(CharacterFactory::soldier); //soldier is from CharacterFactory
	} else if (rand == 3) {
		// add number to Teacher survivors
		//ZombieWar::nTeacher++;
		nTeacher++;
		cout << endl << "teacherTotal : " << nTeacher;

		//return point f to make a survivor teacher character
		return(ISurvivor *) f -> makeCharacter(CharacterFactory::teacher); //teacher is from CharacterFactory
	} else if (rand == 2) {
		// add number of Child survivors
		//ZombieWar::nChild++;
		nChild++;
		cout << endl << "ChildTotal : " << nChild;

		// return point to f to make a survivor child character
		return(ISurvivor *) f -> makeCharacter(CharacterFactory::child); //child is from CharacterFactory
	}
	return 0;
}

/**
 * Check if all characters in the array are all dead.
 * @param array the array of characters
 * @return true if none is alive.
 */
//bool ZombieWar::allDead(ICharacter * array){

bool ZombieWar::allDead(vector<ICharacter> chVector)
{
	for (int i = 0; i < chVector.size(); i++) {
		//if check vector shows the character in it is dead then return true
		if (chVector[i].isAlive()) return false;
	}
	return true;
}

void ZombieWar::start()
{

	//Alyssa Cooke: did logic for start function

	std::cout << "Welcome to ZombieWar" << std::endl;
	//    IZombie * zombies = this->randomZombies();
	//  ISurvivor * survivors = this->randomSurvivors();


	//for each survivor, make it attack each zombie in the zombies array
	//for each zombie, make it attack each survivor.
	//repeat this process until one side is all dead.
	//make sure dead character does not attack
	//print the number of survivors that are still alive.


	srand(time(0)); //start generator for random
	//create zombie and survivor vector
	vector<IZombie *> zVec; //zombie
	vector<ISurvivor *> sVec; //survivors

	//create random numbers
	int numSurvivors = rand() % 10;
	//cout <<"numSurv:"<<numSurvivors<<endl;
	int numZombies = rand() % 10;
	//cout<<"numZombies:"<<numZombies<<endl;
	//fill vectors with random numbers recently created

	for (int i = 0; i < numSurvivors; i++) {
		ISurvivor * s = this->randomSurvivors();
		//		cout<<"V:"<<s<<endl;	
		//cout <<i << endl;	
		sVec.push_back(s); //push back new survivor
		//cout <<"Vect:"<<n<<" ";
		//cout <<"pushed into randomSurvivors"<<endl;
		//cout <<endl<<sVec[i]<<endl;
		cout << endl;
	}
	/*
		cout <<endl;
		int num = numZombies;
		for(int i = 0; i < sVec.size(); i++){
			cout <<sVec[i]<<" ";
		}
	 */

	for (int j = 0; j < numZombies; j++);
	{

		IZombie * z = this->randomZombies();
		zVec.push_back(z); //push back new zombie
		//cout<<"zVect:"<<vi<<" ";
		//cout <<"pushed into randomZombies"<<endl;
		// cout <<endl<<zVec[i]<<endl;
		//		num = num -1;
		//		cout <<"num:"<<num<<endl;
		cout << endl;
	}

	cout << endl;

	int sWin = 0;

	/*
		//VERSION 1.0 first display
		cout <<"We have " << numSurvivors << " trying to make it to safety" <<endl;
		cout <<"But there are " << numZombies << " waiting for them." << endl;
	 */

	//VERSION 2.0 first display
	//display numbers of characters
	cout << "We have " << numSurvivors << " survivors trying to make it to safety (" << nBaby << " baby, " << nChild << " children , " << nTeacher << " teachers, and " << nSoldier << " soldiers)" << endl;
	cout << "But there are " << numZombies << " zombies waiting for them (" << nCommon << " common infected, " << nTank << " tanks, and " << nRunner << " runners) " << endl;


	while (true) {
		//int sWin = 0;

		//set a bool variable when everyone is dead
		bool DeadDone = true;
		cout << "DeadDone: " << DeadDone << endl;
		//prevent DeadDone from being true if all not true;
		for (int i = 0; i < sVec.size(); i++) {
			if (sVec[i] ->isAlive()) DeadDone = false; //make false if character in vector i is not Dead
		}
		//break while loop if DeadDone is true
		if (DeadDone) break;

		//prevent DeadDone from being true if all not true;
		for (int i = 0; i < zVec.size(); i++) {
			if (zVec[i] ->isAlive()) DeadDone = false; //make false if zombie in vector i is not Dead
		}
		//break while loop if DeadDone is true
		if (DeadDone) break;


		//MAIN LOGIC OF WHEN THEY FIGHT EACH OTHER

		// ************* SURVIVOR ***********************************************************
		for (int i = 0; i < numSurvivors; i++) {
			for (int j = 0; j < numZombies; j++) {
				//grab each survivor and zombie out of vecotrs and have them BATTLE!
				ISurvivor *surv = sVec[i];
				IZombie *zomb = zVec[j];

				//determine who lives/dies

				if (!surv -> isAlive()) continue; //continue the loop if the survivor is still alive after fighting
				if (!zomb -> isAlive()) continue; //continue the loop if the zombie was not killed by survivor
				surv -> attack(zomb); // attack zombie

				//if survivor won
				//VERSION 2.0 second display
				if (!zomb ->isAlive()) {
					cout << endl << surv->getName() << " " << i;
					cout << " killed " << zomb->getName() << " " << j;
				}
			}
		}
		// ***********************************************************************************

		// ************* ZOMBIES  ***********************************************************
		for (int i = 0; i < numZombies; i++) {
			for (int j = 0; j < numSurvivors; j++) {
				//grab each survivor and zombie out of vecotrs and have them BATTLE!
				ISurvivor *surv = sVec[j];
				IZombie *zomb = zVec[i];

				//determine who lives/dies

				if (!surv -> isAlive()) continue; //continue the loop if the survivor is alive after zombie attacked
				if (!zomb -> isAlive()) continue; //continue if zombie is alive after attacking
				zomb -> attack(surv); //attack survivor

				//if survivor won
				//VERSION 2.0 second display
				if (!surv ->isAlive()) {
					cout << endl << zomb->getName() << " " << i;
					cout << " killed " << surv->getName() << " " << j;
				}
			}

		}
		// ***********************************************************************************
	}//end while

	//total num survivors that lived
	for (int i = 0; i < numSurvivors; i++) {
		ISurvivor *sV = sVec[i];
		if (sV->isAlive()) sWin++;
	}

	//delete vects
	for (int i = 0; i < sVec.size(); i++) delete sVec[i];
	for (int i = 0; i < zVec.size(); i++) delete zVec[i];

	//FINAL WIN COUNT
	//VERSION 1.0 and 2.0 final display
	if (sWin == 0) cout << endl << "None of the survivors made it." << endl;
	else cout << endl << " It seems " << sWin << " survivors made it to safety." << endl;

	delete CharacterFactory::instance();
}//end start
