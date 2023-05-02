#ifndef CRADE_H
#define CRADE_H
#include"Student.h"

class Grade
{
private:
    string assignment;
    int value;
    int student_id;
    int course_id;
public:
    Grade();
    Grade(string assignment,int value,int student_id,int course_id);
    ~Grade();

    string get_assignment();
    int get_value();
    int get_student_id();
    int get_course_id();
};

#endif
