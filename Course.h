#ifndef COURSE_H
#define COURSE_H
#include"Person.h"
#include"Grade.h"

class Course
{
private:
    string name;
    int id;
    Person** Person_List;
    int Person_Count;
public:
    Course();
    Course(string name,int id);
    ~Course();
    void addPerson(Person* p);
    string get_name();
    int get_id();
    Person** get_Person_List();
    int get_Person_Count();

};

#endif