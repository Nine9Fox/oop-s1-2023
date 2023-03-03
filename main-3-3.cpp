#include<iostream>

extern double weighted_average(int[],int);
int main()
{
    int n=5;
    int array_1[n]={2,4,5,4,2};
    weighted_average(array_1,n);
    return 0;
}