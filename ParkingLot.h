#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"

class ParkingLot
{
    private:
        
        int max_cap;
        int count;
    public:
    Vehicle** vehicles;
        ParkingLot(int max_cap);
        ParkingLot();
        int getcount();
        void parkVehicle(Vehicle* Vehicles);
        void unparkVehicle(int ID);
};

#endif