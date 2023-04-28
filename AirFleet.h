#ifndef AIRFLEET_H
#define AIRFLEET_H
#include"AirCraft.h"
#include"Airplane.h"
#include"Helicopter.h"

class AirFleet
{
private:
    
public:
    AirCraft **fleet;
    
    AirFleet();                         
    AirCraft **get_fleet();  
    ~AirFleet(); 

};


#endif