#include "Directions.h"

Directions::Directions()
{
    setNorth(false);
    setSouth(false);
    setEast(false);
    setWest(false);
}


Directions::Directions(bool north,bool south,bool east,bool west)
{
    setNorth(north);
    setSouth(south);
    setEast(east);
    setWest(west);
}


/************************************************************
                    Getters & Setters for Directions
**************************************************************/


bool Directions::getNorth(void)
{
    return NORTH;
}
void Directions::setNorth(bool north)
{
    NORTH=north;
}
bool Directions::getSouth(void)
{
    return SOUTH;
}
void Directions::setSouth(bool south)
{
    SOUTH=south;
}
bool Directions::getEast(void)
{
    return EAST;
}
void Directions::setEast(bool east)
{
    EAST=east;
}
bool Directions::getWest(void)
{
    return WEST;
}
void Directions::setWest(bool west)
{
    WEST = west;
}


