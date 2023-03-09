#include<iostream>
using namespace std;

extern void print_scaled(int array[3][3],int);

int main()
{
    int scale = 3;
    int array[3][3] = {{0,1,8},{5,6,3},{6,4,1}};
    print_scaled(array,scale);
    return 0;
}