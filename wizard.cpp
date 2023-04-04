#include<iostream>
#include"player.h"
#include"wizard.h"
using namespace std;

Wizard::Wizard(string name,int health,int damage,int mana)
{
    this->name=name;
    this->health=health;
    this->damage=damage;   
    this->mana=mana;
};

void Wizard::castSpell(Player* opponent)
{
    int heal=opponent->getHealth();
    heal -= damage;
    opponent->setHealth(heal);
    attack(opponent,damage);
    //takeDamage(opponent->damage);
};

Wizard::~Wizard()
{

};