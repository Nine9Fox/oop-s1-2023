#include<iostream>
#include<math.h>
using namespace std;

extern int palindrome_sum(int[],int);
extern bool is_array_palindrome(int[],int);
extern int sum_integers(int[],int);

int main()
{
    int length=5;
    int arr[length]={1,0,5,0,2};
    int a=palindrome_sum(arr,length);
    cout<<a<<endl;
    return 0;
}