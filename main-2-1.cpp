#include<iostream>
using namespace std;

extern float add_op(float, float);
extern float subtract_op(float, float);
extern float arithmetic_ops(float, float,std::string);

int main()
{
    float a=1.5;
    float b=0.4;
    float c=arithmetic_ops(a, b,"-");
    cout<<c<<endl;
    return 0;
}