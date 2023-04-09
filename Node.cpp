#include "Node.h"

// initialize number of nodes to 0
int Node::numberOfNodes = 0;

// default constructor
Node::Node()
{
    nodeIndex = numberOfNodes;
    numberOfNodes++;
    voltage = 0;
}

// setter for number of nodes
void Node::setNumberOfNodes(int _numberOfNodes)
{
    numberOfNodes = _numberOfNodes;
}

// setter for node index
void Node::setNodeIndex(int _nodeIndex)
{
    nodeIndex = _nodeIndex;
}

// setter for voltage
void Node::setVoltage(double _voltage)
{
    voltage = _voltage;
}

// getter for number of nodes
int Node::getNumberOfNodes() const
{
    return numberOfNodes;
}

// getter for node index
int Node::getNodeIndex() const
{
    return nodeIndex;
}

// getter for voltage
double Node::getVoltage() const
{
    return voltage;
}

// report node index and voltage information
void Node::reportInfo(ofstream &_outfile) const
{
    cout << "Voltage at node " << nodeIndex << " = " << voltage << endl;
    cout << endl;
}