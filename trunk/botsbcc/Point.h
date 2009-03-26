#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    private:

        short X;
        short Y;

    public:
        Point(short, short);
        Point();
        short getX(void);
        void setX(short x);

        short getY(void);
        void setY(short y);
};

#endif // POINT_H_INCLUDED
