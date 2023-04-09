#include <iostream>
#include "Node.cpp"

using namespace std;

int main()
{
    // display introductory message to standard output
    cout << "ECE 0301 - Electrical Network Simulation" << endl;

    // initialize first instance of node class
    Node n1;
    cout << "new node created; index = " << n1.getNodeIndex() << endl;
    cout << "total number of nodes = " << n1.getNumberOfNodes() << endl;
    cout << endl;

    // initialize second instance of node class
    Node n2;
    cout << "new node created; index = " << n2.getNodeIndex() << endl;
    cout << "total number of nodes = " << n2.getNumberOfNodes() << endl;
    cout << endl;

    // initialize third instance of node class
    Node n3;
    cout << "new node created; index = " << n3.getNodeIndex() << endl;
    cout << "total number of nodes = " << n3.getNumberOfNodes() << endl;
    cout << endl;
}