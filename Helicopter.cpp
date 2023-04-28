#include"Helicopter.h"

    Helicopter::Helicopter()
    {
        this->weight=0;
        this->fuel=100;
        this->numberOfFlights=0;
        this->name="";

    };
    Helicopter::Helicopter(int w, string n)
    {
        this->weight=w;
        this->fuel=100;
        this->numberOfFlights=0;
        this->name=n;

    };
    void Helicopter::fly(int headwind, int minutes)
    {
        float fuel_con=0;
        if(headwind>=40)
        {
            fuel_con=fuel_con+(0.4*minutes);
        }
        if(headwind<40)
        {
            fuel_con=fuel_con+(0.2*minutes);
        }
        if(weight>5670)
        {
            fuel_con=fuel_con+(0.01*(weight-5670)*minutes);
        }
        if(fuel-fuel_con>20)
        {
            fuel=fuel-fuel_con;
            this->numberOfFlights=numberOfFlights+1;             
        }
    };
    string Helicopter::get_name()
    {
        return name;
    };
    Helicopter::~Helicopter()
    {

    };