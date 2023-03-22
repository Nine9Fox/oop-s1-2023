#include<iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *,int);

int main()
{
    int *a=readNumbers();
    printNumbers(a,10);
    delete[] a;
    return 0;
}