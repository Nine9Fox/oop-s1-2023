#include<iostream>
#include<math.h>
using namespace std;

extern int sum_if_palindrome(int[], int);
extern bool is_palindrome(int[], int);
extern int sum_array_elements(int[], int);

bool is_palindrome(int integers[], int length)
{
    int reverse_integers[length];
    int reverse_integers_ID=-1;
    if(length>0)
    {
        for(int i=length-1;i>=0;i--)
        {
            reverse_integers_ID++;
            reverse_integers[reverse_integers_ID]=integers[i];           
        }
        for(int i=0;i<length;i++)
        {
            if(reverse_integers[i]!=integers[i])
            {
                return -2;
            }
        }
        return 0;
    }
    return -1;
}


int sum_if_palindrome(int integers[], int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=integers[i];
    }
    return sum;
}

int sum_array_elements(int integers[], int length)
{
    bool is_palind; 
    is_palind=is_palindrome(integers,length);
    int sum=is_palind;
    if(is_palind==0)
    {
        sum=sum_if_palindrome(integers,length);
    }
    return sum;
}