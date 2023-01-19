//
// Created by nachtwandler on 14.01.23.
//

#include "Set.h"

template<class T>
bool Set<T>::checkExistence(T value) {
    if (this->linkedList->find(value) != nullptr)
        return true;
    else
        return false;
}

template<class T>
void Set<T>::push(T value) {
    if (!this->linkedList->find(value))
        this->linkedList->push(value);
}