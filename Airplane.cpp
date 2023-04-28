#include"Airplane.h"
    Airplane::Airplane()
    {
        this->weight=0;
        this->fuel=100;
        this->numberOfFlights=0;
        this->numPassengers=0;
    };                       
    Airplane::Airplane(int w, int p)
    {
        this->weight=w;
        this->fuel=100;
        this->numberOfFlights=0;
        this->numPassengers=p;
    };         

    void Airplane::reducePassengers(int x)
    {
        numPassengers=numPassengers-x;
        if(numPassengers<0)
        {
            numPassengers=0;
        }
    };     
    int Airplane::get_numPassengers()
    {
        return numPassengers;
    };
    void Airplane::fly(int headwind, int minutes)
    {
        float fuel_con=0;
        if(headwind>=60)
        {
            fuel_con=fuel_con+(0.5*minutes);
        }
        if(headwind<60)
        {
            fuel_con=fuel_con+(0.3*minutes);
        }

        fuel_con=fuel_con+(0.001*numPassengers*minutes);

        if(fuel-fuel_con>20)
        {
            fuel=fuel-fuel_con;
            this->numberOfFlights=numberOfFlights+1;             
        }
    };
    Airplane::~Airplane()
    {

    };   