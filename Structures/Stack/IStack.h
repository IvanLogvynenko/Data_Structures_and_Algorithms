//
// Created by nachtwandler on 13.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISTACK_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISTACK_H

#include "../LinkedList/IListNode.h"

template <class T>
class IStack {
public:
    virtual IListNode<T>* pop() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISTACK_H
