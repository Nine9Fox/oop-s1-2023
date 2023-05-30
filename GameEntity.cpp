#include"GameEntity.h"
#include"Explosion.h"

GameEntity::GameEntity()
{

};

GameEntity::GameEntity(int x,int y,char type)
{
    get<0>(position)=x;
    get<1>(position)=y;
    this->type=type;
};

GameEntity::~GameEntity()
{

};

std::tuple<int,int> GameEntity::getPos()
{
    return position;
};

char GameEntity::getType()
{
    return type;
};

void GameEntity::move(int dx, int dy)
{
    cout<<"GMm"<<endl;
};

Explosion GameEntity::explode()
{
    cout<<"GMe"<<endl;
    Explosion a(-1,-1);
    return  a;
};
