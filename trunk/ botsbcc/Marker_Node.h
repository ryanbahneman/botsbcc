#ifndef MARKER_NODE_H_INCLUDED
#define MARKER_NODE_H_INCLUDED

/**********************************************************************
*creats the info into a node.
**********************************************************************/
class Marker_Node
{
    private:
        //will have the info stored here....
        Marker marker;

        Marker_Node *north;
        Marker_Node *south;
        Marker_Node *east;
        Marker_Node *west;

        bool startNode;
        bool endNode;

    public:
        //the first marker that is being passed is the one that is becoming a node.
        Marker_Node(Marker, Marker, Directions);

        inline Marker getMarker(void);
        inline void setMarker(Marker);

        inline Marker_Node* getNorthPointer(void);
        inline void setNorthPointer(Marker_Node*);

        inline Marker_Node* getSouthPointer(void);
        inline void setSouthPointer(Marker_Node*);

        inline Marker_Node* getEastPointer(void);
        inline void setEastPointer(Marker_Node*);

        inline Marker_Node* getWestPointer(void);
        inline void setWestPointer(Marker_Node*);

        inline void setStartNode(bool);
        inline bool getStartNode(void);

        inline void setStartNode(bool);
        inline bool getEndNode(void);
};


#endif // MARKER_NODE_H_INCLUDED
