#include<iostream>

extern bool is_ascending(int[],int);
int main()
{
    int n=5;
    int array_1[n]={2,9,6,5,2};
    int array_2[n]={2,3,4,5,6};
    is_ascending(array_1,n);
    is_ascending(array_2,n);
    return 0; 
}