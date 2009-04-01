#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include "Tile.h"
class Node
{
    private:

    public:

        Node(Tile* tile);
        Tile* CurrentTile;

        Node* nextParent;
        Node* prevParent;

        Tile* NorthTile;
        Tile* NorthEastTile;
        Tile* EastTile;
        Tile* SouthEastTile;
        Tile* SouthTile;
        Tile* SouthWestTile;
        Tile* WestTileTile;
        Tile* NorthWestTile;

};


#endif // NODE_H_INCLUDED
