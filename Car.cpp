#include"Car.h"

int Car::getParkingDuration()
{
    time_t timeE=getEntryTime();
    time_t timeOut;
    time(&timeOut);
    int duration=difftime(timeOut,timeE);
    duration = duration*0.9;
    return duration;
};
Car::~Car()
{

};
