#ifndef CRADEBOOK_H
#define CRADEBOOK_H
#include"Grade.h"

class GradeBook
{
private:
    Grade* gradeBook;
    int grade_Count;
public:
    GradeBook();
    ~GradeBook();

    void addGrade(int student_id,int course_id,string assignment,int value);
    int getGrade(int student_id,int course_id,string assignment);

};


#endif