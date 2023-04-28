#ifndef AIRFLEET_H
#define AIRFLEET_H
#include"AirCraft.h"
#include"Airplane.h"
#include"Helicopter.h"

class AirFleet
{
    
public:
    Airplane a;       
    Helicopter b; 
    AirCraft c;
    Helicopter d;
    Airplane e;
    AirCraft **fleet=new AirCraft*[5];

    AirFleet();                         
    AirCraft **get_fleet();  
    ~AirFleet(); 

};


#endif