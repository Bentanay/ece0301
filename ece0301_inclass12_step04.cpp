#include <iostream>
#include "Component.cpp"

using namespace std;

int main()
{
    // create & open reports text file
    ofstream outfile("ECE 0301 - Electrical Network Reports.txt");

    // write introductory message to reports file
    outfile << "ECE 0301 - Electrical Network Simulation" << endl;

    // define 2 nodes
    Node node1, node2;

    // define 1 component;
    Component comp1;

    // set node pointers to terminals A and B
    comp1.setnodeA(&node1);
    comp1.setnodeB(&node2);

    // write information about the nodes
    node1.reportInfo(outfile);
    node2.reportInfo(outfile);

    // report number of components in existence
    outfile << "At present, there are " << comp1.getnumberofcomponents() << " components in existence." << endl;
    outfile << "Component # " << comp1.getcomponentindex() << " is connnected between node " << comp1.getindexnodeA() << " and node " << comp1.getindexnodeB() << "." << endl;
}