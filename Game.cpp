#include"Game.h"

Game::Game()
{

};
Game::~Game()
{

};

std::vector<GameEntity*> Game::get_entities()
{
    return entities;
};
void Game::set_entities(std::vector<GameEntity*> entities)
{
    this->entities=entities;
};

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight)
{
    std::vector<GameEntity*> entities;
    //cout<<"s0"<<endl;
    for(int i=0;i<numShips;i++)
    {
        //cout<<"s1"<<endl;
        std::tuple<int,int> posShip=Utils::generateRandomPos(gridWidth,gridHeight);
        entities.push_back(new Ship(get<0>(posShip),get<1>(posShip)));
    };

    for(int i=0;i<numMines;i++)
    {
        std::tuple<int,int> posMine=Utils::generateRandomPos(gridWidth,gridHeight);
        entities.push_back(new Mine(get<0>(posMine),get<1>(posMine)));
    };
    return entities;

};
void Game::gameLoop(int maxIterations, double mineDistanceThreshold)
{
    int numShip=0;
    int bobShip=0;
    //cout<<entities.size()<<endl;
    for(int i=0;i<entities.size();i++)
    {
        if(entities[i]->getType()=='S')
        {
            numShip++;
        }
    }
    //cout<<maxIterations<<endl;
    //cout<<numShip<<endl;
    for(int i=0;i<maxIterations;i++)
    {
        //cout<<bobShip<<endl;
        for(int j=0;j<entities.size();j++)
        {
            if(entities[j]->getType()=='S')
            {
                entities[j]->move(1,0);
                for(int k=0;k<entities.size();k++)
                {
                    if(entities[k]->getType()=='M')
                    {
                        if(Utils::calculateDistance(entities[j]->getPos(),entities[k]->getPos())<=mineDistanceThreshold)
                        {
                            Explosion e=entities[k]->explode();
                            e.apply(*entities[j]);
                            bobShip++;
                        }
                    }
                }
            }
        }
        if(bobShip==numShip)
        {
            cout<<"lose"<<endl;
            return;
        }
    }
    cout<<"win"<<endl;
}