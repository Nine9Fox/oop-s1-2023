#include<iostream>
#include<math.h>
using namespace std;

extern int sum_min_max(int[], int);
extern int array_min(int[], int);
extern int array_max(int[], int);

int sum_min_max(int integers[], int length)
{
    if(length>0)
    {
        int min=0;
        int max=0;
        int sum=0;
        min=array_min(integers,length);
        max=array_max(integers,length);
        sum=min+max;
        //cout<<sum<<endl;
        return sum;
    }
    return -1;
}
int array_min(int integers[], int length)
{
    int min=integers[0];
    for(int i=0;i<length;i++)
    {
        if(integers[i]<min)
        {
            min=integers[i];
        }
    }
    return min;
}
int array_max(int integers[], int length)
{
    int max=integers[0];
    for(int i=0;i<length;i++)
    {
        if(integers[i]>max)
        {
            max=integers[i];
        }
    }
    return max;
}