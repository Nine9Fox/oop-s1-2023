#include<iostream>
#include<time.h>
#include<string.h>
#include<unistd.h>
#include "ParkingLot.h"
using namespace std;

int main()
{
    Car a(1);
    Bus b(2);
    Motorbike c(3);
    Car d(4);
    Car e(5);
    Car f(6);
    Car g(7);
    Bus h(8);
    Bus i(9);
    Motorbike j(10);



    ParkingLot p(10);
    p.parkVehicle(&a);
    p.parkVehicle(&b);
    p.parkVehicle(&c);
    p.parkVehicle(&d);
    p.parkVehicle(&e);
    p.parkVehicle(&f);
    
    p.parkVehicle(&g);
    p.parkVehicle(&h);
    p.parkVehicle(&i);
    p.parkVehicle(&j);
    sleep(2);
    sleep(4);
    cout<<a.getParkingDuration()<<endl;
    cout<<p.countOverstayingVehicles(3);
}