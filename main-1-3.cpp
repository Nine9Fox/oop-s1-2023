#include"Person.h"
#include<iostream>
using namespace std;

extern PersonList deepCopyPersonList(PersonList);
extern PersonList createPersonList(int); 

int main()
{
    int n=5;
    PersonList a=createPersonList(n);
    PersonList b=deepCopyPersonList(a);
    for(int i=0;i<n;i++)
    {
        cout<<b.people[i].name<<" "<<b.people[i].age<<endl;
    } 
    cout<<"a "<<&a.people<<endl;
    cout<<"b "<<&b.people<<endl;
    a.people[1].name="x";
    for(int i=0;i<n;i++)
    {
        cout<<b.people[i].name<<" "<<b.people[i].age<<endl;
    } 
    return 0;
}