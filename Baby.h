#ifndef BABY_H
#define BABY_H
 class Baby {
   public:
     Baby();
     ~Baby();

     double getBabyHealth();
     double getBabyAttack();
     void setBabyHealth(double newHp);

   private:
     double health;
     double attack;
 };

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


#endif
