#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
    private:
    
    public:
    string name;
    Person();
    Person(string name);
    ~Person();
    string get_name();
};

#endif