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
#include"SceneManager.h"


class System
{
public:
    sf::RenderWindow window;
    int windowWidth;
    int windowLength;
    SceneManager  SCmanager;

    System();
    ~System();

    void Run();
    void Initial();
    void drawScenes();    
    void Input();

    void Input_Start();
    void Input_UserSearch();
    void Input_FlightList();
    void Input_AirLine();
    void Input_Checkpay();

};

#endif