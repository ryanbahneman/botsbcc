#include <iostream>
#include "Map.h"

using namespace std;

Map map;
void drawMaze();
int main()
{
        drawMaze();
}

void  drawMaze(){


    Tile *t;
    Directions dir;

    for (int i= 0; i < 16; i++){
        for (int j= 0; j < 16; j++){

            t = map.getTilePtr(j,i);
            dir= t->getWalls();

          //  cout<<'(' << j <<','<<i<<')';
            //cout<<'[';
           // short x =t->getLocation().getX();
           // short y = t-> getLocation().getY();
           // cout <<x << ',' << y;
            if(dir.getNorth()) cout<< "N" ;
            else cout << '_';
            if (dir.getSouth()) cout<< "S";
            else cout << '_';
            if (dir.getEast()) cout<< "E";
            else cout << '_';
            if (dir.getWest()) cout<< "W" ;
            else cout << '_';
            cout << '|';
           // cout<<']';
        }
        cout<< endl;
    }

    /*************************
    for (int i = 0; i <16; i++){

        t = map.getTilePtr(i,0);
        dir= t->getWalls();
        if(dir.getNorth()) cout<< "N" ;

        t = map.getTilePtr(i,15);
        dir= t->getWalls();
        if (dir.getSouth()) cout<< "S";

        t= map.getTilePtr(0,i);
        dir= t->getWalls();
        if (dir.getEast()) cout<< "E";

        t= map.getTilePtr(15, i);
        dir= t->getWalls();
        if (dir.getWest()) cout<< "W" << endl;
    }

    *********************************/
}

