#include<iostream>
using namespace std;

int size_of_array_arr()
{
    int array[3];
    int* arr=array;

    int size=sizeof(array);
    return size;
}