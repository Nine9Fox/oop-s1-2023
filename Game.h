#ifndef GAME_H
#define GAME_H
#include"Explosion.h"
#include"Mine.h"
#include"Ship.h"
#include"Utils.h"
#include<tuple>
#include<iostream>
using namespace std;

class Game
{
private:
    std::vector<GameEntity*> entities;
    
public:
    Game();
    ~Game();
    std::vector<GameEntity*> get_entities();
    void set_entities(std::vector<GameEntity*> entities);
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif