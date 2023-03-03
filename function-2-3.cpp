#include<iostream>
using namespace std;

void two_five_nine(int array[],int n)
{
    if(n<1)
    {
        cout<<"\n"<<endl;
        return;
    }
    int two_count=0;
    int five_count=0;
    int nine_count=0;
    for(int i=0;i<n;i++)
    {
        switch (array[i])
        {
            case 2:two_count++;
            break;
        
            case 5:five_count++;
            break;

            case 9:nine_count++;
            break;
        }
    }
    printf("2:%d;5:%d;9:%d;\n",two_count,five_count,nine_count);
    return;
}