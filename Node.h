// Fransiskus Agapa

#ifndef BASICLINKEDLIST1_NODE_H
#define BASICLINKEDLIST1_NODE_H

class Node
        {
private:
    int _data;
    Node *_next;                                  // address to point to next node
public:
    Node();                                       // default constructor
    Node(int theData, Node* newNext = nullptr);   // constructor
    void insertAfter(Node* newNode);              // point to new node
    Node* GetNext() const;                        // get address of next list
    void print();
};

#endif //BASICLINKEDLIST1_NODE_H
