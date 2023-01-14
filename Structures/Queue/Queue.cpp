//
// Created by nachtwandler on 14.01.23.
//

#include "Queue.h"

template<class T>
IListNode<T> *Queue<T>::pop() {
    IListNode<T> *temp = this->root;
    this->root = this->root->getNext();
    return temp;
}