#ifndef WARRIOR_H
#define WARRIOR_H
#include<iostream>
#include"player.h"
using namespace std;

class Warrior:public Player
{
private:
    std::string weapon;
public:
    
    void swingWeapon(Player* opponent);
    Warrior(string name,int health,int damage,string weapon);
    void attack(Player* opponent,int damage);
    ~Warrior();
};


#endif