//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_DOUBLE_LIST_NODE_H
#define GENERIC_DOUBLE_LIST_NODE_H

#include <iostream>
#include <sstream>
using namespace std;

template<class datatype>
class Node {
private:
    datatype * data;
    Node * next;
    Node * previous;
public:
    Node();
    virtual ~Node();
    datatype * getData() const;
    void setData(datatype *data);
    Node *getNext() const;
    void setNext(Node *next);
    Node * getPrevious() const;
    void setPrevious(Node *previous);
};



#endif //GENERIC_DOUBLE_LIST_NODE_H
