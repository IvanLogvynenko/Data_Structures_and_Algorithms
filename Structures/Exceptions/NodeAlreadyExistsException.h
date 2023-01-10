//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H
#define DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H

#include <exception>
#include "../INode.h"

template <class T>
class NodeAlreadyExistsException : public std::exception {
private:
    INode<T> *oldNode, *newNode;
public:
    NodeAlreadyExistsException(INode<T>* oldNode, INode<T>* newNode) : oldNode(oldNode), newNode(newNode) {}
    void replace();
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H