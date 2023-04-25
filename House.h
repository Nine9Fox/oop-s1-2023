#ifndef HOUSE_H
#define HOUSE_H
#include<iostream>
#include"Appliance.h"
using namespace std;

class House
{
private:
    Appliance** appliances;
    int numAppliances;
public:

    House();
    House(int numAppliances); 
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption(); 
    ~House();
};

#endif