#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
//#include"System.h"
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

class SceneManager
{
private:

public:
    int SceneState;
    Sprite sSystemStartBg;
    Texture tSystemStartBg;
    ButtonManager BTmanager;

    SceneManager();
    ~SceneManager();

    void InitialScenesStart(RenderWindow* window); 
    void drawScenesStart(RenderWindow* window);
    void LoadSceneMediaData();
};

#endif