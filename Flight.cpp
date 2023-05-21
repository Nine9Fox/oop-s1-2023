#include"Flight.h"
#include"SceneManager.h"

Flight::Flight(SceneManager& SCmanager,float x,float y)
{
    State=NormalState;
    textInput_font.loadFromFile("Texture/times-new-roman.ttf");
    position.x=x;
    position.y=y;
    setPosition(1980,1980);


    FBT_maps["origin_f"]=new Text();
    FBT_maps["destination_f"]=new Text();
    FBT_maps["o_time_f"]=new Text();
    FBT_maps["f_time_f"]=new Text();
    FBT_maps["price_f"]=new Text();
    FBT_maps["num_f"]=new Text();
    FBT_maps["year_f"]=new Text();
    FBT_maps["month_f"]=new Text();
    FBT_maps["day_f"]=new Text();


    FBT_maps["origin_f"]->setString(SCmanager.BTmanager.TIBT_maps["origin"]->getString());
    FBT_maps["destination_f"]->setString(SCmanager.BTmanager.TIBT_maps["destination"]->getString());
    FBT_maps["o_time_f"]->setString(SCmanager.BTmanager.TIBT_maps["o_time"]->getString());
    FBT_maps["f_time_f"]->setString(SCmanager.BTmanager.TIBT_maps["f_time"]->getString());
    FBT_maps["price_f"]->setString(SCmanager.BTmanager.TIBT_maps["price"]->getString());
    FBT_maps["num_f"]->setString(SCmanager.BTmanager.TIBT_maps["num"]->getString());
    FBT_maps["year_f"]->setString(SCmanager.BTmanager.TIBT_maps["year"]->getString());
    FBT_maps["month_f"]->setString(SCmanager.BTmanager.TIBT_maps["month"]->getString());
    FBT_maps["day_f"]->setString(SCmanager.BTmanager.TIBT_maps["day"]->getString());
    
    FBT_maps["origin_f"]->setPosition(1980,y+10);
    FBT_maps["destination_f"]->setPosition(x+300,y+10);
    FBT_maps["num_f"]->setPosition(x+60,y+120);   
    FBT_maps["o_time_f"]->setPosition(x+95,y+70);
    FBT_maps["f_time_f"]->setPosition(x+300,y+70);
    FBT_maps["price_f"]->setPosition(x+230,y+110);


    for (auto& entry : FBT_maps) {
        entry.second->setFont(textInput_font);
        entry.second->setCharacterSize(24);
        entry.second->setFillColor(sf::Color::Black);
    }
};

void Flight::set_Position(int x,int y)
{
    this->setPosition(x,y);
    FBT_maps["origin_f"]->setPosition(x+105,y+15);
    FBT_maps["destination_f"]->setPosition(x+300,y+15);
    FBT_maps["num_f"]->setPosition(x+60,y+115);   
    FBT_maps["o_time_f"]->setPosition(x+100,y+70);
    FBT_maps["f_time_f"]->setPosition(x+310,y+70);
    FBT_maps["price_f"]->setPosition(x+240,y+115);
};

Flight::~Flight()
{

};