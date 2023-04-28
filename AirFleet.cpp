#include"AirFleet.h"


    AirFleet::AirFleet()
    {
        a=Airplane(20, 10);
        b=Helicopter(10000, "BlackHawk"); 
        c=AirCraft(5000);
        d=Helicopter(100, "WhiteHawk"); 
        e=Airplane(15, 20);
        fleet[0]=&a;
        fleet[1]=&b;
        fleet[2]=&c;
        fleet[3]=&d;
        fleet[4]=&e;
    };                         
    AirCraft **AirFleet::get_fleet()
    {
        return fleet;
    };  
    AirFleet::~AirFleet()
    {

    };