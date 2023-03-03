#include<iostream>
using namespace std;

double weighted_average(int array[],int n)
{
    if(n>=1)
    {
        double count=0;
        double sum=0;
        double ave=0.0;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                }
            }
            //printf("%.2F\n",count);
            sum +=count*array[i];
            //printf("sum is%.2F\n",sum);
        }

        ave=sum/n;
        //printf("%.2F\n",ave);
        return ave;        
    }
    return 0;
}