#include "Soldier.h"

Soldier::Soldier() : health(100), attack(10)
{
}

Soldier::Soldier(double hp, double atk)  : health(hp), attack(atk)
{
}

Soldier::~Soldier() 
{
}

double Soldier::getHealth()
{
  return health;
}

double Soldier::getAttack()
{
  return attack;
}

void Soldier::setHealth(double newHp)
{
  health = newHp;
}

void Soldier::setAttack(double newAtk)
{
  attack = newAtk;
}
