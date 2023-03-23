#include"Person.h"
#include<iostream>
using namespace std;

PersonList shallowCopyPersonList(PersonList pl)
{

    PersonList p_copy;
    p_copy.numPeople=pl.numPeople;
    p_copy.people=pl.people;
    return p_copy;
}