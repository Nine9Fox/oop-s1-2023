#include"Airplane.h"

int main()
{
    Airplane a(5690,100);
    a.fly(65,120);
    cout<<a.get_fuel()<<a.get_numberOfFlights()<<endl;
    a.fly(65,10);
    cout<<a.get_fuel()<<a.get_numberOfFlights()<<endl;
    return 0;
}