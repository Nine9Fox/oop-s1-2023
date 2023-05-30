#ifndef MINE_H
#define MINE_H
#include<iostream>
#include<tuple>
#include"GameEntity.h"
#include"Effect.h"
#include<cmath>
#include"Explosion.h"
using namespace std;

class Mine:public GameEntity
{
public:
    Mine(int x,int y);
    ~Mine();
    virtual Explosion explode();
};

#endif