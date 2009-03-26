#include <iostream>
#include "Map.h"

using namespace std;

Map map;
void drawMaze();
int main()
{
    drawMaze();

}


void  drawMaze()
{
    Tile *t;
    Directions dir;
    for (int i = 0; i <16; i++){

        t = map.getTilePtr(i,0);
        dir= t->getWalls();

        if(dir.getNorth()) cout<< "--" ;

        t = map.getTilePtr(i,15);
        dir= t->getWalls();

        if (dir.getSouth()) cout<< "t";

    }
}
