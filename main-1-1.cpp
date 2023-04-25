#include"Appliance.h"

int main()
{
    Appliance a;
    a.turnOn();
    printf("%d",a.get_isOn());
    return 0;
}