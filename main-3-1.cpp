#include<iostream>

extern bool is_fanarray(int array[],int n);
int main()
{
    int n=5;
    int array_1[n]={2,4,5,4,2};
    int array_2[n]={3,1,6,1,3};
    is_fanarray(array_1,n);
    is_fanarray(array_2,n);    
    return 0;
}