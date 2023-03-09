#include<iostream>
using namespace std;

int is_identity(int array[10][10])
{
    int is_Ide=1;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i==j)
            {
                if(array[i][j]!=1)
                {
                    is_Ide=0;
                }
            }
            if(i!=j)
            {
                if(array[i][j]!=0)
                {
                    is_Ide=0;
                }
            }
        }
    }
    //cout<<is_Ide<<endl;
    return is_Ide;
}