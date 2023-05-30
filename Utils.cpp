#include"Utils.h"

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight)
{
    random_device seed;
    ranlux48 engine(seed());
    uniform_int_distribution<> disWidth(0,gridWidth);
    uniform_int_distribution<> disHeight(0,gridWidth);
    gridWidth=disWidth(engine);
    gridHeight=disHeight(engine);
    std::tuple<int, int> position(gridWidth,gridHeight);
    return position;
};

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2)
{
    double dis=sqrt(
        ((get<0>(pos1)-get<0>(pos2))*(get<0>(pos1)-get<0>(pos2)))+
        ((get<1>(pos1)-get<1>(pos2))*(get<1>(pos1)-get<1>(pos2)))
        );
    return dis;
};