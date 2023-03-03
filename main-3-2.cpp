#include<iostream>

extern int median_array(int[],int);
int main()
{
    int n=5;
    int array_1[n]={2,4,5,4,2};
    int array_2[4]={3,1,6,1};
    median_array(array_1,n);
    median_array(array_2,4);
    return 0;
}