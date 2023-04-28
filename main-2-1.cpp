#include"Helicopter.h"

int main()
{
    Helicopter a(5690,"a");
    a.fly(45,10);
    cout<<a.get_fuel()<<a.get_numberOfFlights()<<endl;
    a.fly(45,10);
    cout<<a.get_fuel()<<a.get_numberOfFlights()<<endl;
    return 0;
}