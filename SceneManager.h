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
    Scene_Start, Scene_UserSearch
};

class SceneManager
{
private:

public:
    int SceneState;
    Sprite sSystemStartBg,sSystemUserSearchBg;
    Texture tSystemStartBg,tSystemUserSearchBg;
    ButtonManager BTmanager;

    SceneManager();
    ~SceneManager();

    void InitialScene_Start(RenderWindow* window); 
    void drawScene_Start(RenderWindow* window);

    void InitialScene_UserSearch(RenderWindow* window); 
    void drawScene_UserSearch(RenderWindow* window);
    void LoadSceneMediaData();
};

#endif