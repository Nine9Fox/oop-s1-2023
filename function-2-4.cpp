#include<iostream>
using namespace std;

bool is_ascending(int array[],int n)
{
    
    if(n>=1)
    {
        bool is_asc=true;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(array[i]>array[j])
                {
                    is_asc=false;
                }
            }
        }
        cout<<is_asc<<"\n"<<endl;
        return is_asc;
    }
    //cout<<"false"<<"\n"<<endl;
    return false;
}