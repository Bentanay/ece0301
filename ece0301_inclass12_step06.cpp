#include <iostream>
#include "Network.cpp"

using namespace std;

int main()
{
    // create & open reports text file
    ofstream outfile("ECE 0301 - Electrical Network Reports.txt");

    // write introductory message to reports file
    outfile << "ECE 0301 - Electrical Network Simulation" << endl;

    // define a network with 3 nodes
    Network net1(3);

    // define 3 components
    Component comp1, comp2, comp3;

    // connect components 0 & 1, 1 & 2, and 2 & 0
    net1.connectComponent(&comp1, 0, 1);
    net1.connectComponent(&comp2, 1, 2);
    net1.connectComponent(&comp3, 2, 0);

    // set node voltages
    net1.setNodeVoltage(1, -5);
    net1.setNodeVoltage(2, 1.25);

    // write network information to the output file
    net1.reportInfo(outfile);

    // write components information to the output file
    comp1.reportInfo(outfile);
    comp2.reportInfo(outfile);
    comp3.reportInfo(outfile);

    // close output file
    outfile.close();
}