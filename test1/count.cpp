#include <iostream>

int count(int array[], int n)
{
    int total = 0;
    for(int i=0; i<(n-1);i++)
    {
        if((array[i]%2)==0)
        {
            total++;
        }
    }
    return total;
}