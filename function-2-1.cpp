#include<iostream>
using namespace std;

int min_element(int array[],int n)
{
    if(n>=1)
    {
        int min=array[0];
        for(int i=0;i<n;i++)
        {
            if(array[i]<min)
            {
                min=array[i];
            }
        }
        //cout<<min<<endl;
        return min;
    }
    return 0;
}