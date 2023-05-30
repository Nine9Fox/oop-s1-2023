#include"Game.h"

int main()
{
    Game a;
    std::vector<GameEntity*> b=a.initGame(2,10,5,5);
    a.set_entities(b);
    a.gameLoop(5,1);
}