#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include"player.h"
using namespace std;

class Player
{
public:
    std::string name;
    int health;  
    int damage;
    Player();
    Player(string name,int health,int damage);
    void attack(Player* opponent,int damage);
    void takeDamage(int damage);
    int getHealth();
    string getName();
    int getDamage();
    void setHealth(int health);
    ~Player();
};

#endif