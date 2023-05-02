#include"University.h"

University::University()
{
    name="";
    location="";
    courses=new Course[100];
    courses_Count=0;
    this->gradebook=GradeBook ();
};
University::University(string name,string location)
{
    this->name=name;
    this->location=location;
    courses=new Course[100];
    courses_Count=0;
    this->gradebook=GradeBook ();
};
University::~University()
{

};
void University::addCourse(int id,string name)
{
    courses[courses_Count]=Course (name,id);
    courses_Count++;
};
string University::get_name()
{
    return name;
};
string University::get_location()
{
    return location;
};
Course* University::get_courses()
{
    return courses;
};
int University::get_courses_Count()
{
    return courses_Count;
};

