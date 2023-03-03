#include<iostream>

extern int array_sum(int[],int);
int main()
{
    int n=5;
    int array[n]={5,6,3,8,1};
    array_sum(array,n);
    return 0;
}