#include"Clinic.h"
#include"Cage.h"

Clinic::Clinic()
{
    this->name="";
    this->max_size=0;
    cage_List=new Cage[max_size];
};                               
Clinic::Clinic(std::string name, int max_size)
{
    this->name=name;
    this->max_size=max_size;
    cage_List=new Cage[max_size];
};  
int Clinic::get_number_of_cages()
{
    int num=max_size;
    for(int i=0;i<max_size;i++)
    {
        if(cage_List[i].get_name()=="")
        {
            num--;
        }
    }
    return num;
};               
std::string Clinic::get_name()
{
    return name;
};                  
Cage * Clinic::get_cages()
{
    return cage_List;
};                      
bool Clinic::add_cage(Cage new_cage)
{
    int num=get_number_of_cages();
    if(num!=max_size)
    {
        cage_List[num]=new_cage;
        return true;
    }
    return false;
};   
                                        
Clinic::~Clinic()
{

};   