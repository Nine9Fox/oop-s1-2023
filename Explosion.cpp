#include"Explosion.h"

Explosion::Explosion(int x,int y)
{
    get<0>(position)=x;
    get<1>(position)=y;
    type='E';
};
Explosion::~Explosion()
{

};
void Explosion::apply(GameEntity& entity)
{
    get<0>(entity.position)=-1;
    get<1>(entity.position)=-1;
    entity.type='X';
};