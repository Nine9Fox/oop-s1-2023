#include"Person.h"
#include<iostream>
using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList p_copy;
    p_copy.numPeople = pl.numPeople;
    p_copy.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++) {
        p_copy.people[i].name = pl.people[i].name;
        p_copy.people[i].age = pl.people[i].age;
    }
    return p_copy;
}