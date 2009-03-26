#include "Map.h"

Map::Map()
{
    //Tile test;
    //test.setExplored(true);
   // MapArray[0][0] = test;

    tileptr=  getTilePtr(0,0);
    createMap();
}

void Map::createMap()
{
    //setTop and Bottom
    Directions north(true, false, false, false);
    Directions south(false, true, false,false);
    Directions east(false, false, true,false);
    Directions west(false, false, false,true);

    for (int i = 0; i< MAP_SIZE; i++)
    {
        //setTop and Bottom of maze
        tileptr= getTilePtr(i,0);
        tileptr->setWalls(north);
        tileptr= getTilePtr(i , MAP_SIZE-1);
        tileptr->setWalls(south);

        //sets left and right side of maze
        tileptr= getTilePtr(0,i);
        tileptr->setWalls(west);
        tileptr= getTilePtr(MAP_SIZE-1, i);
        tileptr->setWalls(east);
    }
}

Tile* Map::getTilePtr(Point p)
{
    //pass back address of element
   tileptr= &MapArray[p.getX()][p.getY()];
   return tileptr;
}

Tile* Map::getTilePtr(short x, short y)
{
    //pass back address of element
   tileptr= &MapArray[x][y];
   return tileptr;
}
/***
Directions Map::getCellInfo(short x, short y)
{
    return

void Map::setCellInfo(Directions cellinfo, short x, short y)
{

}
****/

