#include"Flight.h"
#include"SceneManager.h"

Flight::Flight(SceneManager& SCmanager,float x,float y)
{
    State=NormalState;
    textInput_font.loadFromFile("Texture/times-new-roman.ttf");
    position.x=x;
    position.y=y;
    setPosition(position);


    FBT_maps["origin_f"]=new Text();
    FBT_maps["destination_f"]=new Text();
    FBT_maps["o_time_f"]=new Text();
    FBT_maps["f_time_f"]=new Text();
    FBT_maps["price_f"]=new Text();
    FBT_maps["num_f"]=new Text();


    FBT_maps["origin_f"]->setString(SCmanager.BTmanager.TIBT_maps["origin"]->getString());
    FBT_maps["destination_f"]->setString(SCmanager.BTmanager.TIBT_maps["destination"]->getString());
    FBT_maps["o_time_f"]->setString(SCmanager.BTmanager.TIBT_maps["o_time"]->getString());
    FBT_maps["f_time_f"]->setString(SCmanager.BTmanager.TIBT_maps["f_time"]->getString());
    FBT_maps["price_f"]->setString(SCmanager.BTmanager.TIBT_maps["price"]->getString());
    FBT_maps["num_f"]->setString(SCmanager.BTmanager.TIBT_maps["num"]->getString());
    
    FBT_maps["origin_f"]->setPosition(x,y);
    FBT_maps["destination_f"]->setPosition(x+100,y);
    FBT_maps["num_f"]->setPosition(x+200,y);   
    FBT_maps["o_time_f"]->setPosition(x,y+100);
    FBT_maps["f_time_f"]->setPosition(x+100,y+100);
    FBT_maps["price_f"]->setPosition(x+200,y+100);


    for (auto& entry : FBT_maps) {
        entry.second->setFont(textInput_font);
        entry.second->setCharacterSize(24);
        entry.second->setFillColor(sf::Color::Black);
    }
};

void Flight::set_Position(int x,int y)
{
    this->setPosition(x,y);
    FBT_maps["origin_f"]->setPosition(x,y);
    FBT_maps["destination_f"]->setPosition(x+100,y);
    FBT_maps["num_f"]->setPosition(x+200,y);   
    FBT_maps["o_time_f"]->setPosition(x,y+100);
    FBT_maps["f_time_f"]->setPosition(x+100,y+100);
    FBT_maps["price_f"]->setPosition(x+200,y+100);
};

Flight::~Flight()
{

};