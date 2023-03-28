#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
class Orchestra
{         
public:
    int size;
    Musician * Musician_List;
    Orchestra();           
    Orchestra(int size);   
    int get_current_number_of_members(); 
    bool has_instrument(std::string instrument); 
    Musician *get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();

};
#endif