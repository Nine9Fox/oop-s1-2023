#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include"Vehicle.h"

class Motorbike:public Vehicle
{
private:
public:
    using Vehicle::Vehicle;
    virtual int getParkingDuration();
    ~Motorbike();
};

#endif