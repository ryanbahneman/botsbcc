#include "Stack.h"

Stack::Stack()
{
    StackTracker=4;

}
void Stack::push(Tile* tile)
{
    StackArray[StackTracker--] =tile;
}
Tile* Stack::pop(void)
{
    return StackArray[StackTracker++];
}
