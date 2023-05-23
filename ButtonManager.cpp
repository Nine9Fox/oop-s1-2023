#include"ButtonManager.h"
#include"System.h"

ButtonManager::ButtonManager()
{
    //escape=Button();
    

};

ButtonManager::~ButtonManager()
{

};

//new Button
void ButtonManager::LoadButtonMediaData()
{
    //lord the texture of the escape
    #pragma region 
    if(!escape.tNormalState.loadFromFile("Texture/escape_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Normal.png"<<endl;
    }
    if(!escape.tSelectState.loadFromFile("Texture/escape_Select.png"))
    {
        cout<< "DO NOT FIND Texture/escape_Select.png"<<endl;
    }
    escape.setTexture(escape.tNormalState);
    #pragma endregion
    
    //lord the texture of the userside
    #pragma region 
    if(!userside.tNormalState.loadFromFile("Texture/userside_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/userside_Normal.png"<<endl;
    }
    if(!userside.tSelectState.loadFromFile("Texture/userside_Select.png"))
    {
        cout<< "DO NOT FIND Texture/userside_Select.png"<<endl;
    }
    userside.setTexture(userside.tNormalState);
    #pragma endregion

    //lord the texture of the textInput and font
    //new textInput
    #pragma region 
    
    
    TIB_maps["origin_US"]->tNormalState.loadFromFile("Texture/textInput_tOrigin_US.png");
    TIB_maps["destination_US"]->tNormalState.loadFromFile("Texture/textInput_tDestination_US.png");

    TIB_maps["year_US"]->tNormalState.loadFromFile("Texture/textInput_tYear_US.png");
    TIB_maps["month_US"]->tNormalState.loadFromFile("Texture/textInput_tMonth_US.png");
    TIB_maps["day_US"]->tNormalState.loadFromFile("Texture/textInput_tDay_US.png");

    TIB_maps["origin"]->tNormalState.loadFromFile("Texture/textInput_tOrigin.png");
    TIB_maps["destination"]->tNormalState.loadFromFile("Texture/textInput_tDestination.png");
    TIB_maps["month"]->tNormalState.loadFromFile("Texture/textInput_tMonth.png");
    TIB_maps["day"]->tNormalState.loadFromFile("Texture/textInput_tDay.png");
    TIB_maps["year"]->tNormalState.loadFromFile("Texture/textInput_tYear.png");
    TIB_maps["price"]->tNormalState.loadFromFile("Texture/textInput_tPrice.png");
    TIB_maps["o_time"]->tNormalState.loadFromFile("Texture/textInput_tO_time.png");
    TIB_maps["f_time"]->tNormalState.loadFromFile("Texture/textInput_tF_time.png");
    TIB_maps["num"]->tNormalState.loadFromFile("Texture/textInput_tNum.png");

    TIB_maps["origin_US"]->setTexture(TIB_maps["origin_US"]->tNormalState);
    TIB_maps["destination_US"]->setTexture(TIB_maps["destination_US"]->tNormalState);

    TIB_maps["year_US"]->setTexture(TIB_maps["year_US"]->tNormalState);
    TIB_maps["month_US"]->setTexture(TIB_maps["month_US"]->tNormalState);
    TIB_maps["day_US"]->setTexture(TIB_maps["day_US"]->tNormalState);

    TIB_maps["origin"]->setTexture(TIB_maps["origin"]->tNormalState);
    TIB_maps["destination"]->setTexture(TIB_maps["destination"]->tNormalState);
    TIB_maps["month"]->setTexture(TIB_maps["month"]->tNormalState);
    TIB_maps["day"]->setTexture(TIB_maps["day"]->tNormalState);
    TIB_maps["year"]->setTexture(TIB_maps["year"]->tNormalState);
    TIB_maps["price"]->setTexture(TIB_maps["price"]->tNormalState);
    TIB_maps["o_time"]->setTexture(TIB_maps["o_time"]->tNormalState);
    TIB_maps["f_time"]->setTexture(TIB_maps["f_time"]->tNormalState);
    TIB_maps["num"]->setTexture(TIB_maps["num"]->tNormalState);



    textInput_font.loadFromFile("Texture/times-new-roman.ttf");
    for (auto& entry : TIBT_maps) {
        entry.second->setFont(textInput_font);
        entry.second->setCharacterSize(24);
        entry.second->setFillColor(sf::Color::Black);
    }
    #pragma endregion

    //lord the texture of the search
    #pragma region
    if(!search.tNormalState.loadFromFile("Texture/search_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/search_Normal.png"<<endl;
    }
    if(!search.tSelectState.loadFromFile("Texture/search_Select.png"))
    {
        cout<< "DO NOT FIND Texture/search_Select.png"<<endl;
    }
    search.setTexture(search.tNormalState);
    #pragma endregion

    //lord the texture of the airline
    #pragma region 
    if(!airline.tNormalState.loadFromFile("Texture/airline_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/airline_Normal.png"<<endl;
    }
    if(!airline.tSelectState.loadFromFile("Texture/airline_Select.png"))
    {
        cout<< "DO NOT FIND Texture/airline_Select.png"<<endl;
    }
    airline.setTexture(airline.tNormalState);
    #pragma endregion

    //lord the texture of the pushFlight
    #pragma region 
    if(!pushFlight.tNormalState.loadFromFile("Texture/pushFlight_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/pushFlight_Normal.png"<<endl;
    }
    if(!pushFlight.tSelectState.loadFromFile("Texture/pushFlight_Select.png"))
    {
        cout<< "DO NOT FIND Texture/pushFlight_Select.png"<<endl;
    }
    pushFlight.setTexture(pushFlight.tNormalState);
    #pragma endregion

    //lord the texture of the flight
    #pragma region 
    if(!flight_tNormalState.loadFromFile("Texture/flight_tNormalState.png"))
    {
        cout<< "DO NOT FIND Texture/flight_tNormalState.png"<<endl;
    }
    if(!flight_tSelectState.loadFromFile("Texture/flight_tSelectState.png"))
    {
        cout<< "DO NOT FIND Texture/flight_tSelectState.png"<<endl;
    }
    textInput_font.loadFromFile("Texture/times-new-roman.ttf");
    #pragma endregion

    //lord the texture of the checkpay
    #pragma region 
    if(!checkpay.tNormalState.loadFromFile("Texture/checkpay_Normal.png"))
    {
        cout<< "DO NOT FIND Texture/checkpay_Normal.png"<<endl;
    }
    if(!checkpay.tSelectState.loadFromFile("Texture/checkpay_Select.png"))
    {
        cout<< "DO NOT FIND Texture/checkpay_Select.png"<<endl;
    }
    checkpay.setTexture(checkpay.tNormalState);
    #pragma endregion

    //lord the pay;
    #pragma region 
    if(!Pay.tNormalState.loadFromFile("Texture/Pay.tNormalState.png"))
    {
        cout<< "DO NOT FIND Texture/Pay.tNormalState.png"<<endl;
    }
    Pay.setTexture(Pay.tNormalState); 
    #pragma endregion
};

//Escape button
void ButtonManager::escape_Input(RenderWindow& window,SceneManager& SCmanager)
{
    if(escape.State==SelectState)
    {
        escape.setTexture(escape.tSelectState);
    }
    if(escape.State==NormalState)
    {
        escape.setTexture(escape.tNormalState);            
    }
    if(escape.State==PressState)
    {
        if(SCmanager.SceneState==Scene_Start)
        {
            window.close();             
        }
        if(SCmanager.SceneState==Scene_UserSearch)
        {
            SCmanager.SceneState=Scene_Start;
            for (auto& pair : TIBS_maps) {
            pair.second = "";
            } 
        }
        if(SCmanager.SceneState==Scene_FlightList)
        {
            SCmanager.SceneState=Scene_UserSearch;
            for (auto& pair : TIBS_maps) {
            pair.second = "";
            } 
        }
        if(SCmanager.SceneState==Scene_AirLine)
        {
            SCmanager.SceneState=Scene_Start;
            for (auto& pair : TIBS_maps) {
            pair.second = "";
            } 
        }
        if(SCmanager.SceneState==Scene_Checkpay)
        {
            SCmanager.SceneState=Scene_FlightList;
            escape.setPosition(1618,0);
        }

        if(SCmanager.SceneState==Scene_FinalPay)
        {
            SCmanager.SceneState=Scene_FlightList;
            escape.setPosition(1618,0);
        }
           
    }

};
//User input
void ButtonManager::userside_Input(RenderWindow& window,SceneManager& SCmanager)
{
    if(userside.State==SelectState)
    {
        userside.setTexture(userside.tSelectState);
    }
    if(userside.State==NormalState)
    {
        userside.setTexture(userside.tNormalState);            
    }
    if(userside.State==PressState)
    {
        SCmanager.SceneState=Scene_UserSearch;    
    }
    
};

void ButtonManager::textInput_Input(Event& e,string pn)
{
    regex e_num("([[:d:]]{1,4})");
    regex e_time("([0-9:]{1,5})");
    regex e_place("([[:w:]]{1,8})");
    regex e_MD("([[:d:]]{1,2})");
    
    std::smatch match;

    TIBT_maps[pn]->setString(TIBS_maps[pn]);
    if(TIB_maps[pn]->State==NormalState)
    {
        TIB_maps[pn]->setTexture(TIB_maps[pn]->tNormalState);            
    }
    if(TIB_maps[pn]->State==PressState)
    {
        TIBA_maps[pn]=true;
    }
    if(TIB_maps[pn]->State==NormalState&&e.type==sf::Event::MouseButtonPressed)
    {
        TIBA_maps[pn]=false;
    }

    if (e.key.code==sf::Keyboard::BackSpace&&TIBA_maps[pn]==true)
    { 
        TIBS_maps[pn] = TIBS_maps[pn].substr(0, TIBS_maps[pn].size()-0.5);
        std::string str=TIBS_maps[pn];
        if (pn=="num"||pn=="price"||pn=="year"||pn=="month"||pn=="day"||pn=="year_US"||pn=="month_US"||pn=="day_US")
        {
            std::regex_search(str,match,e_num);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }

        if(pn=="origin"||pn=="destination"||pn=="origin_US"||pn=="destination_US")
        {
            std::regex_search(str,match,e_place);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }

        if(pn=="o_time"||pn=="f_time")
        {
            std::regex_search(str,match,e_time);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }
    }

    if (TIBS_maps[pn].size() < 12&&e.type==Event::KeyPressed&&e.key.code!=sf::Keyboard::BackSpace&&TIBA_maps[pn]==true)
    {
        //wordInput.
        #pragma region
        if(e.key.code==sf::Keyboard::A)
        {
            TIBS_maps[pn] +="a";
        }
        if(e.key.code==sf::Keyboard::B)
        {
            TIBS_maps[pn] +="b";
        }
        if(e.key.code==sf::Keyboard::C)
        {
            TIBS_maps[pn] +="c";
        }
        if(e.key.code==sf::Keyboard::D)
        {
            TIBS_maps[pn] +="d";
        }
        if(e.key.code==sf::Keyboard::E)
        {
            TIBS_maps[pn] +="e";
        }
        if(e.key.code==sf::Keyboard::F)
        {
            TIBS_maps[pn] +="f";
        }
        if(e.key.code==sf::Keyboard::G)
        {
            TIBS_maps[pn] +="g";
        }
        if(e.key.code==sf::Keyboard::H)
        {
            TIBS_maps[pn] +="h";
        }
        if(e.key.code==sf::Keyboard::I)
        {
            TIBS_maps[pn] +="i";
        }
        if(e.key.code==sf::Keyboard::J)
        {
            TIBS_maps[pn] +="j";
        }
        if(e.key.code==sf::Keyboard::K)
        {
            TIBS_maps[pn] +="k";
        }
        if(e.key.code==sf::Keyboard::L)
        {
            TIBS_maps[pn] +="l";
        }
        if(e.key.code==sf::Keyboard::M)
        {
            TIBS_maps[pn] +="m";
        }
        if(e.key.code==sf::Keyboard::N)
        {
            TIBS_maps[pn] +="n";
        }
        if(e.key.code==sf::Keyboard::O)
        {
            TIBS_maps[pn] +="o";
        }
        if(e.key.code==sf::Keyboard::P)
        {
            TIBS_maps[pn] +="p";
        }
        if(e.key.code==sf::Keyboard::Q)
        {
            TIBS_maps[pn] +="q";
        }
        if(e.key.code==sf::Keyboard::R)
        {
            TIBS_maps[pn] +="r";
        }
        if(e.key.code==sf::Keyboard::S)
        {
            TIBS_maps[pn] +="s";
        }
        if(e.key.code==sf::Keyboard::T)
        {
            TIBS_maps[pn] +="t";
        }
        if(e.key.code==sf::Keyboard::U)
        {
            TIBS_maps[pn] +="u";
        }
        if(e.key.code==sf::Keyboard::V)
        {
            TIBS_maps[pn] +="v";
        }
        if(e.key.code==sf::Keyboard::W)
        {
            TIBS_maps[pn] +="w";
        }
        if(e.key.code==sf::Keyboard::X)
        {
            TIBS_maps[pn] +="x";
        }
        if(e.key.code==sf::Keyboard::Y)
        {
            TIBS_maps[pn] +="y";
        }
        if(e.key.code==sf::Keyboard::Z)
        {
            TIBS_maps[pn] +="z";
        }
        if(e.key.code==sf::Keyboard::Num0||e.key.code==sf::Keyboard::Numpad0)
        {
            TIBS_maps[pn] +="0";
        }
        if(e.key.code==sf::Keyboard::Num1||e.key.code==sf::Keyboard::Numpad1)
        {
            TIBS_maps[pn] +="1";
        }
        if(e.key.code==sf::Keyboard::Num2||e.key.code==sf::Keyboard::Numpad2)
        {
            TIBS_maps[pn] +="2";
        }
        if(e.key.code==sf::Keyboard::Num3||e.key.code==sf::Keyboard::Numpad3)
        {
            TIBS_maps[pn] +="3";
        }
        if(e.key.code==sf::Keyboard::Num4||e.key.code==sf::Keyboard::Numpad4)
        {
            TIBS_maps[pn] +="4";
        }
        if(e.key.code==sf::Keyboard::Num5||e.key.code==sf::Keyboard::Numpad5)
        {
            TIBS_maps[pn] +="5";
        }
        if(e.key.code==sf::Keyboard::Num6||e.key.code==sf::Keyboard::Numpad6)
        {
            TIBS_maps[pn] +="6";
        }
        if(e.key.code==sf::Keyboard::Num7||e.key.code==sf::Keyboard::Numpad7)
        {
            TIBS_maps[pn] +="7";
        }
        if(e.key.code==sf::Keyboard::Num8||e.key.code==sf::Keyboard::Numpad8)
        {
            TIBS_maps[pn] +="8";
        }
        if(e.key.code==sf::Keyboard::Num9||e.key.code==sf::Keyboard::Numpad9)
        {
            TIBS_maps[pn] +="9";
        }
        if(e.key.code==sf::Keyboard::SemiColon)
        {
            TIBS_maps[pn] +=":";
        }
        #pragma endregion
        //Check input locate
        std::string str=TIBS_maps[pn];
        if (pn=="num"||pn=="price"||pn=="year"||pn=="year_US")
        {
            std::regex_search(str,match,e_num);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }

        if(pn=="origin"||pn=="destination"||pn=="origin_US"||pn=="destination_US")
        {
            std::regex_search(str,match,e_place);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }

        if(pn=="o_time"||pn=="f_time")
        {
            std::regex_search(str,match,e_time);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }

        if(pn=="month_US"||pn=="day_US"||pn=="month"||pn=="day")
        {
            std::regex_search(str,match,e_MD);
            TIBT_maps[pn]->setString(match.str());
            TIBS_maps[pn]=match.str();
        }



        
    }

};

void ButtonManager::search_Input(RenderWindow& window,SceneManager& SCmanager)
{
    if(search.State==SelectState)
    {
        search.setTexture(search.tSelectState);
    }
    if(search.State==NormalState)
    {
        search.setTexture(search.tNormalState);            
    }
    if(search.State==PressState)
    {
        SCmanager.SceneState=Scene_FlightList;
    }
};

void ButtonManager::airline_Input(RenderWindow& window,SceneManager& SCmanager)
{
    if(airline.State==SelectState)
    {
        airline.setTexture(airline.tSelectState);
    }
    if(airline.State==NormalState)
    {
        airline.setTexture(airline.tNormalState);            
    }
    if(airline.State==PressState)
    {
        SCmanager.SceneState=Scene_AirLine;
    }
};

void ButtonManager::pushFlight_Input(RenderWindow& window,SceneManager& SCmanager)
{
    
    if(pushFlight.State==SelectState)
    {
        pushFlight.setTexture(pushFlight.tSelectState);
    }
    if(pushFlight.State==NormalState)
    {
        pushFlight.setTexture(pushFlight.tNormalState);            
    }
    if(pushFlight.State==PressState)
    {
        for(int i=0;i<10;i++)
        {
            if(flight[i]==nullptr)
            {
                flight[i]=new Flight(SCmanager,200,200*i+200);
                flight[i]->setTexture(flight_tNormalState);
                for (auto& pair : TIBS_maps) {
                pair.second = "";
                } 
                break;
            }
        }
    }
};

void ButtonManager::flight_Input(RenderWindow& window,SceneManager& SCmanager)
{

    for(int i=0;i<100;i++)
    {
        if(flight[i]!=nullptr)
        {
            if(flight[i]->FBT_maps["origin_f"]->getString()==SCmanager.BTmanager.TIBT_maps["origin_US"]->getString()
            &&flight[i]->FBT_maps["destination_f"]->getString()==SCmanager.BTmanager.TIBT_maps["destination_US"]->getString())
            {
                if(flight[i]->State==SelectState)
                {
                    flight[i]->setTexture(flight_tSelectState);
                }
                if(flight[i]->State==NormalState)
                {
                    flight[i]->setTexture(flight_tNormalState);            
                }
                if(flight[i]->State==PressState)
                {
                        isChoose=i;
                        SCmanager.SceneState=Scene_Checkpay;
                        escape.setPosition(800,400);                        
                }

            }
        };


    }

}

void ButtonManager::checkpay_Input(RenderWindow& window,SceneManager& SCmanager)
{
    if(checkpay.State==SelectState)
    {
        checkpay.setTexture(checkpay.tSelectState);
    }
    if(checkpay.State==NormalState)
    {
        checkpay.setTexture(checkpay.tNormalState);            
    }
    if(checkpay.State==PressState)
    {
        if(flight[isChoose]!=nullptr)
        {
                    string a=flight[isChoose]->FBT_maps["num_f"]->getString();
                    int num =std::stoi(a);
                    num=num-1;
                    a=std::to_string(num);
                    flight[isChoose]->FBT_maps["num_f"]->setString(a);
                    if(std::stoi(a)<=0)
                    {
                        flight[isChoose]=nullptr;
                    }
        }
        escape.setPosition(600,400);
        SCmanager.SceneState=Scene_FinalPay;
    }
};


