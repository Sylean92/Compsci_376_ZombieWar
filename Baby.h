#ifndef BABY_H
#define BABY_H
 

class IZombie;

class Baby {
  // public:
//     Baby();
//     ~Baby();

//     double getBabyHealth();
 //    double getBabyAttack();
 //    void setBabyHealth(double newHp);

//   private:
 //    double health;
 //    double attack;

/*
  Baby :: Baby(){

        health=150;
        attack=20;
  }

  double Baby:: getBabyAttack(){

        return attack;

  }

  double Baby:: getBabyHealth(){

        return health;

  }

  void Baby:: setBabyHealth(double attack){

        health = health-attack;

  }
*/
	private:
		int health;
		int at;
	public:

        Baby(){health = 20; at = 2;} //Constructor to initialize a child
        int getHealth(){return health;} //Accessor to return the health
        void decreaseHealth(int damage){health -= damage;} //Mutator to update health when attacked
        int getAttack(){return at;} //Accessor to return the attack strength


        virtual void attack(IZombie * zombie){
                zombie -> decreaseHealth(getAttack());
        }

};


#endif
