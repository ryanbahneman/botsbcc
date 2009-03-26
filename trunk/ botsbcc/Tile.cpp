#include "Tile.h"

Tile::Tile()
{

}

Directions Tile::getPointOfEntry(void)
{
    return pointOfEntry;
}

void Tile::setPointOfEntry(Directions dir)
{
    pointOfEntry = dir;
}

Directions Tile::getWalls(void)
{
    return walls;
}

void Tile::setWalls(Directions wall)
{
    walls=wall;
}

