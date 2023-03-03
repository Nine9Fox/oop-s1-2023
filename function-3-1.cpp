#include<iostream>
using namespace std;

bool is_fanarray(int array[],int n)
{
    bool is_fan=true;
    if(n>=1)
    {
        int array_rev[5];
        int array_rev_id=0;
        for(int i=n-1;i>=0;i--)
        {
            array_rev[array_rev_id]=array[i];
            //cout<<"array_rev is:"<<array_rev[array_rev_id]<<endl;
            //cout<<"array is:"<<array[array_rev_id]<<endl;
            array_rev_id++;
        }
        for(int i=0;i<n;i++)
        {
            if(array_rev[i]!=array[i])
            {
                //cout<<is_fan<<"b"<<endl;            
                is_fan=false;
                //cout<<is_fan<<"a"<<endl;
            }            
        }

        for(int i=(n/2);i<n;i++)
        {
            for (int j=i;j<n;j++)
            {
                if(array[i]<array[j])
                {
                    is_fan=false;
                }
            }
            
        }
        cout<<is_fan<<endl;
        return is_fan;
    }
    return false;
}