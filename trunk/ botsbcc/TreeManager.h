#ifndef TREEMANAGER_H_INCLUDED
#define TREEMANAGER_H_INCLUDED

#include "node.h"

class TreeManager
{
    private:
        //keep track of last node
        //we need this cause we know that the node we will add
        //will be seen by the last node
        Marker_Node *lastNode;

    public:
        TreeManager();
        void addNode();
        findNode();

}



#endif // TREEMANAGER_H_INCLUDED
