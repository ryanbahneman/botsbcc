#include "Point.h"


Point::Point(short x, short y)
{
    setX(x);
    setY(y);
}

Point::Point()
{
  setX(0);
  setY(0);
}

short Point::getX(void)
{
    return X;
}
void Point::setX(short x)
{
    X=x;
}

short Point::getY(void)
{
    return Y;
}

void Point::setY(short y)
{
    Y=y;
}
