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
    Car h(8);
    Car i(9);
    Car j(10);
    Car k(11);
    Car l(12);


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
    p.parkVehicle(&k);
    p.parkVehicle(&l);
    cout<<p.vehicles[0]->getID();    
    cout<<" a"<<endl;
    p.unparkVehicle(1);
    p.unparkVehicle(5);
    cout<<"b"<<endl;
    p.parkVehicle(&l);

}