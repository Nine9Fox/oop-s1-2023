#ifndef BUS_H
#define BUS_H
#include"Vehicle.h"

class Bus:public Vehicle
{
private:
public:
    using Vehicle::Vehicle;
    virtual int getParkingDuration();
    ~Bus();
};

#endif