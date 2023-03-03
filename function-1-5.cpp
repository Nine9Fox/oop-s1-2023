#include<iostream>
using namespace std;

int count_evens(int number)
{
    if(number>=1)
    {
        int count=0;
        for(int i=1;i<=number;i++)
        {
            if((i%2)==0)
            {
                count++;
            }
        }
        //cout<<count<<endl;
        return count;
    }
    return 0;
}