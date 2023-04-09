#include<iostream>
#include<time.h>
#include<string.h>
#include<unistd.h>
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
#include"Vehicle.h"
using namespace std;

int main()
{
    int ID;
    int num;
    cout<<"How many vehicles do you want to park:";
    cin>>num;
    cout<<endl;
    Vehicle* park[num];
    Car a(1);
    Bus b(2);
    Motorbike c(3);
    for(int i=0;i<num;i++)
    {
        cout<<"Which vehicles do you want to park:";
        cin>>ID;
        cout<<endl;
        if(ID==1)
        {
            park[i]=&a;
        }
        else
        if(ID==2)
        {
            park[i]=&b;
        }
        else
        if(ID==3)
        {
            
            park[i]=&c;
        }
    }
    sleep(6);
    
    for(int i=0;i<num;i++)
    {
        cout<<"Time is "<<park[i]->getParkingDuration()<<endl;
    }




 
}