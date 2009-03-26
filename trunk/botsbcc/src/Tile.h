#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "Directions.h"
/*********************************
    The Tile class will hold all the info the bot is gathering while it is mapping the maze. It will also be used by A* to
    figure out the quickest way to the center. It will hold the following info:

        -which sides have walls and which have paths
        -what path the bot traveled since leaving the tile
        -if the tile has been explored by the bot or not
**************************************/
class Tile
{
    private:

        //figure out which direction the walls are true if wall that direction false if not
       Directions walls;

        //where the bot has traveled since leaving the tile
        Directions pathsTraveled;

        bool explored;

    public:
        //constructor sets explored to false
        Tile();

        Directions getpathsTraveled(void);
        void setpathsTraveled(Directions);

        void setWalls(Directions wall);
        Directions getWalls(void);

        bool getExplored(void);
        void setExplored( bool);

};


#endif // TILE_H_INCLUDED
