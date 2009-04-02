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

bool Tile::getNorth(void)
{
    return walls.getNorth();
}
void Tile::setNorth(bool north)
{
    walls.setNorth(north);
}
bool Tile::getSouth(void)
{
    return walls.getSouth();
}
void Tile::setSouth(bool south)
{
    walls.setSouth(south);
}
bool Tile::getEast(void)
{
    return walls.getEast();
}
void Tile::setEast(bool east)
{
    walls.setEast(east);
}
bool Tile::getWest(void)
{
    return walls.getWest();
}
void Tile::setWest(bool west)
{
    walls.setWest(west);
}

void Tile::setLocation(Point p)
{
    Location= p;
}

Point Tile::getLocation(void)
{
    return Location;
}
