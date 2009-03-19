#ifndef MARKER_H_INCLUDED
#define MARKER_H_INCLUDED
/**********************************************************************
* Holds information on location of node, ways that can be traveled from node
* as well ways already been traveled from node.
*   Marker has the following info:
        -cordinate location
        -directions that it can go
        -directions that it has gone
**********************************************************************/
class Marker
{
    private:
        //this is it's (x,y) location
        Cordinate location;

        //figure out how many nodes it can see
        Directions paths;

        //tells which way it has traveled already from this node, this will be used during
        //the mapping process, as it will have to be ignored during the fast run as it will
        //need to travel under a route that has already been traveled
        Directions pathsTraveled;

    public:
        //constructor
        Marker(Cordinate location, Directions waysToGo, Directions waysTraveled);

        inline Cordinate getCordinates(void);
        inline void setCordinates(Cordinate);

        inline Directions getNumberOfPaths(void);
        inline void setNumberOfPaths(Directions);

        inline Directions getPathsTraveled(void);
        inline void setPathsTraveled(Directions);
};
#endif // MARKER_H_INCLUDED
