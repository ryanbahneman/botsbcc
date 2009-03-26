#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#inlcude "Directions.h"

class Tile
{
    private:

        //figure out which direction the walls are true if wall that direction false if not
        Directions walls;

        //
        Directions pathsTraveled;

        bool explored = false;

    public:
        //constructor

        Directions getPointOfEntry(void);
        void setPointOfEntry(Directions);

        void setWalls(Directions wall);
        Directions getWalls(void);

};


#endif // TILE_H_INCLUDED
