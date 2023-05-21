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
    Scene_Start, Scene_UserSearch, Scene_FlightList, Scene_AirLine ,Scene_Checkpay,Scene_FinalPay
};

class SceneManager
{
private:

public:
    int SceneState;
    Sprite 
    sSystemStartBg,
    sSystemUserSearchBg,
    sSystemFlightListBg,
    sSystemAirLineBg,
    sSystemCheckpayBg,
    sSystemFinalPayBg;

    Texture 
    tSystemStartBg,
    tSystemUserSearchBg,
    tSystemFlightListBg,
    tSystemAirLineBg,
    tSystemCheckpayBg,
    tSystemFinalPayBg;

    
    ButtonManager BTmanager;

    SceneManager();
    ~SceneManager();

    void LoadSceneMediaData();

    void InitialScene_Start(RenderWindow& window); 
    void drawScene_Start(RenderWindow& window);

    void InitialScene_UserSearch(); 
    void drawScene_UserSearch(RenderWindow& window);

    void InitialScene_FlightList(); 
    void drawScene_FlightList(RenderWindow& window);

    void InitialScene_AirLine(); 
    void drawScene_AirLine(RenderWindow& window);

    void InitialScene_Checkpay(); 
    void drawScene_Checkpay(RenderWindow& window);

    void InitialScene_FinalPay(); 
    void drawScene_FinalPay(RenderWindow& window);
};

#endif