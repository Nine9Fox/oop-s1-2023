#include<iostream>
#include<tuple>
#include"GameEntity.h"
#include<cmath>
#include"Utils.h"
#include"Explosion.h"
#include"Ship.h"
#include"Mine.h"
using namespace std;

int main()
{
    Ship a(5,5);
    tuple<int,int> pos=a.getPos();    
    Mine b(5,5);
    cout<<get<0>(pos)<<endl;
    cout<<get<1>(pos)<<endl;
    Explosion c= b.explode();
    c.apply(a);
    pos=a.getPos();
    cout<<get<0>(pos)<<endl;
    cout<<get<1>(pos)<<endl;
}