#include<iostream>
using namespace std;

extern void print_summed(int array1[3][3],int array2[3][3]);

int main()
{
    int matrix1[3][3] = {{0,1,6},{3,6,5},{6,7,5}} ;
    int matrix2[3][3] = {{2,5,0},{2,-7,5},{-5,-4,3}} ;
    print_summed(matrix1,matrix2) ;
    return 0;
}