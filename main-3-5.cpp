#include<iostream>

extern double sum_even(double[],int);
int main()
{
    int n=5;
    double array[n]={5.6,6.3,5,8.3,9};
    sum_even(array,n);
    return 0;
}