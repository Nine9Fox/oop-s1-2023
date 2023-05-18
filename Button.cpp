#include"Button.h"
Button::Button()
{
    State=NormalState;
};
Button::~Button()
{

};

void Button::checkMouse(Vector2i mouse,Event event)
{
    if ((mouse.x > getPosition().x && mouse.x < getPosition().x + getTexture()->getSize().x) &&
        (mouse.y > getPosition().y && mouse.y < getPosition().y + getTexture()->getSize().y))
        {
            
            State=SelectState;
            if(event.type == Event::EventType::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
            {
                cout<<"check"<<endl;
                State=PressState;
            }
            if(event.type == Event::EventType::MouseButtonReleased && event.mouseButton.button == Mouse::Left)
            {
                if(State==PressState)
                {
                    State=ReleaseState;                    
                }
            }
        }else
        {
            //cout<<"check"<<endl;
            State=NormalState;
        }
};