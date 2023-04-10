#include <iostream>
#include <fstream>
#include "Node.cpp"

#ifndef COMPONENT_H
#define COMPONENT_H

using namespace std;

class Component
{

private:
    // member variables
    static int numberofcomponents;
    int componentindex;
    Node *nodeA;
    Node *nodeB;

public:
    // constructors
    Component();

    // setter functions
    void setnodeA(Node *_nodeA);
    void setnodeB(Node *_nodeB);

    // getter functions
    int getnumberofcomponents() const;
    int getcomponentindex() const;
    int getindexnodeA() const;
    int getindexnodeB() const;

    // additional member functions
    void reportInfo(ofstream &_outfile);
};

#endif