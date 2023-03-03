#include<iostream>
using namespace std;

int num_count(int array[],int n,int number)
{
    if(n>=1)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if (array[i]==number)
            {
                count++;
            }            
        }
        cout<<count<<endl;
        return count;
    }
    return 0;
}