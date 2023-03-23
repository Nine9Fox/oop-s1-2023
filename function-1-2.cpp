#include"Person.h"
#include<iostream>
using namespace std;

PersonList createPersonList(int n)
{
    PersonList list;
    list.numPeople=n;
    Person* array=new Person[n];
    for(int i=0;i<n;i++)
    {
        array[i].name="John Doe";
        array[i].age=1;
    }
    list.people=array;
    return list;
}