#ifndef SHIP_H
#define SHIP_H
#include<iostream>
#include<tuple>
#include"GameEntity.h"
#include"Effect.h"
#include"Explosion.h"
#include<cmath>
using namespace std;

class Ship:public GameEntity
{
public:
    Ship(int x,int y);
    ~Ship();
    virtual void move(int dx, int dy);
};

#endif