#include "Tree.h"

Tree::Tree(Tile* startTile)
{
    Head=0;
    Tail=0;
    Current=0;
    //create node

    add(startTile);
    //set added node to current


}

Tree::Tree()
{
    Head=0;
    Tail=0;
    Current=0;
}

Tree::Tree(Node node){

    Head=0;
    Tail=0;
    Current=0;

    add(node);

}

void Tree::add(Tile* tile)
{
    //create node
    Node node(tile);
    if (Head == 0) {

        Head= &node;
        Current= &node;
        node.nextParent= &node;
        node.prevParent= &node;
        return;
    }

    Current->nextParent= &node;
    node.prevParent = Current;
    node.nextParent = &node;

    Current = &node;
}

void Tree::remove(Tile* tile)
{

}

void Tree::next(void)
{
    Current = Current->nextParent;
}

void Tree::prev(void)
{
    Current= Current->prevParent;
}

Tile* Tree::getCurrentTile(void)
{
    return Current->TilePtr;
}

Node Tree::getCurrentNode(void)
{
 return *Current;
}

void Tree::setCurrentNode(Node* current)
{
    Current = current;
}
/***************************************/
void Tree::add(Node node)
{
    //if tree is empty....
//    short test=Head;
    if (Head == 0) {

        Head= &node;
        Current= &node;
        node.nextParent= &node;
        node.prevParent= &node;
        return;
    }

    Current->nextParent= &node;
    node.prevParent = Current;
    node.nextParent = &node;

    Current = &node;
}

void Tree::remove(Node node)
{

}

