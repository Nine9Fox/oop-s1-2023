#include<iostream>

extern bool is_descending(int[],int);
int main()
{
    int n=5;
    int array_1[n]={2,9,6,5,2};
    int array_2[n]={6,5,4,3,2};
    is_descending(array_1,n);
    is_descending(array_2,n);
    return 0; 
}