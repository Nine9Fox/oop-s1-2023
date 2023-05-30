#include"Ship.h"

Ship::Ship(int x,int y)
{
    get<0>(position)=x;
    get<1>(position)=y;
    type='S';
};

Ship::~Ship()
{

};

void Ship::move(int dx, int dy)
{
    get<0>(position)=get<0>(position)+dx;
    get<1>(position)=get<1>(position)+dy;
};

