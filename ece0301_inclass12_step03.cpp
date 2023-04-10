#include <iostream>
#include "Network.cpp"

using namespace std;

int main()
{
    // create & open reports text file
    ofstream outfile("ECE 0301 - Electrical Network Reports.txt");

    // write introductory message to reports file
    outfile << "ECE 0301 - Electrical Network Simulation" << endl;

    // initialize first instance of network class & set voltages
    Network n1(3);
    n1.setNodeVoltage(0, 0);
    n1.setNodeVoltage(1, 5);
    n1.setNodeVoltage(2, 2.5);

    // write info of first network instance to reports file
    n1.reportInfo(outfile);

    // initialize second instance of network class & set voltages
    Network n2(2);
    n2.setNodeVoltage(0, 0);
    n2.setNodeVoltage(1, 3.3);

    // write info of first network instance to reports file
    n2.reportInfo(outfile);

    // close reports file
    outfile.close();
}