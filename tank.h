#ifndef TANK_H
#define TANK_H
 class Tank {
   public:
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

	return Health;

  }

  void Tank:: setHealth(double attack){

	health = health-attack;

  }


#endif