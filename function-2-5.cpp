#include<iostream>
using namespace std;

bool is_descending(int array[],int n)
{
    
    if(n>=1)
    {
        bool is_dsc=true;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(array[i]<array[j])
                {
                    is_dsc=false;
                }
            }
        }
        cout<<is_dsc<<"\n"<<endl;
        return is_dsc;
    }
    //cout<<"false"<<"\n"<<endl;
    return false;
}