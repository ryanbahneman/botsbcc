#include "Marker.h"


Marker::Marker(Cordinate location, Directions waysToGo, Directions waysTraveled)
{
    setCordinates(location);
    setNumberOfPaths(waysToGo);
    setPathsTraveled(waysTraveled);

}

/************************************************************
                    Getters & Setters for Marker Class
**************************************************************/
{

Cordinate Marker::getCordinates(void)
{
    return location;
}
void Marker::setCordinates(Cordinate loc)
{
    location= loc;
}
Directions Marker::getNumberOfPaths(void)
{
    return paths;
}
void Marker::setNumberOfPaths(Directions path)
{
    paths= path;
}

Directions Marker::getPathsTraveled(void)
{
    return pathsTraveled;
}
void Marker::setPathsTraveled(Directions path)
{
    pathsTraveled= path;
}

}


