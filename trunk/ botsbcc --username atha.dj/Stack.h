#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "Tile.h"
class Stack
{
    private:
        Tile* StackArray[8];
        short StackTracker;

    public:
        Stack();
        void push(Tile* tile);
        Tile* pop(void);
};

#endif // STACK_H_INCLUDED
