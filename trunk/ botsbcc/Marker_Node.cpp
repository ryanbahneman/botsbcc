/***************************************************************
*Pass in node to add. Pass in the last node drop...need to keep track
*of this somehow. Also pass in the direction of the last node
****************************************************************/
Marker_Node::Marker_Node(Marker node, Marker *&lastNode, Directions directionOfLastNode)
{
    setMarker(node);

    if(directionOfLastNode.getNorth() == true) setNorthPointer(*lastNode);
    if(directionOfLastNode.getSouth() == true) setSouthPointer(*lastNode);
    if(directionOfLastNode.getEast() == true) setEastPointer(*lastNode);
    if(directionOfLastNode.getWest() == true) setWestPointer(*lastNode);

}

/************************************************************
                    Getters & Setters for Marker_Node
**************************************************************/
{

Marker_Node* Marker_Node::getNorthPointer(void)
{
    return *north;
}
void Marker_Node::setNorthPointer(Marker_Node *&node)
{
    *north= *node;
}

Marker_Node* Marker_Node::getSouthPointer(void)
{
    return *south;
}
void Marker_Node::setSouthPointer(Marker_Node *&node)
{
    *south= *node;
}
Marker_Node* Marker_Node::getEastPointer(void)
{
    return *east;
}
void Marker_Node::setEastPointer(Marker_Node *&node)
{
    *east= *node;
}
Marker_Node* Marker_Node::getWestPointer(void)
{
    return *west;
}
void Marker_Node::setWestPointer(Marker_Node *&node)
{
    *west= *node;
}
Marker Marker_Node::getMarker(void)
{
    return marker;
}
void Marker_Node::setMarker(Marker mark)
{
    marker= mark;
}
void Marker_Node::setStartNode(bool start)
{
    startNode= start;
}
bool Marker_Node::getStartNode(void)
{
    return startNode;
}
void Marker_Node::setEndNode(bool end)
{
    endNode= end;
}
bool Marker_Node::getEndNode(void)
{
    return endNode;
}

}
