#include<iostream>
using namespace std;

extern int *readNumbers(int);
extern bool equalsArray(int *,int *,int);

int *readNumbers(int length)
{
    int *number_arr=new int[10];
    for(int i=0;i<length;i++)
    {
        int a=0;
        std::cin>>a;
        number_arr[i]=a;
    }
    return number_arr;
}


bool equalsArray(int *numbers1,int *numbers2,int length)
{
    bool is=true;
    if(length>0)
    {
        for(int i=0;i<length;i++)
        {
            if(numbers1[i]!=numbers2[i])
            {
                is=false;
            }
        }
        //cout<<is<<endl;
        return is;
    }
    return false;
}