#include"Person.h"
#include<iostream>
using namespace std;

extern PersonList createPersonList(int); 

int main()
{
    int n=5;
    PersonList a=createPersonList(n);
    for(int i=0;i<n;i++)
    {
        cout<<a.people[i].name<<" "<<a.people[i].age<<endl;
    } 
    cout<<a.numPeople<<endl;
    return 0;
}