#include"Orchestra.h"
#include "Musician.h"

    Orchestra::Orchestra()
    {
        size=0;
    };           
    Orchestra::Orchestra(int size)
    {
        this->size=size;
        Musician_List=new Musician[size];
    };   
    int Orchestra::get_current_number_of_members()
    {
        int num=this->size;
        for(int i=0;i<this->size;i++)
        {
            if(Musician_List[i].get_instrument()=="null")
            {
                num--;
            }
        }
        return num;
    }
    bool Orchestra::has_instrument(std::string instrument)
    {
        for(int i=0;i<this->size;i++)
        {
            if(Musician_List[i].get_instrument()==instrument)
            {
                return true;
            }
            
        }
        return false;
    }; 
    Musician* Orchestra::get_members()
    {
        return this->Musician_List;
    };
    bool Orchestra:: add_musician(Musician new_musician)
    {
        int num=get_current_number_of_members();
        if(num<this->size)
        {
            Musician_List[num]=new_musician;
            return true;
        }
        return false;
    };
    Orchestra::~Orchestra()
    {
        return;
    };

