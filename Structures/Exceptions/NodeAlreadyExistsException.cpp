//
// Created by nachtwandler on 08.01.23.
//
#include "NodeAlreadyExistsException.h"

template <class T>
void NodeAlreadyExistsException<T>::replace() {
    delete this->oldNode;
    this->oldNode = this->newNode;
}
