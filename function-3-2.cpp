#include<iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int);
extern int *reverseArray(int *,int);

int *readNumbers()
{
    int *number_arr=new int[10];
    for(int i=0;i<10;i++)
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

int *reverseArray(int *numbers1,int length)
{
    int *a=new int[length];
    int a_id=-1;
    for(int i=length-1;i>=0;i--)
    {
        a_id++;
        a[a_id]=numbers1[i];
    }
    return a;
}