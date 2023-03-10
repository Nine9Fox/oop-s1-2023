#include<iostream>
#include<math.h>
using namespace std;

extern int sum_min_max(int[], int);
extern int array_min(int[], int);
extern int array_max(int[], int);

int main()
{
    int n=5;
    int array[n]={5,3,6,9,8};
    sum_min_max(array, n);
    return 0;
}