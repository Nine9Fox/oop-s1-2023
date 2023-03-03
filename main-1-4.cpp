#include<iostream>

extern int sum_two_arrays(int[],int[],int);
int main()
{
    int n=5;
    int array[n]={5,3,6,9,5};
    int secondarray[n]={6,9,7,4,2};
    sum_two_arrays(array,secondarray,n);
    return 0;
}