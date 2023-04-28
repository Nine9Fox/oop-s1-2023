#include"AirCraft.h"
    AirCraft::AirCraft()
    {
        this->weight=0;
        this->fuel=1;
        this->numberOfFlights=0; 
    };
    AirCraft::AirCraft(int w)
    {
        this->weight=w;
        this->fuel=100;
        this->numberOfFlights=0;
    };             
    void AirCraft::refuel()
    {
        this->fuel=100;
    };    
    void AirCraft::fly(int headwind, int minutes)
    {

    };
    int AirCraft::get_weight()
    {
        return weight;
    };
    float AirCraft::get_fuel()
    {
        return fuel;
    };
    int AirCraft::get_numberOfFlights()
    {
        return numberOfFlights;
    };
    void AirCraft::set_weight(int w)
    {
        weight=w;
    };
    void AirCraft::set_fuel(float f)
    {
        fuel=f;
    };
    void AirCraft::set_numberOfFlights(int n)
    {
        numberOfFlights=n;
    };
    AirCraft::~AirCraft()
    {
        
    };