#include<iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *,int);
extern void hexDigits(int *,int) ;

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

void hexDigits(int *numbers,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<" ";
        if(numbers[i]>=10)
        {
            switch (numbers[i])
            {
            case 10:cout<<"A"<<endl;break;
            case 11:cout<<"B"<<endl;break;
            case 12:cout<<"C"<<endl;break;
            case 13:cout<<"D"<<endl;break;
            case 14:cout<<"E"<<endl;break;
            case 15:cout<<"F"<<endl;break;
            }
        }else
        {
            cout<<numbers[i]<<endl;
        }
    }
    return;
}

