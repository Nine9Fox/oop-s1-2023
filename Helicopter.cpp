#include"Helicopter.h"

    Helicopter::Helicopter(int w, string n)
    {
        this->weight=w;
        this->fuel=100;
        this->numberOfFlights=0;
        this->name=n;

    };
    void Helicopter::fly(int headwind, int minutes)
    {
        if(fuel>20)
        {
            if(headwind>=40)
            {
                fuel=fuel-(0.4*minutes);
            }
            if(headwind<40)
            {
                fuel=fuel-(0.2*minutes);
            }
            if(weight>5670)
            {
                fuel=fuel-(0.01*(weight-5670)*minutes);
            }
            this->numberOfFlights=numberOfFlights+1;   
        }
    };
    Helicopter::~Helicopter()
    {

    };