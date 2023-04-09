#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"

class Car:public Vehicle
{
private:
public:
    using Vehicle::Vehicle;
    virtual int getParkingDuration();
    ~Car();
};

#endif