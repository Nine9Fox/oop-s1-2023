#include<iostream>
using namespace std;

extern int sum_diagonal(int[4][4]);

int main()
{
    int array[4][4]={{2,3,6,1},{6,3,9,4},{6,9,7,1},{2,0,3,4}};
    sum_diagonal(array);
    return 0;
}

