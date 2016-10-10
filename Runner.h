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

  double Runner:: getRunnerAttack(){

        return attack;

  }

  double Runner:: getRunnerHealth(){

        return health;

  }

  void Runner:: setRunnerHealth(double attack){

        health = health-attack;

  }

#endif	/* RUNNER_H */

