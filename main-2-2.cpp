#include<iostream>
#include<math.h>
using namespace std;

extern int bin_to_int(int[], int);

int main()
{
    int bin_num=4;
    int bin[bin_num]={1,0,1,0};
    int dec=bin_to_int(bin, bin_num);
    cout<<dec<<endl;
    return 0;
}