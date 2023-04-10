#include "Component.h"

// initialize number of components to 0
int Component::numberofcomponents = 0;

// default constructor
Component::Component()
{
    componentindex = numberofcomponents;
    numberofcomponents++;
    nodeA = nullptr;
    nodeB = nullptr;
}

// setter for node A
void Component::setnodeA(Node *_nodeA)
{
    nodeA = _nodeA;
}

// setter for node B
void Component::setnodeB(Node *_nodeB)
{
    nodeB = _nodeB;
}

// getter for number of components
int Component::getnumberofcomponents() const
{
    return numberofcomponents;
}

// getter for component index
int Component::getcomponentindex() const
{
    return componentindex;
}

// getter for node A index
int Component::getindexnodeA() const
{
    return (nodeA->getNodeIndex());
}

// getter for node B index
int Component::getindexnodeB() const
{
    return (nodeB->getNodeIndex());
}

void Component::reportInfo(ofstream &_outfile)
{
    _outfile << "Component #" << componentindex << " is connected between node " << getindexnodeA() << " and node " << getindexnodeB() << "." << endl;
}