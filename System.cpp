#include"System.h"


System::System()
{
    windowLength=943;
    windowWidth=1680;
    window.create(sf::VideoMode(windowWidth, windowLength),L"Ticketing system");
};
System::~System()
{

};

void System::Initial()
{
    window.setFramerateLimit(240);
    LoadMediaData();
    SceneState=Scene_Start;
};

void System::LoadMediaData()
{
    if(!tSystemStartBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "找不到Texture/tSystemStartBg.png"<<endl;
    }
    sSystemStartBg.setTexture(tSystemStartBg);    
};


void System::drawScenes()
{
    if(SceneState==Scene_Start)
    {
        drawScenesStart();
    }
};
void System::drawScenesStart()
{

        window.clear();
        window.draw(sSystemStartBg);
        window.display();
};


void System::Input()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        window.close();
    }  
};

void System::Run()
{
    Initial();
    while (window.isOpen())
    {
        Input();
        drawScenes();   
    };
    
};
