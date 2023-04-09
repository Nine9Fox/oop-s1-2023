#include "ParkingLot.h"

ParkingLot::ParkingLot(int max_cap)
{
    count=0;
    this->max_cap=max_cap;
    vehicles=new Vehicle*[max_cap];
    for(int i=0;i<max_cap;i++)
    {
        vehicles[i]=nullptr;
    }

};
ParkingLot::ParkingLot()
{

};
int ParkingLot::getCount()
{
    return count;
};
void ParkingLot::parkVehicle(Vehicle* Vehicle)
{
    if(count<max_cap)
    {
        for(int i=0;i<max_cap;i++)
        {
            if(vehicles[i]==nullptr)
            {
                vehicles[i]=Vehicle;
                count++;
                return;            
            }
        }
    }
    if(count>=max_cap)
    {
        cout<<"The lot is full"<<endl;
    }
};
void ParkingLot::unparkVehicle(int ID)
{
    for(int i=0;i<max_cap;i++)
    {
        if(vehicles[i]!=nullptr)
        {
            if(vehicles[i]->getID()==ID)
            {
                vehicles[i]=nullptr;
                count--;
                return;
            }            
        }
    }
    cout<<"Vehicle not in the lot"<<endl;

};

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int cou=0;
    for(int i=0;i<max_cap;i++)
    {
        if(vehicles[i]!=nullptr)
        {
            if(vehicles[i]->getParkingDuration()>maxParkingDuration)
            {
                cou++;
            }
        }
    }
    return cou;
};