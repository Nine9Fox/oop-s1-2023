#include<iostream>
#include<math.h>
using namespace std;

extern int binary_to_int(int[], int);

int main()
{
    int n=4;
    int a[n]={1,0,1,0};
    binary_to_int(a, n);
    return 0;
}