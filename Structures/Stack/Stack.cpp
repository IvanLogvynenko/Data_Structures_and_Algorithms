//
// Created by nachtwandler on 13.01.23.
//

#include "Stack.h"
template<class T>
IListNode<T> *Stack<T>::pop() {
    IListNode<T> *temp = this->operator[](this->size - 1);
    this->operator[](this->size - 2)->deleteNext();
    return temp;
}
