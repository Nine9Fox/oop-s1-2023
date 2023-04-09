#include"Bus.h"

int Bus::getParkingDuration()
{
    time_t timeE=getEntryTime();
    time_t timeOut;
    time(&timeOut);
    int duration=difftime(timeOut,timeE);
    duration = duration*0.75;
    return duration;
};
Bus::~Bus()
{

};
