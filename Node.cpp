// Fransiskus Agapa

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

// default constructor
Node::Node()
{
    cout << "= Default Constructor =" << endl;
    _data = -1;
    _next = nullptr;
}

// constructor
Node::Node(int theData, Node *newNext)
{
    cout << "= Constructor =" << endl;
    this->_data = theData;
    this->_next = newNext;
}

// link list
void Node::insertAfter(Node *newNode)
{
    cout << "= Insert New Node After =" << endl;
    Node* temp = nullptr;                // temporary store pointer to next value
    temp = this->_next;

    // this points to new node
    this->_next = newNode;

    // link previous list to current this
    newNode->_next = temp;                  // list is linked
}

// Get Next
Node *Node::GetNext() const
{
    return this->_next;
}

// return data
void Node::print()
{
    cout << this->_data;
}
