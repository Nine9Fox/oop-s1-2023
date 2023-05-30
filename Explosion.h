#ifndef EXPLOSION_H
#define EXPLOSION_H
#include<iostream>
#include<tuple>
#include"GameEntity.h"
#include"Effect.h"
#include<cmath>
using namespace std;

class Explosion:public GameEntity,public Effect
{
public:
    Explosion(int x,int y);
    ~Explosion();
    virtual void apply(GameEntity& entity);
};

#endif