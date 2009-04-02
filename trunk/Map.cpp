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
    //Directions north(true, false, false, false);
    //Directions south(false, true, false,false);
    //Directions east(false, false, true,false);
    //Directions west(false, false, false,true);

    for (int i = 0; i< MAP_SIZE; i++)
    {
        //setNorth
        tileptr= getTilePtr(i,0);
        tileptr->setNorth(true);

        //setSouth
        tileptr= getTilePtr(i , MAP_SIZE-1);
        tileptr->setSouth(true);

        //setEast
        tileptr= getTilePtr(0,i);
        tileptr->setWest(true);

        //setWest
        tileptr= getTilePtr(MAP_SIZE-1, i);
        tileptr->setEast(true);
    }

    Point p;

    for (short i=0; i<MAP_SIZE; i++){
            //saved here to save on function call and cpu usage....
            p.setX(i);
        for(short j =0; j<MAP_SIZE; j++){
            tileptr =getTilePtr(i, j);
            p.setY(j);
            tileptr->setLocation(p);
        }
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
    if (x <0) x=0;
    if (y<0) y =0;
    if (x>MAP_SIZE) x=MAP_SIZE;
    if (y>MAP_SIZE) y=MAP_SIZE;
    //pass back address of element
   tileptr= &MapArray[x][y];
   return tileptr;
}


