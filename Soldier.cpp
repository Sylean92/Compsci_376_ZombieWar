#include "Soldier.h"

Soldier::Soldier() : health(100), attack(10)
{
}

Soldier::Soldier(int hp, int atk)  : health(hp), attack(atk)
{
}

Soldier::~Soldier() 
{
}

int Soldier::getHealth()
{
  return health;
}

int Soldier::getAttack()
{
  return attack;
}

void Soldier::setHealth(int newHp)
{
  health = newHp;
}

void Soldier::setAttack(int newAtk)
{
  attack = newAtk;
}
