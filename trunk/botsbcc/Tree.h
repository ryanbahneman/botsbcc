#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include "Node.h"

class Tree
{
        private:
            Node* Current;

        public:
            //to create tree pass in tile of start position for first node
            Tree(Tile* start);
            void add(Tile* tile);
            void remove(Tile* tile);

            Node* getNext();
            Node* setNext();

            Node* getPrev();
            Node* setPrev();

            Node* getCurrent();
            Node* setCurrent();

};

#endif // TREE_H_INCLUDED
