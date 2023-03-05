#include<iostream>
using namespace std;

int median_array(int array[],int n)
{
    if(n>=0&&(n%2)!=0)
    {
        int a=0;
        int median=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(array[i]>array[j])
                {
                    a=array[i];
                    array[i]=array[j];
                    array[j]=a;
                }
            }
        }
        median=array[(n/2)];
        //cout<<median<<endl;
        return median;      
    }
     return 1; 
}
