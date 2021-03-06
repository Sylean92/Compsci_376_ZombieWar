/* 
 * File:   CharacterFactory.h
 * Author: thaoc
 *
 * Created on May 21, 2015, 1:31 PM
 * 
 * A character factory for creating different characters.
 * The factory encapsulation the character implementations.
 * 
 */
// CREATED BY ALYSSA COOKE

#ifndef CHARACTERFACTORY_H
#define	CHARACTERFACTORY_H

#include <string>
#include "ICharacter.h"

using namespace std;

class CharacterFactory {
private:
    static CharacterFactory* i;
public:
    CharacterFactory();
    CharacterFactory(const CharacterFactory& orig);
    ICharacter* makeCharacter(std::string type);
    static CharacterFactory* instance();
    ~CharacterFactory();


	//listed below is all our characters we are going to use in the game
	static const string tank;
	static const string common;
	static const string soldier;
        //baby character added by andy
        static const string baby;
	static const string child;
	static const string teacher;
	static const string runner; 

};

#endif	/* CHARACTERFACTORY_H */
