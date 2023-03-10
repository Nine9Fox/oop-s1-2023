#include<iostream>
#include<math.h>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int a=0;
    for(int i=0;i<number_of_digits;i++)
    {
        a+=binary_digits[i];
        a=a*10;
    }
    a=a/10;
    int a_Power=-1;
    int a_decimal=0;
    while (a>0)
    {
        a_Power++;
        if(a%10==1)
        {        
            a_decimal +=pow(2,a_Power);
        }
        a=a/10;
    }
    //cout<<a_decimal<<endl;
    return a_decimal;
}