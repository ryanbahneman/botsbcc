#include "Tile.h"

Tile::Tile()
{
    setExplored(false);
   // make open cell with no walls
    Directions dir(false, false, false, false);
    setWalls(dir);

    setpathsTraveled(dir);
}

Directions Tile::getpathsTraveled(void)
{
    return pathsTraveled;
}

void Tile::setpathsTraveled(Directions dir)
{
    pathsTraveled = dir;
}

void Tile::setWalls(Directions wall)
{
    walls=wall;
}

Directions Tile::getWalls(void)
{
    return walls;
}
bool Tile::getExplored(void)
{
    return explored;
}

void Tile::setExplored( bool explore)
{
    explored= explore;
}
