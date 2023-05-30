#include<iostream>
#include<tuple>
#include"GameEntity.h"
#include<cmath>
#include"Utils.h"
using namespace std;

int main()
{
    std::tuple<int,int> pos1=Utils::generateRandomPos(100,100);
    std::tuple<int,int> pos2=Utils::generateRandomPos(100,100);
    cout<<get<0>(pos1)<<endl;
    cout<<get<1>(pos1)<<endl;
    cout<<get<0>(pos2)<<endl;
    cout<<get<1>(pos2)<<endl;
    
    double a=Utils::calculateDistance(pos1,pos2);
    cout<<a<<endl;
}