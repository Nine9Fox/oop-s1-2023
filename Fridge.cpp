    #include"Fridge.h"

    Fridge::Fridge()
    {
        this->isOn=false;
        this->powerRating=0;
        this->volume=0;
    };
    Fridge::Fridge(int powerRating, double volume)
    {
        this->isOn=false;
        this->powerRating=powerRating;
        this->volume=volume;
    };
    void Fridge::setVolume(double volume)
    {
        this->volume=volume;
    };
    double Fridge::getVolume()
    {
        return volume;
    };
    double Fridge::getPowerConsumption()
    {
        double power_consumption = powerRating * 24 * (volume / 100);
        return power_consumption;
    };
    Fridge::~Fridge()
    {

    };