#include <iostream>
#include "Node.cpp"

using namespace std;

int main()
{
    // create & open reports text file
    ofstream outfile("ECE 0301 - Electrical Network Reports.txt");

    // write introductory message to reports file
    outfile << "ECE 0301 - Electrical Network Simulation" << endl;

    // initialize first instance of node class
    Node n1;

    // initialize second instance of node class & set voltage
    Node n2;
    n2.setVoltage(5);

    // initialize third instance of node class & set voltage
    Node n3;
    n3.setVoltage(2.5);

    // write number of nodes to reports file
    outfile << "There are currently " << n3.getNumberOfNodes() << " nodes in existence." << endl;

    // write voltages of each node to reports file
    outfile << "Voltage at node " << n1.getNodeIndex() << " = " << n1.getVoltage() << "." << endl;
    outfile << "Voltage at node " << n2.getNodeIndex() << " = " << n2.getVoltage() << "." << endl;
    outfile << "Voltage at node " << n3.getNodeIndex() << " = " << n3.getVoltage() << "." << endl;
}