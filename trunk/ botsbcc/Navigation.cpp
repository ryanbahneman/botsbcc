#include "Navigation.h"
//since there are End nodes we can run A* once for each
//of them and select which one of those 4 routes is shortest....
Navigation::Navigation()
{


}


void Navigation::Astar(Point p1, Point p2)
{
    short H;
    short G;
    short F;

    short ClosedCount=0;
    //save starting and ending nodes
    StartTile=Maze.getTilePtr(p1);
    EndTile=Maze.getTilePtr(p2);
    Tile* currentTile = StartTile;
    setEndTilePoint(p2);

    //adds pointers to  OpenList[] of all the different options of ways to go
    assembleOpenList(currentTile);

    //move the parent node which is always in top position to closed list
    //poppinng will also remove the parent from the open list
    ClosedList.push( OpenList.pop() );

    H=calcManhattanDistance(currentTile);




}


//top node in stack is the parent
void Navigation::assembleOpenList(Tile* tile)
{
    Point p = tile->getLocation();
    short x= p.getX();
    short y= p.getY();

    //there is no wall to the north add to open list
    if (tile->getNorth() == false)  OpenList.push( Maze.getTilePtr(x,y-1) );
     //there is no wall to the north add to open list
    if (tile->getSouth() == false)  OpenList.push(Maze.getTilePtr(x,y+1) );
     //there is no wall to the north add to open list
    if (tile->getEast() == false)  OpenList.push( Maze.getTilePtr(x+1,y) );
     //there is no wall to the north add to open list
    if (tile->getWest() == false)  OpenList.push( Maze.getTilePtr(x-1,y) );

    //push the parent tile one last so we know it will always be on the top of the stack
    //so we can easily add it to open list
    OpenList.push(tile);
}

short Navigation::calcManhattanDistance(Tile* tile)
{
    Point p1 = tile->getLocation();
    Point p2= getEndTilePoint();

    short xdist= abs( p1.getX() - p2.getX() );
    short ydist= abs( p1.getY() - p2.getY() );

    return xdist + ydist ;
}

void Navigation::setEndTilePoint(Point p)
{
    EndTilePoint = p;
}

Point Navigation::getEndTilePoint(void)
{
    return EndTilePoint;
}

short Navigation::abs(short num)
{
    if (num >= 0 ) return num;
    else return num *-1;
}
