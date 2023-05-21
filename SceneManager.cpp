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

//new Scene
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
    
    //lord the background of the FlightListScene
    #pragma region 
    if(!tSystemFlightListBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemFlightListBg.png"<<endl;
    }
    sSystemFlightListBg.setTexture(tSystemFlightListBg);
    #pragma endregion

    //lord the background of the AirLineScene
    #pragma region 
    if(!tSystemAirLineBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemAirLineBg.png"<<endl;
    }
    sSystemAirLineBg.setTexture(tSystemAirLineBg);
    #pragma endregion

    //lord the background of the CheckpayScene
    #pragma region 
    if(!tSystemCheckpayBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemCheckpayBg.png"<<endl;
    }
    sSystemCheckpayBg.setTexture(tSystemCheckpayBg); 
    #pragma endregion

    //lord the background of the FinalPayScene
    #pragma region 
    if(!tSystemFinalPayBg.loadFromFile("Texture/tSystemStartBg.png"))
    {
        cout<< "DO NOT FIND Texture/tSystemFinalPayBg.png"<<endl;
    }
    sSystemFinalPayBg.setTexture(tSystemFinalPayBg); 
    #pragma endregion

    //lord the button texture
    BTmanager.LoadButtonMediaData();
};



//Scene_Start
//new Button
void SceneManager::InitialScene_Start(RenderWindow& window)
{
    window.setFramerateLimit(30);
    BTmanager.userside.setPosition(400,450);    
    BTmanager.escape.setPosition((1618),0);
    BTmanager.airline.setPosition(800,450); 
    SceneState=Scene_Start;
    for(int i=0;i<100;i++)
    {
        BTmanager.flight[i]=nullptr;
    }
};
//new Button
void SceneManager::drawScene_Start(RenderWindow& window)
{
        window.clear();
        window.draw(sSystemStartBg);
        window.draw(BTmanager.userside);
        window.draw(BTmanager.escape);
        window.draw(BTmanager.airline);
        window.display();
};


//Scene_UserSearch
//new Button
void SceneManager::InitialScene_UserSearch()
{   
    BTmanager.TIB_maps["origin_US"]=new Button();
    BTmanager.TIB_maps["destination_US"]=new Button();
    BTmanager.TIB_maps["month_US"]=new Button();
    BTmanager.TIB_maps["day_US"]=new Button();
    BTmanager.TIB_maps["year_US"]=new Button();

    BTmanager.TIBA_maps["origin_US"]=false;
    BTmanager.TIBA_maps["destination_US"]=false;
    BTmanager.TIBA_maps["month_US"]=false;
    BTmanager.TIBA_maps["day_US"]=false;
    BTmanager.TIBA_maps["year_US"]=false;

    BTmanager.TIBT_maps["origin_US"]=new Text();
    BTmanager.TIBT_maps["destination_US"]=new Text();
    BTmanager.TIBT_maps["month_US"]=new Text();
    BTmanager.TIBT_maps["day_US"]=new Text();
    BTmanager.TIBT_maps["year_US"]=new Text();

    BTmanager.TIB_maps["origin_US"]->setPosition(580,200);
    BTmanager.TIBT_maps["origin_US"]->setPosition(639,207);
    BTmanager.TIB_maps["destination_US"]->setPosition(880,200);
    BTmanager.TIBT_maps["destination_US"]->setPosition(920,207);

    
    BTmanager.TIB_maps["year_US"]->setPosition(380,300);    
    BTmanager.TIB_maps["month_US"]->setPosition(680,300);
    BTmanager.TIB_maps["day_US"]->setPosition(980,300);

    BTmanager.TIBT_maps["year_US"]->setPosition(440,300);
    BTmanager.TIBT_maps["month_US"]->setPosition(750,300);
    BTmanager.TIBT_maps["day_US"]->setPosition(1040,300);


    BTmanager.escape.setPosition((1618),0);
    BTmanager.search.setPosition(760,500);

}; 
//new Button
void SceneManager::drawScene_UserSearch(RenderWindow& window)
{
    window.clear();
    window.draw(sSystemUserSearchBg);
    window.draw(BTmanager.escape);
    window.draw(BTmanager.search);
    window.draw(*BTmanager.TIB_maps["origin_US"]);
    window.draw(*BTmanager.TIB_maps["destination_US"]);
    window.draw(*BTmanager.TIBT_maps["origin_US"]);
    window.draw(*BTmanager.TIBT_maps["destination_US"]);

    window.draw(*BTmanager.TIB_maps["year_US"]);
    window.draw(*BTmanager.TIBT_maps["year_US"]);
    window.draw(*BTmanager.TIB_maps["month_US"]);
    window.draw(*BTmanager.TIBT_maps["month_US"]);
    window.draw(*BTmanager.TIB_maps["day_US"]);
    window.draw(*BTmanager.TIBT_maps["day_US"]);
    window.display();
};



