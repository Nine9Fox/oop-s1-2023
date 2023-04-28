#ifndef HELICOPTER_H
#define HELICOPTER_H
#include"AirCraft.h"

class Helicopter:public AirCraft
{
private:
    string name;  
public:

    Helicopter(int w, string n);
    virtual void fly(int headwind, int minutes);
    ~Helicopter();
};
#endif