#include"Gradebook.h"

GradeBook::GradeBook()
{
    this->grade_Count=0;
    this->gradeBook=new Grade[100];
};
GradeBook::~GradeBook()
{

};

void GradeBook::addGrade(int student_id,int course_id,string assignment,int value)
{
    gradeBook[grade_Count]=Grade (assignment,value,student_id,course_id);
    grade_Count++;
};

int GradeBook::getGrade(int student_id,int course_id,string assignment)
{
    for(int i=0;i<100;i++)
    {
        if(
            gradeBook[i].get_course_id()==course_id&&
            gradeBook[i].get_assignment()==assignment&&
            gradeBook[i].get_student_id()==student_id
        )
        {
            return gradeBook[i].get_value();
        }

    }
    return 0;
};