#ifndef CAGE_H
#define CAGE_H
#include<iostream>
using namespace std;
class Cage
{
private:
    std::string name;
    int number_ID;
public:
    Cage();                                    
    Cage(std::string newName, int newNumber);  
    std::string get_name();                    
    int get_IDnum();                           
    ~Cage();
};
#endif