#include <iostream>
#include <fstream>
#include "Component.cpp"

#ifndef NETWORK_H
#define NETWORK_H

using namespace std;

class Network
{

private:
    // member variables
    static int numberOfNetworks;
    int networkIndex;
    int numberOfNetworkNodes;
    Node *nodeArray;

public:
    // constructors
    Network(int _numberOfNodes = 2);
    ~Network();

    // setter functions
    void setNodeVoltage(int index, double voltage);

    // getter functions
    int getNetworkIndex() const;
    int getNumberOfNetworkNodes() const;
    int getNumberOfExistingNodes() const;

    // additional member functions
    void reportInfo(ofstream &_outfile) const;
    void connectComponent(Component *comp, int nodeA, int nodeB);
};

#endif