//Scene_FlightList
void SceneManager::InitialScene_FlightList()
{
    //BTmanager.TIBT_maps["origin_f"]=new Text();
    BTmanager.escape.setPosition((1618),0);

};

void SceneManager::drawScene_FlightList(RenderWindow& window)
{
    window.clear();
    window.draw(sSystemFlightListBg);
    window.draw(BTmanager.escape);
    int j=0;
    for(int i=0;i<100;i++)
    {
        if(BTmanager.flight[i]!=nullptr)
        {
            if(BTmanager.flight[i]->FBT_maps["origin_f"]->getString()==BTmanager.TIBT_maps["origin_US"]->getString()
            &&BTmanager.flight[i]->FBT_maps["destination_f"]->getString()==BTmanager.TIBT_maps["destination_US"]->getString()
            &&BTmanager.flight[i]->FBT_maps["year_f"]->getString()==BTmanager.TIBT_maps["year_US"]->getString()
            &&BTmanager.flight[i]->FBT_maps["month_f"]->getString()==BTmanager.TIBT_maps["month_US"]->getString()
            &&BTmanager.flight[i]->FBT_maps["day_f"]->getString()==BTmanager.TIBT_maps["day_US"]->getString()
            )
            {
                window.draw(*BTmanager.flight[i]);
                if(j<3)
                {
                    BTmanager.flight[i]->set_Position(200,200*j+200);                   
                }
                if(j>=3&&j<6)
                {
                    BTmanager.flight[i]->set_Position(650,200*(j-3)+200); 
                }
                if(j>=6)
                {
                    BTmanager.flight[i]->set_Position(1100,200*(j-6)+200); 
                }
                j++;
                window.draw(*BTmanager.flight[i]->FBT_maps["origin_f"]);
                window.draw(*BTmanager.flight[i]->FBT_maps["destination_f"]);
                window.draw(*BTmanager.flight[i]->FBT_maps["o_time_f"]);
                window.draw(*BTmanager.flight[i]->FBT_maps["f_time_f"]);
                window.draw(*BTmanager.flight[i]->FBT_maps["price_f"]);
                window.draw(*BTmanager.flight[i]->FBT_maps["num_f"]);                
            };


        }

    }
    
    window.display();
};


