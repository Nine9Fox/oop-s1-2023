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
    if(!escape_tNormalState.loadFromFile("Texture/escape_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Normal.png"<<endl;
    }


    if(!escape_tSelectState.loadFromFile("Texture/escape_Select.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Select.png"<<endl;
    }
    //escape.setTexture(escape_tSelectState);
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