#ifndef TRAP_H
#define TRAP_H
#include"Cell.h"
#include"Effect.h"

class Trap:public Cell,public Effect
{
protected:
    bool active;
public:
    bool isActive()
    {
        return active;
    }

    Trap(int x,int y)
    {
        this->type='T';
        active=true;
        get<0>(position)=x;
        get<1>(position)=y;
    }

    virtual void apply(Cell& cell)
    {
        cell.setType('T');
        this->active=false;
    }

};

#endif