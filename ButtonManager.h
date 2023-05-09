#ifndef BUTTONMANAGER_H
#define BUTTONMANAGER_H
//#include"System.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
using namespace std;
using namespace sf;
#include"Button.h"


class SceneManager;

class ButtonManager
{
public:
    Button escape;
    Texture escape_tSelectState,escape_tPressState,escape_tReleaseState,escape_tNormalState;
    
    Button userside;
    Texture userside_tSelectState,userside_tPressState,userside_tReleaseState,userside_tNormalState;


    ButtonManager();
    ~ButtonManager();
    void LoadButtonMediaData();
    void escape_Input(RenderWindow* window);
    void userside_Input(RenderWindow* window,SceneManager* SCmanager);
};

#endif