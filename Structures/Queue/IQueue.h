//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_IQUEUE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_IQUEUE_H

#include "../LinkedList/IListNode.h"

template <class T>
class IQueue {
public:
    virtual IListNode<T>* pop() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_IQUEUE_H
