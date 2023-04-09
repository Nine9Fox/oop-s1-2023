#include"Motorbike.h"

int Motorbike::getParkingDuration()
{
    time_t timeE=getEntryTime();
    time_t timeOut;
    time(&timeOut);
    int duration=difftime(timeOut,timeE);
    duration = duration*0.85;
    return duration;
};
Motorbike::~Motorbike()
{

};
