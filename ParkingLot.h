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
        Vehicle** vehicles;  
    public:
    
        ParkingLot(int max_cap);
        ParkingLot();
        int getCount();
        void parkVehicle(Vehicle* Vehicles);
        void unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);
};

#endif