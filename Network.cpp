#include "Network.h"

// initialize number of networks to 0
int Network::numberOfNetworks = 0;

// constructor
Network::Network(int _numberOfNodes)
{
    networkIndex = numberOfNetworks;
    numberOfNetworks++;
    numberOfNetworkNodes = _numberOfNodes;
    nodeArray = new Node[numberOfNetworkNodes];
}

// destructor
Network::~Network()
{
    delete[] nodeArray;
}

// setter for node voltage
void Network::setNodeVoltage(int index, double voltage)
{
    (nodeArray + index)->setVoltage(voltage);
}

// getter for network index
int Network::getNetworkIndex() const
{
    return networkIndex;
}

// getter for number of nodes in a network
int Network::getNumberOfNetworkNodes() const
{
    return numberOfNetworkNodes;
}

// getter for number of nodes in existence
int Network::getNumberOfExistingNodes() const
{
    return (nodeArray->getNumberOfNodes());
}

// connect 2 nodes together to form a component
void Network::connectComponent(Component *comp, int nodeA, int nodeB)
{
    comp->setnodeA(nodeArray + nodeA);
    comp->setnodeB(nodeArray + nodeB);
}

// report network and node information
void Network::reportInfo(ofstream &_outfile) const
{
    _outfile << endl;

    for (int i = 0; i < 48; i++)
    {
        _outfile << "-";
    }

    _outfile << endl;

    _outfile << endl;

    _outfile << "Data for Electric Network # " << networkIndex << ":" << endl;

    _outfile << "At present, there are " << numberOfNetworks << " Networks in existence." << endl;
    _outfile << "At present, there are " << getNumberOfExistingNodes() << " nodes in existence." << endl;

    _outfile << "Network # " << networkIndex << " contains " << getNumberOfNetworkNodes() << " nodes." << endl;

    for (int i = 0; i < getNumberOfNetworkNodes(); i++)
    {
        (nodeArray + i)->reportInfo(_outfile);
    }
}