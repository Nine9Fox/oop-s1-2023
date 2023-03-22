#include<iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *,int);

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
void printNumbers(int *numbers,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<endl;
    }
    return;
}