#ifndef SOLDIER_H
#define SOILDER_H

class IZombie;

class Soldier{

private:
        int health; //variable to hold health
        int at; //variable to store attack strength

public:
        Soldier(){health = 100; at = 10;} //Constructor to initialize a child
        int getHealth(){return health;} //Accessor to return the health
        void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
        int getAttack(){return at;} //Accessor to return the attack strength


        virtual void attack(IZombie * zombie){
                zombie -> decreaseHealth(getAttack());
        }

};

#endif


