#pragma once
class Soldier {
  public:
    Soldier();
    Soldier(int hp, int atk);
    ~Soldier();

    int getHealth();
    int getAttack();
    void setHealth(int newHp);
    void setAttack(int newAtk);
  private:
    int health;
    int attack;
};
