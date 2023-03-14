#include<iostream>
using namespace std;

int size_of_variable_star_t()
{
    int a=5;
    int* p=&a;
    int* t=new int;
    int size1=sizeof(t);
    int size2=sizeof(p);
    //cout<<size1<<endl;
    //cout<<size2<<endl;
    return size1;
}