#include<iostream>
using namespace std;

int size_of_variable_star_arr()
{
    int* arr=new int[3];
    int size=sizeof(arr);
    delete[] arr;
    //cout<<arr<<endl;
    return size;
}