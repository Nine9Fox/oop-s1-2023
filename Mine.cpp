#include"Mine.h"

Mine::Mine(int x,int y)
{
    get<0>(position)=x;
    get<1>(position)=y;
    type='M';
};

Mine::~Mine()
{

};

Explosion Mine::explode()
{
    this->type='X';
    Explosion a(get<0>(position),get<1>(position));
    return a;
};