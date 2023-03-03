#include<iostream>

extern double array_mean(int[],int);

int main()
{
    int n=5;
    int array[n]={5,6,3,8,1};
    array_mean(array,n);
    return 0;
}