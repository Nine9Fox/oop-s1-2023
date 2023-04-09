#include"Vehicle.h"

Vehicle::Vehicle()
{

};
Vehicle::Vehicle(int ID)
{
    time(&timeofEntry);
    this->ID=ID;
};
int Vehicle::getID()
{
    return ID;
};
void Vehicle::setID(int ID)
{
    this->ID=ID;
};
time_t Vehicle::getEntryTime()
{
    return timeofEntry;
};
int Vehicle::getParkingDuration()
{
    return 0;
};
Vehicle::~Vehicle()
{

};

