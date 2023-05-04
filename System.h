#ifndef SYSTEM_H
#define SYSTEM_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
using namespace std;
using namespace sf;
#include"Button.h"
#include"ButtonManager.h"

enum SceneState {        
    Scene_Start
};

class System
{
public:
    sf::RenderWindow window;
    int windowWidth;
    int windowLength;
    int SceneState;
    Sprite sSystemStartBg;
    Texture tSystemStartBg;

    ButtonManager BTmanager;

    //Button escape;
    //Texture escape_tSelectState,escape_tPressState,escape_tReleaseState,escape_tNormalState;

    System();
    ~System();

    void Run();
    void Input();
    void Initial();
    void LoadMediaData();

    void drawScenes();
    void drawScenesStart();


};

#endif