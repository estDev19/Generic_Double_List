//
// Created by esteb on 6/4/2023.
//

#include "Node.h"

template<class datatype>
Node<datatype>::Node() {}

template<class datatype>
Node<datatype>::~Node() {
}

template<class datatype>
datatype *Node<datatype>::getData() const {
    return data;
}

template<class datatype>
void Node<datatype>::setData(datatype *data) {
    Node::data = data;
}

template<class datatype>
Node<datatype> *Node<datatype>::getNext() const {
    return next;
}

template<class datatype>
void Node<datatype>::setNext(Node *next) {
    Node::next = next;
}

template<class datatype>
Node<datatype> *Node<datatype>::getPrevious() const {
    return previous;
}

template<class datatype>
void Node<datatype>::setPrevious(Node *previous) {
    Node::previous = previous;
}
