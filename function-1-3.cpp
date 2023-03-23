#include"Person.h"
#include<iostream>
using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList p_copy=pl;
    return p_copy;
}