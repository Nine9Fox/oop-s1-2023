#include<iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *,int) ;

int main()
{
    int *a=readNumbers();
    hexDigits(a,10);
    delete[] a;
    return 0;
}