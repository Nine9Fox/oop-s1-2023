#include"System.h"
#include"SceneManager.h"
#include"ButtonManager.h"

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
    SCmanager.InitialScene_Start(window);
    SCmanager.InitialScene_UserSearch();  
    SCmanager.InitialScene_AirLine();   
    SCmanager.InitialScene_FlightList();
    SCmanager.InitialScene_Checkpay();
    SCmanager.LoadSceneMediaData();
};

void System::Run()
{
    SCmanager.SceneState=Scene_Start;
    Initial();
    //std::cout << "Please press Enter to continue...";
    //std::cin.get();
    sleep(milliseconds(100));
    while (window.isOpen())
    {
        Input();
        drawScenes();   
    };



    for (auto& entry : SCmanager.BTmanager.TIB_maps) {
        delete entry.second;  
    }
    SCmanager.BTmanager.TIB_maps.clear();  

    SCmanager.BTmanager.TIBA_maps.clear(); 

    for (auto& entry : SCmanager.BTmanager.TIBT_maps) {
        delete entry.second; 
    }
    SCmanager.BTmanager.TIBT_maps.clear(); 


};


//new Scene
void System::drawScenes()
{ 

    if(SCmanager.SceneState==Scene_Start)
    {
        //cout<<"Scene1"<<endl;
        SCmanager.drawScene_Start(window);
    }

    if(SCmanager.SceneState==Scene_UserSearch)
    {
        //cout<<"Scene2"<<endl;
        SCmanager.drawScene_UserSearch(window);
    }

    if(SCmanager.SceneState==Scene_FlightList)
    {
        //cout<<"Scene3"<<endl;
        SCmanager.drawScene_FlightList(window);
    }

    if(SCmanager.SceneState==Scene_AirLine)
    {
        //cout<<"Scene4"<<endl;
        SCmanager.drawScene_AirLine(window);
    }

    if(SCmanager.SceneState==Scene_Checkpay)
    {
        cout<<"Scene5"<<endl;
        //SCmanager.drawScene_Start(window);
        SCmanager.drawScene_Checkpay(window);
    }

};

//new Scene
void System::Input()
{
    if(SCmanager.SceneState==Scene_Start)
    {
        Input_Start();
    }

    if(SCmanager.SceneState==Scene_UserSearch)
    {
        Input_UserSearch();
    }

    if(SCmanager.SceneState==Scene_FlightList)
    {
        Input_FlightList();
    }

    if(SCmanager.SceneState==Scene_AirLine)
    {
        Input_AirLine();
    }

    if(SCmanager.SceneState==Scene_Checkpay)
    {
        Input_Checkpay();
    }

};

//new Button
void System::Input_Start()
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
        SCmanager.BTmanager.airline.checkMouse(mousePosition,event);

        SCmanager.BTmanager.escape_Input(window,SCmanager);
        SCmanager.BTmanager.userside_Input(window,SCmanager);
        SCmanager.BTmanager.airline_Input(window,SCmanager);
    }  
};

//new Button
void System::Input_UserSearch()
{
    sf::Event event;
    Vector2i mousePosition=Mouse::getPosition(window);
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();            
        }
        SCmanager.BTmanager.TIB_maps["origin_US"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["destination_US"]->checkMouse(mousePosition,event);

        SCmanager.BTmanager.textInput_Input(event,"origin_US");
        SCmanager.BTmanager.textInput_Input(event,"destination_US");


        SCmanager.BTmanager.escape.checkMouse(mousePosition,event);
        SCmanager.BTmanager.search.checkMouse(mousePosition,event);

        SCmanager.BTmanager.escape_Input(window,SCmanager);
        SCmanager.BTmanager.search_Input(window,SCmanager);

    }  
};

//new Button
void System::Input_FlightList()
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

        for(int i=0;i<10;i++)
        {
            if(SCmanager.BTmanager.flight[i]!=nullptr)
            {
                if(SCmanager.BTmanager.flight[i]->FBT_maps["origin_f"]->getString()==SCmanager.BTmanager.TIBT_maps["origin_US"]->getString()
                &&SCmanager.BTmanager.flight[i]->FBT_maps["destination_f"]->getString()==SCmanager.BTmanager.TIBT_maps["destination_US"]->getString())
                {
                    SCmanager.BTmanager.flight[i]->checkMouse(mousePosition,event);
                    SCmanager.BTmanager.flight_Input(window,SCmanager);
                };
            }

        }
        
        SCmanager.BTmanager.escape_Input(window,SCmanager);

    }
};

//new Button
void System::Input_AirLine()
{
    sf::Event event;
    Vector2i mousePosition=Mouse::getPosition(window);
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();            
        }

        SCmanager.BTmanager.TIB_maps["origin"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["destination"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["month"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["day"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["year"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["price"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["o_time"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["f_time"]->checkMouse(mousePosition,event);
        SCmanager.BTmanager.TIB_maps["num"]->checkMouse(mousePosition,event);

        SCmanager.BTmanager.textInput_Input(event,"origin");
        SCmanager.BTmanager.textInput_Input(event,"destination");
        SCmanager.BTmanager.textInput_Input(event,"month");
        SCmanager.BTmanager.textInput_Input(event,"day");
        SCmanager.BTmanager.textInput_Input(event,"year");
        SCmanager.BTmanager.textInput_Input(event,"price");
        SCmanager.BTmanager.textInput_Input(event,"o_time");
        SCmanager.BTmanager.textInput_Input(event,"f_time");
        SCmanager.BTmanager.textInput_Input(event,"num");

        SCmanager.BTmanager.escape.checkMouse(mousePosition,event);
        SCmanager.BTmanager.pushFlight.checkMouse(mousePosition,event);
        
        SCmanager.BTmanager.escape_Input(window,SCmanager);
        SCmanager.BTmanager.pushFlight_Input(window,SCmanager);
    }
};

void System::Input_Checkpay()
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
        SCmanager.BTmanager.checkpay.checkMouse(mousePosition,event);


        SCmanager.BTmanager.escape_Input(window,SCmanager);
        SCmanager.BTmanager.checkpay_Input(window,SCmanager);
    }  
};

