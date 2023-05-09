#include"ButtonManager.h"
#include"System.h"

ButtonManager::ButtonManager()
{
    escape=Button();
};

ButtonManager::~ButtonManager()
{

};

void ButtonManager::LoadButtonMediaData()
{
    //lord the texture of the escape
    #pragma region 
    if(!escape_tNormalState.loadFromFile("Texture/escape_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Normal.png"<<endl;
    }
    if(!escape_tSelectState.loadFromFile("Texture/escape_Select.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Select.png"<<endl;
    }
    #pragma endregion
    
    //lord the texture of the userside
    #pragma region 
    if(!userside_tNormalState.loadFromFile("Texture/escape_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Normal.png"<<endl;
    }
    if(!userside_tSelectState.loadFromFile("Texture/escape_Select.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Select.png"<<endl;
    }
    #pragma endregion

};

void ButtonManager::escape_Input(RenderWindow* window)
{
    if(escape.State==SelectState)
    {
        escape.setTexture(escape_tSelectState);
    }
    if(escape.State==NormalState)
    {
        escape.setTexture(escape_tNormalState);            
    }
    if(escape.State==PressState)
    {
        window->close();            
    }
};

void ButtonManager::userside_Input(RenderWindow* window,SceneManager* SCmanager)
{
    if(userside.State==SelectState)
    {
        userside.setTexture(userside_tSelectState);
    }
    if(userside.State==NormalState)
    {
        userside.setTexture(userside_tNormalState);            
    }
    if(userside.State==PressState)
    {
        SCmanager->SceneState=Scene_UserSearch;
        SCmanager->BTmanager.userside.setPosition(1980,1980);    
        SCmanager->BTmanager.escape.setPosition(1980,1980);        
    }
    
};