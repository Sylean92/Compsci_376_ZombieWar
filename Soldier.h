#pragma once
class Soldier {
  public:
    Soldier();
    Soldier(double hp, double atk);
    ~Soldier();

    double getHealth();
    double getAttack();
    void setHealth(double newHp);
    void setAttack(double newAtk);
  private:
    double health;
    double attack;
};
