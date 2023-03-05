#include<iostream>
using namespace std;

double sum_even(double array[],int n)
{
    double sum=0;
    if(n>=1)
    {
        for(int i=0;i<n;i+=2)
        {
            sum += array[i];
        }
        //cout<<sum<<endl;
        return sum;
    }
    return 0;
}