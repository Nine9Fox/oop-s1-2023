#ifndef FLIGHT_H
#define FLIGHT_H
#include"Button.h"

class SceneManager;

class Flight:public Button
{
public:
    map<string,Text*> FBT_maps;
    Font textInput_font;
    Vector2f position;
    Flight(SceneManager& SCmanager,float x,float y);
    ~Flight();
    void set_Position(int x,int y);
};
#endif