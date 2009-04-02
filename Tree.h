#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include "Node.h"

class Tree
{
        private:
            Node* Current;
            Node* Head;
            Node* Tail;

        public:
            //to create tree pass in tile of start position for first node
            Tree(Tile* startTile);
            Tree(Node node);
            Tree();

            void add(Tile* tile);
            void remove(Tile* tile);

            void next(void);
            void prev(void);

           // void setNext(Node* next);

           // Node* getPrev(void);
            //void setPrev(Node* prev);

            Tile* getCurrentTile(void);

            Node getCurrentNode(void);
            void setCurrentNode(Node* cur);

            void add(Node node);
            void remove(Node node);



};

#endif // TREE_H_INCLUDED
