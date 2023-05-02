#include"Person.h"

Person::Person()
{
    name="";
};
Person::Person(string name)
{
    this->name=name;
};
Person::~Person()
{

};
string Person::get_name()
{
    return name;
};