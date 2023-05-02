#include"Course.h"
Course::Course()
{
    name="";
    id=0;
    Person_List=new Person*[100];
    Person_Count=0;
};
Course::Course(string name,int id)
{
    this->name=name;
    this->id=id;
    Person_List=new Person*[100];
    Person_Count=0;
};
Course::~Course()
{

};
void Course::addPerson(Person* p)
{
    Person_List[Person_Count]=p;
    Person_Count++;
};
string Course::get_name()
{
    return name;
};
int Course::get_id()
{
    return id;
};
Person** Course::get_Person_List()
{
    return Person_List;
};
int Course::get_Person_Count()
{
    return Person_Count;
};