#include<iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *,int);

int main()
{
    int *a=readNumbers();
    secondSmallestSum(a,4);
    delete[] a;
    return 0;
}