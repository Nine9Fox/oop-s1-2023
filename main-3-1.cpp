#include"Appliance.h"
#include"Fridge.h"
#include"TV.h"
#include"House.h"

int main()
{
    TV a(5,6.5);
    printf("a:%.2f ",a.getPowerConsumption());

    Fridge b(5,3.2);
    printf("b:%.2f ",b.getPowerConsumption());

    House h(2);
    bool c=h.addAppliance(&a);
    bool d=h.addAppliance(&b);

    printf("%d %d ",c,d);

    printf("h:%.2f ",h.getTotalPowerConsumption());
    return 0;
}