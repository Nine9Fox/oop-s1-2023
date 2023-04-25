#include"Appliance.h"
#include"Fridge.h"

int main()
{
    Fridge a(5,6.5);
    printf("%.2f",a.getPowerConsumption());
    return 0;
}