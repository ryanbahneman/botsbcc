#ifndef DIRECTIONS_H_INCLUDED
#define DIRECTIONS_H_INCLUDED

/**********************************************************************
*each value will be true or false depending if you can go that way from this node.
*This will also imply the max number of nodes that will be visible from this node.
**********************************************************************/
class Directions
{
    private:
        bool NORTH;
        bool SOUTH;
        bool EAST;
        bool WEST;

    public:
        Directions(bool,bool,bool,bool);
        Directions();

         bool getNorth(void);
         void setNorth(bool);

         bool getSouth(void);
         void setSouth(bool);

         bool getEast(void);
         void setEast(bool);

         bool getWest(void);
         void setWest(bool);
};

#endif // DIRECTIONS_H_INCLUDED
