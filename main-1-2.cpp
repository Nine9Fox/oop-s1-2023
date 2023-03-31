#include"Cage.h"
#include"Clinic.h"
#include<iostream>
using namespace std;

int main()
{
    Clinic a("abc",3);

    Cage m1("a",1);
    Cage m2("b",2);
    Cage m3("c",3);
    Cage m4("d",4);
    if(a.add_cage(m1))
    {
        cout<<"m1"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }

    if(a.add_cage(m2))
    {
        cout<<"m2"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }

    if(a.add_cage(m3))
    {
        cout<<"m3"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }

    if(a.add_cage(m4))
    {
        cout<<"m4"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }
    cout<<a.get_number_of_cages()<<endl;
    cout<<a.get_name()<<endl;
    return 0;
}