#include<iostream>
using namespace std;

long transform(long num_10)
{
    long num_2=0;
    long a=1;
    while (num_10>0)
    {
        num_2+=(num_10%2)*a;
        a=a*10;        
        num_10=num_10/2;     
    }
    cout<<num_2<<endl;
    return num_2;
}

extern long transform(long);
int main()
{
    long a=8000;
    transform(a);
    return 0;
}