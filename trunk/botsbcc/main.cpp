#include <iostream>
#include "Map.h"

using namespace std;

Map map;

int main()
{

    Point p(0,0);
    Tile *t;
    t = map.getTilePtr(p);

if (t->getExplored() ) cout << "test test" << endl;
}
