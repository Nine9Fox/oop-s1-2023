#include"House.h"

House::House()
{
    this->appliances=nullptr;
    this->numAppliances=0;
};
House::House(int numAppliances)
{
    this->appliances=new Appliance*[numAppliances];
    this->numAppliances=numAppliances;
    for(int i=0;i<numAppliances;i++)
    {
        appliances[i]=nullptr;
    }
}; 
bool House::addAppliance(Appliance* appliance)
{
    int isFull=false;
    for (int i=0; i<numAppliances;i++)
    {
        if(appliances[i]==nullptr)
        {
            isFull=true;
            break;
        }
    }
    if(isFull==true)
    {
        for (int i=0; i<numAppliances;i++)
        {
            if(appliances[i]==nullptr)
            {
                appliances[i]=appliance;
                return true;
            }
        }
    }
    return false;
    
};
double House::getTotalPowerConsumption()
{
    double power_Con_Total=0;
    for (int i=0; i<numAppliances;i++)
    {
        if(appliances[i]!=nullptr)
        {
            power_Con_Total=power_Con_Total+appliances[i]->getPowerConsumption();
        }
    }
    return power_Con_Total;
}; 
House::~House()
{

};