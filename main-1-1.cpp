#include"Cage.h"
#include<iostream>
using namespace std;

int main()
{
    Cage m1;
    Cage m2("steve",20);
    cout<<m1.get_name()<<m1.get_IDnum()<<endl;
    cout<<m2.get_name()<<m2.get_IDnum()<<endl;
    return 0;
}