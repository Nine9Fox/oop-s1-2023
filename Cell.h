#ifndef CELL_H
#define CELL_H
#include<iostream>
#include<tuple>
using namespace std;

class Cell
{
protected:
    std::tuple<int, int> position;
    char type;
public:
    Cell()
    {
        get<0>(position)=-1;
        get<1>(position)=-1;
        this->type='N';
    }

    Cell(int x,int y,char type)
    {
        get<0>(position)=x;
        get<1>(position)=y;
        this->type=type;
    }

    std::tuple<int, int> getPos()
    {
        return position;
    }

    char getType()
    {
        return type;
    }

    void setPos(int x, int y)
    {
        get<0>(position)=x;
        get<1>(position)=y;
    }

    void setType(char type)
    {
        this->type=type;
    }
};

#endif