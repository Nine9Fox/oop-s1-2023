#include"Cage.h"

Cage::Cage()
{
    this->name="";
    this->number_ID=0;
};                                    
Cage::Cage(std::string newName, int newNumber)
{
    this->name=newName;
    this->number_ID=newNumber;
};  
std::string Cage:: get_name()
{
   return this->name;
};                    
int Cage:: get_IDnum()
{
    return this->number_ID;
};                           
Cage::~Cage()
{

};
