#include "Map.h"

Map::Map()
{
    //Tile test;
    //test.setExplored(true);
   // MapArray[0][0] = test;
}

void Map::createMap()
{



}

Tile* Map::getTilePtr(Point p)
{
    //pass back address of element
   tileptr= &MapArray[p.getX()][p.getY()];
   return tileptr;
}
