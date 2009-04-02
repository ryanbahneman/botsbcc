#ifndef NAVIGATION_H_INCLUDED
#define NAVIGATION_H_INCLUDED
#include "Map.h"


class Navigation
{

    private:
       // Stack OpenList;
        //check on this size, might need to make it bigger or smaller
        //Stack ClosedList;
        Map Maze;

        Tile* StartTile;
        Tile* EndTile;

        Point EndTilePoint;
        short calcManhattanDistance(Tile* tile);
        short abs(short num);
    public:
        Navigation();
        void Astar(Point p1, Point p2);
        void assembleOpenList(Tile* tile);
        void setEndTilePoint(Point p);
        Point getEndTilePoint(void);

};

#endif // NAVIGATION_H_INCLUDED
