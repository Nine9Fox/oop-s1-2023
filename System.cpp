#include"System.h"
#include"SceneManager.h"


System::System()
{
    SCmanager=SceneManager();
    windowLength=943;
    windowWidth=1680;
    window.create(sf::VideoMode(windowWidth, windowLength),L"Ticketing system");
};

System::~System()
{

};

void System::Initial()
{
    SCmanager.LoadSceneMediaData();
    SCmanager.InitialScene_Start(&window);
    SCmanager.InitialScene_UserSearch(&window);
};

void System::drawScenes()
{ 
    if(SCmanager.SceneState==Scene_Start)
    {
        SCmanager.drawScene_Start(&window);
    }

    if(SCmanager.SceneState==Scene_UserSearch)
    {
        SCmanager.drawScene_UserSearch(&window);
    }

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
        SCmanager.BTmanager.escape.checkMouse(mousePosition,event);
        SCmanager.BTmanager.userside.checkMouse(mousePosition,event);

        SCmanager.BTmanager.escape_Input(&window);
        SCmanager.BTmanager.userside_Input(&window,&SCmanager);
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
