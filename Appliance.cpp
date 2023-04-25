#include"Appliance.h"


Appliance::Appliance()
{
    this->isOn=false;
    this->powerRating=0;
};
Appliance::Appliance(int powerRating)
{
    this->isOn=false;
    this->powerRating=powerRating;
};
void Appliance::turnOn()
{
    this->isOn=true;
};
void Appliance::turnOff()
{
    this->isOn=false;
};
double Appliance::getPowerConsumption()
{
    return 0;
};
void Appliance::set_powerRating(int a)
{
    this->powerRating=a;
};
int Appliance::get_powerRating()
{
    return powerRating;
};
void Appliance::set_isOn(bool a)
{
    this->isOn=a;
};
bool Appliance::get_isOn()
{
    return isOn;
};
Appliance::~Appliance()
{

};

