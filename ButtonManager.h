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
#include<map>
#include<memory>
#include<stack>
#include <string>
#include"Flight.h"
#include<regex>



class SceneManager;

class ButtonManager
{
public:    
    map<string,Button*> TIB_maps;
    map<string,bool> TIBA_maps;
    map<string,Text*> TIBT_maps;
    map<string,string> TIBS_maps;
    sf::Font textInput_font;
    
    Button escape;
    
    Button userside;

    Button airline;

    Button search;

    Button pushFlight;

    Button checkpay;

    Button Pay;

    Flight* flight[100];
    Texture flight_tNormalState,flight_tSelectState;
    int isChoose;
    

    ButtonManager();
    ~ButtonManager();
    void LoadButtonMediaData();

    void escape_Input(RenderWindow& window,SceneManager& SCmanager);
    void userside_Input(RenderWindow& window,SceneManager& SCmanager);
    void textInput_Input(Event& e,string);
    void search_Input(RenderWindow& window,SceneManager& SCmanager);
    void airline_Input(RenderWindow& window,SceneManager& SCmanager);
    void pushFlight_Input(RenderWindow& window,SceneManager& SCmanager);
    void flight_Input(RenderWindow& window,SceneManager& SCmanager);
    void checkpay_Input(RenderWindow& window,SceneManager& SCmanager);


};

#endif