#include<iostream>
using namespace std;

double array_mean(int array[],int n)
{
    double mean=0;
    if(n>=1)
    {
        for(int i=0;i<n;i++)
        {
            mean += array[i];
        }
        mean=mean/n;
        cout<<mean<<endl;
        return mean;
    }
    return 0;
}