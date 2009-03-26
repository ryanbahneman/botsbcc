#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include "Tile.h"
#include "Point.h"

#define MAP_SIZE 16

/***********************************************
The map class will creat the initial array and also be in charge of managing the array of Tile cells
It will be able to pass back a pointer to any cell so that it can be directly manipulate by the bot during mapping.
*********************************************/
class Map
{
    private:

            void createMap();
            Tile MapArray[MAP_SIZE][MAP_SIZE];
            Tile *tileptr;

    public:
            Map();
            Tile* getTilePtr(Point p);
};

#endif // MAP_H_INCLUDED
