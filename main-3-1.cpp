#include<iostream>
using namespace std;

extern int *readNumbers(int);
extern bool equalsArray(int *,int *,int);

int main()
{
    int length=5;
    int *a=readNumbers(length);
    int *b=readNumbers(length);
    equalsArray(a,b,length);
    delete[] a;
    delete[] b;
    return 0;
}