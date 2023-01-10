//
// Created by nachtwandler on 08.01.23.
//

#include "ListNode.h"

template<class T>
ListNode<T> *ListNode<T>::getNext() {
    return this->next;
}

template<class T>
void ListNode<T>::push(INode<T> *newNode) {
    if (this->next)
        this->push(newNode);
    else
        this->next = newNode;
}

template<class T>
int ListNode<T>::getValue() {
    return this->value;
}

template<class T>
void ListNode<T>::setValue(int newValue) {
    this->value = newValue;
}

template<class T>
ListNode<T>::operator int() {
    return this->value;
}

template<class T>
ListNode<T> &ListNode<T>::operator=(int newValue) {
    this->value = newValue;
    return *this;
}

template<class T>
ListNode<T>::~ListNode() {
    delete this->next;
}