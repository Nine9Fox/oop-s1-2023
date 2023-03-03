#include<iostream>

extern int num_count(int[],int,int);
int main()
{
    int n=5;
    int array[n]={2,5,6,6,8};
    num_count(array,n,6);
    return 0;
}