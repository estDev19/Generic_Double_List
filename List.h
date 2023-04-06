//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_DOUBLE_LIST_LIST_H
#define GENERIC_DOUBLE_LIST_LIST_H


#include "Node.cpp"

template<class datatype>
class List {
private:
    Node<datatype> * head;
    Node<datatype> * tail;
    int _size;
public:
    List();
    bool isEmpty();
    datatype * headValue();
    datatype* tailValue();
    void add(Node<datatype> * reference, datatype * value);
    void addOnHead(datatype * value);
    void addOnTail(datatype * value);
    void remove (Node<datatype> * reference);
    void removeHead();
    void removeTail();
    string toString();
    int size();
    ~List();
};


#endif //GENERIC_DOUBLE_LIST_LIST_H
