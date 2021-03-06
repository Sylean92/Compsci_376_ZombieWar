/* 
 * File:   CharacterFactory.cpp
 * Author: thaoc
 * 
 * Created on May 21, 2015, 1:31 PM
 */

// CREATED BY ALYSSA COOKE

#include "CharacterFactory.h"
//Listed is other inclded files for this document
#include "Child.h"
#include "Teacher.h"
#include "Soldier.h"
#include "Common.h"
#include "Tank.h"
#include "Baby.h"
#include "Runner.h"
#include <string>

using namespace std;

//listed are initalizing the names
const string CharacterFactory::tank = "Tank";//tank = CharacterFactory name
const string CharacterFactory::common = "InfectedCommon";//common = CharacterFactory name
const string CharacterFactory::baby = "Baby with Bazooka";//Baby With Bazooka = CharacterFactory name
const string CharacterFactory::child = "Child";//child = CharacterFactory name
const string CharacterFactory::teacher = "Teacher";//teacher = CharacterFactory name
const string CharacterFactory::soldier = "Soldier";//soldier = CharacterFactory name
const string CharacterFactory::runner = "Runner";//runner = CharacterFactory name

CharacterFactory::CharacterFactory() {
}

CharacterFactory::CharacterFactory(const CharacterFactory& orig) {
}

CharacterFactory::~CharacterFactory() {
    i = new CharacterFactory();
}

ICharacter* CharacterFactory::makeCharacter(string type){

    //make a character based on type
    //e.g. if type is "common infected", make CommonInfect
    

	//listed are the creation of each character
	if(type ==soldier) return (ICharacter *) new Soldier(); //Soldier function from Soldier.h
	if(type ==teacher) return (ICharacter *) new Teacher();//Teacher function from Teacher.h
        if(type ==baby) return (ICharacter *) new Baby();//Teacher function from Teacher.h
	if(type ==child) return (ICharacter *) new Child();//child function from Child.h
	if(type ==tank) return (ICharacter *) new Tank();//Tank function from Tank.h
	if(type==common) return (ICharacter *) new Common();//Common function from common.h
	if(type==runner) return (ICharacter *) new Runner();//Runner function from Runner.h

    return NULL;
}

CharacterFactory * CharacterFactory::i = 0;

CharacterFactory* CharacterFactory::instance(){
   // if (!CharacterFactory::i) CharacterFactory::i = new CharacterFactory();
    if (!i) i = new CharacterFactory();
	return i;
//	return CharacterFactory::i;
}
