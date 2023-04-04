#include<iostream>
#include"player.h"
#include"warrior.h"
using namespace std;

void Warrior::swingWeapon(Player* opponent)
{
    int heal=opponent->getHealth();
    heal -= damage;
    opponent->setHealth(heal);
    attack(opponent,damage);
    //takeDamage(opponent->damage);
};
Warrior::Warrior(string name,int health,int damage,string weapon)
{
    this->name=name;
    this->health=health;
    this->damage=damage;   
    this->weapon=weapon;
};

void Warrior::attack(Player* opponent,int damage)
{
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
};
Warrior::~Warrior(){};