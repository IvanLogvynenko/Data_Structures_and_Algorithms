//
// Created by nachtwandler on 13.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ILINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ILINKEDLIST_H

#include "../IStructure.h"
#include "IListNode.h"

template <class T>
class ILinkedList : public IStructure<T>{
public:
    explicit ILinkedList(int size) : IStructure<T>(size) {}
    virtual void push(IListNode<T>* newNode) = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_ILINKEDLIST_H