//Scene_AirLine
void SceneManager::InitialScene_AirLine()
{
    BTmanager.TIB_maps["origin"]=new Button();
    BTmanager.TIB_maps["destination"]=new Button();
    BTmanager.TIB_maps["month"]=new Button();
    BTmanager.TIB_maps["day"]=new Button();
    BTmanager.TIB_maps["year"]=new Button();
    BTmanager.TIB_maps["price"]=new Button();
    BTmanager.TIB_maps["o_time"]=new Button();
    BTmanager.TIB_maps["f_time"]=new Button();
    BTmanager.TIB_maps["num"]=new Button();

    BTmanager.TIBA_maps["origin"]=false;
    BTmanager.TIBA_maps["destination"]=false;
    BTmanager.TIBA_maps["month"]=false;
    BTmanager.TIBA_maps["day"]=false;
    BTmanager.TIBA_maps["year"]=false;
    BTmanager.TIBA_maps["price"]=false;
    BTmanager.TIBA_maps["o_time"]=false;
    BTmanager.TIBA_maps["f_time"]=false;
    BTmanager.TIBA_maps["num"]=false;

    BTmanager.TIBT_maps["origin"]=new Text();
    BTmanager.TIBT_maps["destination"]=new Text();
    BTmanager.TIBT_maps["month"]=new Text();
    BTmanager.TIBT_maps["day"]=new Text();
    BTmanager.TIBT_maps["year"]=new Text();
    BTmanager.TIBT_maps["price"]=new Text();
    BTmanager.TIBT_maps["o_time"]=new Text();
    BTmanager.TIBT_maps["f_time"]=new Text();
    BTmanager.TIBT_maps["num"]=new Text();

    BTmanager.TIB_maps["origin"]->setPosition(200,200);
    BTmanager.TIB_maps["destination"]->setPosition(600,200);
    BTmanager.TIB_maps["num"]->setPosition(400,200);
    BTmanager.TIB_maps["month"]->setPosition(400,400);
    BTmanager.TIB_maps["day"]->setPosition(600,400);
    BTmanager.TIB_maps["year"]->setPosition(200,400);
    BTmanager.TIB_maps["price"]->setPosition(600,600);
    BTmanager.TIB_maps["o_time"]->setPosition(200,600);
    BTmanager.TIB_maps["f_time"]->setPosition(400,600);
    

    BTmanager.TIBT_maps["origin"]->setPosition(300,205);
    BTmanager.TIBT_maps["destination"]->setPosition(710,205);
    BTmanager.TIBT_maps["num"]->setPosition(448,205);    
    BTmanager.TIBT_maps["month"]->setPosition(459,405);
    BTmanager.TIBT_maps["day"]->setPosition(640,405);
    BTmanager.TIBT_maps["year"]->setPosition(245,405);
    BTmanager.TIBT_maps["price"]->setPosition(649,605);
    BTmanager.TIBT_maps["o_time"]->setPosition(282,605);
    BTmanager.TIBT_maps["f_time"]->setPosition(500,605);


    BTmanager.pushFlight.setPosition(300,800);
    BTmanager.escape.setPosition((1618),0);
}; 

void SceneManager::drawScene_AirLine(RenderWindow& window)
{
    window.clear();
    window.draw(sSystemAirLineBg);
    window.draw(BTmanager.escape);
    window.draw(BTmanager.pushFlight);

    window.draw(*BTmanager.TIB_maps["origin"]);
    window.draw(*BTmanager.TIB_maps["destination"]);
    window.draw(*BTmanager.TIB_maps["month"]);
    window.draw(*BTmanager.TIB_maps["day"]);
    window.draw(*BTmanager.TIB_maps["year"]);
    window.draw(*BTmanager.TIB_maps["price"]);
    window.draw(*BTmanager.TIB_maps["o_time"]);
    window.draw(*BTmanager.TIB_maps["f_time"]);
    window.draw(*BTmanager.TIB_maps["num"]);


    window.draw(*BTmanager.TIBT_maps["origin"]);
    window.draw(*BTmanager.TIBT_maps["destination"]);
    window.draw(*BTmanager.TIBT_maps["month"]);
    window.draw(*BTmanager.TIBT_maps["day"]);
    window.draw(*BTmanager.TIBT_maps["year"]);
    window.draw(*BTmanager.TIBT_maps["price"]);
    window.draw(*BTmanager.TIBT_maps["o_time"]);
    window.draw(*BTmanager.TIBT_maps["f_time"]);
    window.draw(*BTmanager.TIBT_maps["num"]);


    window.display();
};


//Scene_Checkpay
void SceneManager::InitialScene_Checkpay()
{
    BTmanager.checkpay.setPosition((400),400);

}; 

void SceneManager::drawScene_Checkpay(RenderWindow& window)
{
    //cout<<isPay<<endl;
    window.clear();
    window.draw(sSystemCheckpayBg);
    window.draw(BTmanager.escape);
    window.draw(BTmanager.checkpay);       
    window.display();
};

//Scene_FinalPay
void SceneManager::InitialScene_FinalPay()
{

    BTmanager.Pay.setPosition(600,200);
}; 

void SceneManager::drawScene_FinalPay(RenderWindow& window)
{
    window.clear();
    BTmanager.escape.setPosition((600),400);
    window.draw(sSystemCheckpayBg);
    window.draw(BTmanager.escape);
    window.draw(BTmanager.Pay);
    window.display();

    
};

