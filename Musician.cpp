#include "Musician.h"
Musician::Musician()
{
    instrument="null";
    experience=0;
    return;
}; 
Musician::Musician(std::string instrument, int experience) 
{
    this->instrument=instrument;
    this->experience=experience;
    return;
};
std::string Musician::get_instrument()
{
    return this->instrument;
};
int Musician::get_experience() 
{
    return this->experience;
};