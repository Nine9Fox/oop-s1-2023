#ifndef AIRPLANE_H
#define AIRPLANE_H
#include"AirCraft.h"

class Airplane:public AirCraft
{
private:
    int numPassengers; 
public:
    Airplane();                       
    Airplane(int w, int p);         

    void reducePassengers(int x);     
    int get_numPassengers();
    virtual void fly(int headwind, int minutes);
    ~Airplane();      

};

#endif