#include<iostream>
using namespace std;

extern float add_op(float, float);
extern float subtract_op(float, float);
extern float multiply_op(float, float);
extern float arithmetic_ops(float, float, float(*op)(float,float));

int main()
{
    float a=1.5;
    float b=0.4;
    float (*op)(float, float);
    op=multiply_op;
    float d=arithmetic_ops(a, b,op);
    cout<<d<<endl;
    return 0;
}