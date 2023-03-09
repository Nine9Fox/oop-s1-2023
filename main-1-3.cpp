#include<iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main()
{
    int array[4][4]={{2,3,6,1},{6,3,9,4},{6,9,7,1},{2,0,3,4}};
    count_digits(array);
    return 0;
}