#ifndef CHARACTER_H
#define CHARACTER_H
#include"Cell.h"

class Character:public Cell
{
public:
    Character(int x,int y)
    {
        type='C';
        get<0>(position)=x;
        get<1>(position)=y;
    }

    virtual void move(int dx,int dy)
    {
        get<0>(position)=get<0>(position)+dx;
        get<1>(position)=get<1>(position)+dy;
    }

    ~Character()
    {
        
    }
};

#endif