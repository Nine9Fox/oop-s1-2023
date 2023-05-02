#include"Grade.h"
Grade::Grade()
{
    this->assignment="";
    this->value=0;
    this->student_id=0;
    this->course_id=0;
};
Grade::Grade(string assignment,int value,int student_id,int course_id)
{
    this->assignment=assignment;
    this->value=value;
    this->student_id=student_id;
    this->course_id=course_id;
};
Grade::~Grade()
{
    
};
string Grade::get_assignment()
{
    return this->assignment;
};
int Grade::get_value()
{
    return value;
};
int Grade::get_student_id()
{
    return student_id;
};
int Grade::get_course_id()
{
    return course_id;
};