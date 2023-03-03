#include<iostream>
using namespace std;

int sum_two_arrays(int array[],int secondarray[],int n)
{
    if(n>=1)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum +=array[i]+secondarray[i];
        }
        cout<<sum<<endl;
        return sum;
    }
    return 0;
}