#include"Cell.h"
#include"Utils.h"
#include"Character.h"
#include"Trap.h"
#include"Effect.h"
using namespace std;

int main()
{
    Character a(5,5);
    tuple<int,int> pos=a.getPos();    
    Trap b(5,5);
    cout<<get<0>(pos)<<endl;
    cout<<get<1>(pos)<<endl;
    cout<<b.isActive()<<endl;
    cout<<a.getType()<<endl;
    b.apply(a);
    cout<<b.isActive()<<endl;
    cout<<a.getType()<<endl;
}