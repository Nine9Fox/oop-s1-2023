#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include"Course.h"
#include"Grade.h"
#include"Gradebook.h"

class University
{
public:
    string name;
    string location;
    Course* courses;
    GradeBook gradebook;
    int courses_Count;

    University();
    University(string name,string location);
    ~University();

    void addCourse(int id,string name);
    string get_name();
    string get_location();
    Course* get_courses();
    int get_courses_Count();
};

#endif

