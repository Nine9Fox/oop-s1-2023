#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student:public Person

{
private:
    int id;
public:
    Student();
    Student(int id,string name);
    ~Student();
    int get_id();
};
#endif