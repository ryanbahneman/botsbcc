#include "Cordinate.h"
Cordinate::Cordinate(int x, int y)
{
    setX(x);
    setY(y);
}

/************************************************************
                    Getters & Setters for Marker Class
**************************************************************/
{

int Cordinate::getX(void)
{
    return x;
}
void Cordinate::setX(int X)
{
    x=X;
}
int Cordinate::getY(void)
{
    return y;
}
int Cordinate::setY(int Y)
{
    y=Y;
}

}
