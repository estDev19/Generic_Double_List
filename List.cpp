//
// Created by esteb on 6/4/2023.
//

#include "List.h"

template<class datatype>
List<datatype>::List() {
    this->head = new Node<datatype>;
    this->tail = new Node<datatype>;
    head->setNext(tail);
    tail->setPrevious(head);
    _size = 0;
}

template<class datatype>
bool List<datatype>::isEmpty() {
    return (head->getNext() == tail);
}

template<class datatype>
datatype *List<datatype>::headValue() {
    Node<datatype> * temp = head->getNext();
    if(temp == nullptr){
        return nullptr;
    }
    return temp->getData();
}

template<class datatype>
datatype *List<datatype>::tailValue() {
    Node<datatype> * temp = tail->getNext();
    if(temp == nullptr) {
        return nullptr;
    }
    return temp->getData();
}

template<class datatype>
void List<datatype>::add(Node<datatype> *reference, datatype *value) {
    Node<datatype> * nuevo = new Node<datatype>();
    nuevo->setData(value);
    nuevo->setNext(reference);
    nuevo->setPrevious(reference->getPrevious());
    reference->getPrevious()->setNext(nuevo);
    reference->setPrevious(nuevo);
    _size+= 1;
}

template<class datatype>
void List<datatype>::addOnHead(datatype *value) {
    add(head->getNext(), value);
}

template<class datatype>
void List<datatype>::addOnTail(datatype *valor) {
    add(tail, valor);
}

template<class datatype>
void List<datatype>::remove(Node<datatype> *reference) {
    Node<datatype> * ant = reference->getPrevious();
    Node<datatype> * sig = reference->getNext();
    ant->setNext(sig);
    sig->setPrevious(ant);
    delete reference;
    _size-=1;
}

template<class datatype>
void List<datatype>::removeHead() {
    remove(head->getNext());
}

template<class datatype>
void List<datatype>::removeTail() {
    remove(tail->getPrevious());
}

template<class datatype>
string List<datatype>::toString() {
    stringstream ss;
    Node<datatype> * temp = head->getNext();
    if(temp == tail){
        ss<<"Empty list!"<<endl;
    }else{
        while(temp != tail){
            ss<< * temp->getData()<<endl;
            temp = temp->getNext();
        }
    }
    return ss.str();
}

template<class datatype>
List<datatype>::~List() {
    Node<datatype>* point = head;
    while(point != tail){
        point = point->getNext();
        if(point != nullptr){
            point->setPrevious(head->getPrevious());
        }
        delete head;
        head = point;
    }
    cout<<"Deleted list"<<endl;
}


template<class datatype>
int List<datatype>::size() {
    return _size;
}