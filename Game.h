#ifndef GAME_H
#define GAME_H
#include"Cell.h"
#include"Utils.h"
#include"Character.h"
#include"Trap.h"
#include"Effect.h"
using namespace std;

class Game
{
private:
std::vector<Cell*> grid;
int width;

public:
    Game()
    {

    }

    std::vector<Cell*>& getGrid()
    {
        return grid;
    }

    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight)
    {
        width=gridWidth;
        for(int i=0;i<numCharacters;i++)
        {
            tuple<int,int> pos=Utils::generateRandomPos(gridWidth,gridHeight);
            grid.push_back(new Character(get<0>(pos),get<1>(pos)));
        }

        for(int i=0;i<numTraps;i++)
        {
            tuple<int,int> pos=Utils::generateRandomPos(gridWidth,gridHeight);
            grid.push_back(new Trap(get<0>(pos),get<1>(pos)));
        }
        return;
    }

    void gameLoop(int maxIterations, double trapActivationDistance)
    {
        for(int i=0;i<maxIterations;i++)
        {
            //cout<<"1"<<endl;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j]->getType()=='C')
                {
                    grid[j]->move(1,0);
                    for(int k=0;k<grid.size();k++)
                    {
                        if(grid[k]->getType()=='T')
                        {
                            if(Utils::calculateDistance(grid[j]->getPos(),grid[k]->getPos())<=trapActivationDistance)
                            {
                                grid[k]->apply(*grid[j]);
                            }
                        }
                    }
                }
                
            }

        for(int j=0;j<maxIterations;j++)
        {
            if(grid[j]->getType()=='C')
            {
                tuple<int,int> pos=grid[j]->getPos();
                if(get<0>(pos)>width)
                {
                    cout<<"Character has won the game!"<<endl;
                    return;
                }
            }
        }            
        }
        
        cout<<"Maximum number of iterations reached. Game over."<<endl;
        return;
    }

};

#endif