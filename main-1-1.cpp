#include"Person.h"
#include<iostream>
using namespace std;

extern Person* createPersonArray(int); 

int main()
{
    int n=5;
    Person* a=createPersonArray(n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].age<<endl;
    } 
    return 0;
}