// Fransiskus Agapa
// Practices make improvement - Have Fun !!!
// :)

// ===============
// learn how linked list and its Node is created, linked, and inserted
// ===============

#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << endl;

    // create pointer to node
    Node* head = nullptr;
    head = new Node;                            // allocate new memory - default constructor called

    // assign value
    head = new Node(12);                        // constructor called

    // link another list
    Node* nodeObj1 = new Node(32);             // create new pointer AND allocate new memory
    head->insertAfter(nodeObj1);               // head links to next node

    Node* nodeObj2 = new Node(432);
    nodeObj1->insertAfter(nodeObj2);            // element after head points to this new node

    Node* nodeObj3 = new Node(2343);           // point the next element
    nodeObj2->insertAfter(nodeObj3);

    Node* currObj = nullptr;                   // for print purposes,
    currObj = head;                            // currObj will check list by list

    cout << endl << "  = Display ="<< endl << "[";
    while(currObj != nullptr)                  // while currObj is not at the end of list
    {
        currObj->print();                      // print data of pointed 'this'
        if(currObj->GetNext() != nullptr)
        {
            cout << ',';                       // put comma while there is value being displayed
        }
        currObj = currObj->GetNext();          // update currObj
    }
    cout << "]" << endl;

    return 0;
}
