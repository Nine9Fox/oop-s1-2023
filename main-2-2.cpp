#include"Appliance.h"
#include"TV.h"

int main()
{
    TV a(5,6.5);
    printf("%.2f",a.getPowerConsumption());
    return 0;
}