#include"Student.h"

Student::Student()
{
    id=0;
    name="";
};
Student::Student(int id,string name)
{
    this->id=id;
    this->name=name;
};
Student::~Student()
{

};
int Student::get_id()
{
    return id;
};