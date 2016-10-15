#ifndef TANK_H
#define TANK_H


class ISurvivor;

class Tank{

private:
        int health; //variable to hold health
        int at; //variable to store attack strength

public:
        Tank(){health = 150; at = 20;} //Constructor to initialize a common infected
        int getHealth(){return health;} //Accessor to return the health
        void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
        int getAttack() {return at;}

         virtual void attack(ISurvivor * Survivor){
                Survivor -> decreaseHealth(getAttack());
        }

};

 /*  public:
     Tank();
     ~Tank();
 
     double getHealth();
     double getAttack();
     void setHealth(double newHp);

   private:
     double health;
     double attack;
 };

  Tank :: Tank(){

	health=150;
	attack=20;
  }

  double Tank:: getAttack(){

	return attack;

  }

  double Tank:: getHealth(){

	return health;

  }

  void Tank:: setHealth(double attack){

	health = health-attack;

  }
*/

#endif
