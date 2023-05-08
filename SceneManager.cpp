#include"SceneManager.h"
#include"ButtonManager.h"
#include"System.h"

SceneManager::SceneManager()
{
    BTmanager=ButtonManager();
};
SceneManager::~SceneManager()
{

};
void SceneManager::drawScenesStart(RenderWindow* window)
{
        window->clear();
        window->draw(sSystemStartBg);
        window->draw(BTmanager.escape);
        window->display();
};

void SceneManager::InitialScenesStart(RenderWindow* window)
{
    window->setFramerateLimit(240);
    BTmanager.escape.setPosition((1618),0);
    SceneState=Scene_Start;
};

void SceneManager::LoadSceneMediaData()
{
    if(!tSystemStartBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemStartBg.png"<<endl;
    }
    sSystemStartBg.setTexture(tSystemStartBg);    
    BTmanager.LoadButtonMediaData();
};