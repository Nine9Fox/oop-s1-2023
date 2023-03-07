#include<iostream>
#include<math.h>
using namespace std;

int add(int a,int b)
{
    int a_Power=-1;
    int b_Power=-1;
    int a_decimal=0;
    int b_decimal=0;
    int sum=0;
    while (a>0||b>0)
    {
        a_Power++;
        if(a%10==1)
        {        
            a_decimal +=pow(2,a_Power);
        }
        //cout<<"a_decimal "<<a_decimal<<endl;
        b_Power++;
        if(b%10==1)
        {
            b_decimal +=pow(2,b_Power);
        }
        a=a/10;
        b=b/10;
    }
    sum=a_decimal+b_decimal;
    //cout<<a_Power<<endl;
    //cout<<a_decimal<<endl;
    //cout<<b_decimal<<endl;
    cout<<sum<<endl;
    return sum;
    
}

int subtract(int a,int b)
{
    int a_Power=-1;
    int b_Power=-1;
    int a_decimal=0;
    int b_decimal=0;
    int sub=0;
    while (a>0||b>0)
    {
        a_Power++;
        if(a%10==1)
        {        
            a_decimal +=pow(2,a_Power);
        }
        //cout<<"a_decimal "<<a_decimal<<endl;
        b_Power++;
        if(b%10==1)
        {
            b_decimal +=pow(2,b_Power);
        }
        a=a/10;
        b=b/10;
    }
    sub=a_decimal-b_decimal;
    //cout<<a_Power<<endl;
    //cout<<a_decimal<<endl;
    //cout<<b_decimal<<endl;
    cout<<sub<<endl;
    return sub;
}

double leftshift(int a)
{
    int a_Power=-1;
    double a_decimal=0;
    if(a%10==1)
    {
        a_decimal+=0.5;
    }
    a=a/10;
    while (a>0)
    {
        a_Power++;
        if(a%10==1)
        {        
            a_decimal +=pow(2,a_Power);
        }
        a=a/10;
    }
    cout<<a_decimal<<endl;
    return a_decimal;
}

double rightshift(int a)
{
    int a_Power=-1;
    double a_decimal=0;
    a=a*10;
    while (a>0)
    {
        a_Power++;
        if(a%10==1)
        {        
            a_decimal +=pow(2,a_Power);
        }
        a=a/10;
    }
    cout<<a_decimal<<endl;
    return a_decimal;
}

extern int add(int,int);
extern int subtract(int,int);
extern double leftshift(int);
extern double rightshift(int);

int main()
{
    double a=1011;
    double b=100;
    add(a,b);
    subtract(a,b);
    leftshift(a);
    rightshift(a);
    return 0;
}