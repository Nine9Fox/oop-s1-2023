#include"AirCraft.h"

int main()
{
    AirCraft a(20);
    printf("%d %f %d",a.get_weight(),a.get_fuel(),a.get_numberOfFlights());
    return 0;
}