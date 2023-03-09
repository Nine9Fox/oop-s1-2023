#include<iostream>
using namespace std;

void count_digits(int array[4][4])
{
    int check_Num=0;  
    int num_NumArr[10];
    while (check_Num<=9)
    {
        int num_Num=0;    
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(array[i][j]==check_Num)
                {
                    num_Num++;
                }
            }
        }
        num_NumArr[check_Num]=num_Num;
        //printf("%d:%d;\n",check_Num,num_Num);
        check_Num++;
    }
    printf(
        "0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d\n;"
        ,num_NumArr[0],num_NumArr[1],num_NumArr[2],num_NumArr[3],num_NumArr[4],num_NumArr[5],num_NumArr[6],num_NumArr[7],num_NumArr[8],num_NumArr[9]
        );
    
    
}