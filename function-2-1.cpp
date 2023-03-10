#include<iostream>
#include<math.h>
using namespace std;

void print_binary_str(std::string decimal_number)
{
    int num_10=std::stoi(decimal_number);
    long num_2=0;
    long a=1;
    while (num_10>0)
    {
        num_2+=(num_10%2)*a;
        a=a*10;        
        num_10=num_10/2;     
    }
    cout<<num_2<<endl;
    return;
}