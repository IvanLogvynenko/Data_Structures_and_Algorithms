//
// Created by nachtwandler on 08.01.23.
//
#include "NodeAlreadyExistsException.h"

void NodeAlreadyExistsException::replace() {
    delete this->oldNode;
    this->oldNode = this->newNode;
}
