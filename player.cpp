#include<iostream>
#include"player.h"
using namespace std;

Player::Player()
{
}
Player::Player(string name,int health,int damage)
{
    this->name=name;
    this->health=health;
    this->damage=damage; 
};

void Player::attack(Player* opponent,int damage)
{
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
};

void Player:: takeDamage(int damage)
{
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
};

int Player::getHealth()
{
    return health;
};
void Player::setHealth(int health)
{
    this->health=health;
};

string Player::getName()
{
    return name;
};
int Player::getDamage()
{
    return damage;
};
Player::~Player(){};