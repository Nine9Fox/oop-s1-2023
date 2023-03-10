#include<iostream>
#include<math.h>
using namespace std;

extern int sum_if_palindrome(int[], int);
extern bool is_palindrome(int[], int);
extern int sum_array_elements(int[], int);

int main()
{
    int n=5;
    int array[n]={1,0,5,0,1};
    sum_array_elements(array, n);
    return 0;
}