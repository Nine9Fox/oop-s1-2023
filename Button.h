#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
using namespace std;
using namespace sf;

enum ButtonState
{
    NormalState,SelectState,PressState,ReleaseState
};

class Button:public Sprite
{
public:
    Texture tSelectState,tPressState,tReleaseState,tNormalState;
    int State;

    Button();
    ~Button();
    void checkMouse(Vector2i mouse,Event event);
};

#endif
