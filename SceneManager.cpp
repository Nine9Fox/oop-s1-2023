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

void SceneManager::drawScene_Start(RenderWindow* window)
{
        window->clear();
        window->draw(sSystemStartBg);
        window->draw(BTmanager.userside);
        window->draw(BTmanager.escape);
        window->display();
};

void SceneManager::InitialScene_Start(RenderWindow* window)
{
    window->setFramerateLimit(240);
    BTmanager.userside.setPosition(800,450);    
    BTmanager.escape.setPosition((1618),0);
    SceneState=Scene_Start;
};

void SceneManager::LoadSceneMediaData()
{
    //lord the background of the StartScene
    #pragma region 
    if(!tSystemStartBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemStartBg.png"<<endl;
    }
    sSystemStartBg.setTexture(tSystemStartBg); 
    #pragma endregion

    //lord the background of the UserSearchScene
    #pragma region 
    if(!tSystemUserSearchBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemUserSearchBg.png"<<endl;
    }
    sSystemUserSearchBg.setTexture(tSystemUserSearchBg);
    #pragma endregion
    
    //lord the button texture
    BTmanager.LoadButtonMediaData();
};

void SceneManager::InitialScene_UserSearch(RenderWindow* window)
{   

}; 

void SceneManager::drawScene_UserSearch(RenderWindow* window)
{
    window->clear();
    window->draw(sSystemUserSearchBg);
    window->display();
};
