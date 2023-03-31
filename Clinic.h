#ifndef Clinic_H
#define Clinic_H
#include<iostream>
#include"Cage.h"
using namespace std;

class Clinic
{
    private:
        std::string name;
        int max_size;
        Cage* cage_List;
    public:
        Clinic();                                
        Clinic(std::string name, int max_size);  
        int get_number_of_cages();               
        std::string get_name();                  
        Cage * get_cages();                      
        bool add_cage(Cage new_cage);       
                                        
        ~Clinic();      
};
#endif