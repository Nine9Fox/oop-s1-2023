#include"Person.h"
#include<iostream>
using namespace std;

PersonList createPersonList(int n)
{
    PersonList list;
    list.numPeople=n;
    list.people=new Person[n];
    for(int i=0;i<n;i++)
    {
        list.people[i].name="John Doe";
        list.people[i].age=1;
    }
    return list;
}