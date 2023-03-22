#include<iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *,int);

int *readNumbers()
{
    int *number_arr=new int[10];
    for(int i=0;i<10;i++)
    {
        int a=0;
        std::cin>>a;
        number_arr[i]=a;
    }
    return number_arr;
}

int secondSmallestSum(int *numbers,int length)
{
    int *arr=new int[100];
   
    int arr_id=0;
    for(int i=0;i<length;i++)
    {
        int sum=0;
        for(int j=i;j<length;j++)
        {
            sum+=numbers[j];
            arr[arr_id]=sum;
            arr_id++;
        }
    }
    int a=0;
    for(int i=0;i<100;i++)
    {
        for(int j=i;j<100;j++)
        {
            if(arr[j]<arr[i])
            {
                a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }

    }
    return arr[1];
}