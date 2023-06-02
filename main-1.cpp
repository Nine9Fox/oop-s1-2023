#include"Cell.h"
#include"Effect.h"
#include"Utils.h"

int main()
{
    Cell a(0,0,'C');
    tuple<int,int> pos_a=a.getPos();
    cout<<get<0>(pos_a)<<endl;
    cout<<get<1>(pos_a)<<endl;
    tuple<int,int> pos_2=Utils::generateRandomPos(0,0);
    cout<<get<0>(pos_2)<<endl;
    cout<<get<1>(pos_2)<<endl;
    double dis=Utils::calculateDistance(pos_a,pos_2);
    cout<<dis<<endl;
}