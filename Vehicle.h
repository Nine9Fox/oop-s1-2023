#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include<time.h>
using namespace std;
class Vehicle
{
private:
       
    int ID;
public:
time_t timeofEntry; 
    Vehicle();
    Vehicle(int ID);
    virtual int getParkingDuration();
    int getID();
    void setID(int ID);
    time_t getEntryTime();
    ~Vehicle();
};

#endif