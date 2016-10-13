#ifndef SOLDIER_H
#define SOILDER_H
class Soldier {
  public:
    Soldier(){health = 100; attack = 10;}
    Soldier(int hp, int atk);
    ~Soldier();

    int getHealth(){return health;}
    int getAttack(){return attack;}
    void updateHealth(int damage){health -= damage;}
  private:
    int health;
    int attack;
};

#endif
