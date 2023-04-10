#include <iostream>
#include <fstream>

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{

private:
    // member variables
    static int numberOfNodes;
    int nodeIndex;
    double voltage;

public:
    // constructors
    Node();

    // setter functions
    void setNumberOfNodes(int _numberOfNodes);
    void setNodeIndex(int _nodeIndex);
    void setVoltage(double _voltage);

    // getter functions
    int getNumberOfNodes() const;
    int getNodeIndex() const;
    double getVoltage() const;

    // additional member functions
    void reportInfo(ofstream &_outfile) const;
};

#endif