#include"University.h"
#include"Student.h"

int main()
{
    Student p1(0,"Bob");
    University a("adelaide","220");
    a.addCourse(0,"math");
    a.courses[0].addPerson(&p1);
    a.gradebook.addGrade(0,0,"math",10);
    cout<<a.gradebook.getGrade(0,0,"math")<<endl;
}