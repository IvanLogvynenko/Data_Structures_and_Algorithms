//
// Created by nachtwandler on 08.01.23.
//

#include "ListNode.h"

template<class T>
IListNode<T>* ListNode<T>::getNext() {
    return this->next;
}

template<class T>
void ListNode<T>::push(IListNode<T> *newNode) {
    if (this->next)
        this->next->push(newNode);
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
ListNode<T>::operator T() {
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