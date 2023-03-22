#include<iostream>
using namespace std;

extern int *readNumbers(int);
extern int secondSmallestSum(int *,int);

int *readNumbers(int length)
{
    int *number_arr=new int[10];
    for(int i=0;i<length;i++)
    {
        int a=0;
        std::cin>>a;
        number_arr[i]=a;
    }
    return number_arr;
}

int secondSmallestSum(int *numbers,int length)
{
    int arr[length];
    arr[0]=numbers[0];
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {

        }
    }
}