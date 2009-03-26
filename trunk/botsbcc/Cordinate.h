#ifndef CORDINATE_H_INCLUDED
#define CORDINATE_H_INCLUDED

class Cordinate
{
    private:
        int x;
        int y;

    public:
        inline Cordinate(int,int);

        inline int getX(void);
        inline void setX(int);

        inline int getY(void);
        inline int setY(int);
};
#endif // CORDINATE_H_INCLUDED
