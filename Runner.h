/* 
 * File:   Runner.h
 * Author: Collin S.
 *
 * Created on October 10, 2016, 5:47 PM
 */

#ifndef RUNNER_H
#define	RUNNER_H

 class Runner {
   public:
     Runner();
     ~Runner();

     double getRunnerHealth();
     double getRunnerAttack();
     void setRunnerHealth(double newHp);

   private:
     double health;
     double attack;
 };

  Runner :: Runner(){

        health=5;
        attack=30;
  }

  double Baby:: getRunnerAttack(){

        return attack;

  }

  double Baby:: getRunnerHealth(){

        return health;

  }

  void Baby:: setRunnerHealth(double attack){

        health = health-attack;

  }

#endif	/* RUNNER_H */

