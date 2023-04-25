#ifndef APPLIANCE_H
#define APPLIANCE_H
#include<iostream>
using namespace std;

class Appliance
{
public:
    int powerRating;
    bool isOn;
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    void set_powerRating(int a);
    int get_powerRating();
    void set_isOn(bool a);
    bool get_isOn();
    virtual double getPowerConsumption();
    ~Appliance();

};

#endif