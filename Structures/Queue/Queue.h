//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H

#include "../LinkedList/LinkedList.h"
#include "IQueue.h"

template <class T>
class Queue : public IQueue<T>, public LinkedList<T>{
public:
    IListNode<T>* pop() override;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
