#include"TV.h"

TV::TV()
{
    this->isOn=false;
    this->powerRating=0;
    this->screenSize=0;
};
TV::TV(int powerRating, double screenSize)
{
    this->isOn=false;
    this->powerRating=powerRating;
    this->screenSize=screenSize;
};
void TV::setScreenSize(double screenSize)
{
    this->screenSize=screenSize;
};
double TV::getScreenSize()
{
    return screenSize;
};
double TV::getPowerConsumption()
{
    double power_consumption = powerRating * (screenSize / 10);
    return power_consumption;
};
TV::~TV()
{

};


