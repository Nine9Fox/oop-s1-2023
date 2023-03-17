#include<iostream>
#include<math.h>
using namespace std;

extern int palindrome_sum(int[],int);
extern bool is_array_palindrome(int[],int);
extern int sum_integers(int[],int);

int palindrome_sum(int integers[], int length)
{
    if(length>0)
    {
        bool is_pal=0;
        is_pal=is_array_palindrome(integers,length);
        int sum=0;
        sum=sum_integers(integers,length);
        if(is_pal==0)
        {
            return -2;
        }
        return sum; 
    }
    return -1;
}
bool is_array_palindrome(int integers[], int length)
{
    int inte_rev[length];
    int inte_rev_id=0;
    for(int i=length-1;i>=0;i--)
    {
        inte_rev[inte_rev_id]=integers[i];
        inte_rev_id++;
    }
    for(int i=0;i<length;i++)
    {
        if(inte_rev[i]!=integers[i])
        {
            return 0;
        }
    }
    return 1;
}
int sum_integers(int integers[], int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=integers[i];
    }
    return sum;
}