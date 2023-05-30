#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include<iostream>
#include<tuple>
using namespace std;

class Explosion;

class GameEntity
{
public:
    std::tuple<int,int> position;
    char type;
    GameEntity();
    GameEntity(int x,int y,char type);
    ~GameEntity();

    virtual void move(int dx, int dy);
    virtual Explosion explode();
    std::tuple<int,int> getPos();
    char getType();
};

#endif
