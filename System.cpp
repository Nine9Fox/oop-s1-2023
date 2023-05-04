#include"System.h"


System::System()
{
    BTmanager=ButtonManager();
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
    BTmanager.escape.setPosition((1618),0);
    LoadMediaData();
    SceneState=Scene_Start;
};

void System::LoadMediaData()
{
    if(!tSystemStartBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemStartBg.png"<<endl;
    }
    sSystemStartBg.setTexture(tSystemStartBg);    

    BTmanager.LoadButtonMediaData();

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
        window.draw(BTmanager.escape);
        window.display();
};


void System::Input()
{
    sf::Event event;
    Vector2i mousePosition=Mouse::getPosition(window);
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();            
        }
        BTmanager.escape.checkMouse(mousePosition,event);
        BTmanager.escape_Input(&window);
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
