#include<iostream>
#include<math.h>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits)
{
    int decimal=0;
    int decimal_2=0;
    for(int i=number_of_digits-1;i>=0;i--)
    {
        if(binary_digits[i]==1)
        {
            decimal+=pow(2,decimal_2);
        }
        decimal_2++;
    }
    return decimal;
}