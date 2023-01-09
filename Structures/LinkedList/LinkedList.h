//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H


#include "../IStructure.h"
#include "../ISortable.h"

template<class T>
class LinkedList : public IStructure, public ISortable<T> {
public:
    LinkedList() : IStructure(0) {}
    void push(int value) override = 0;
    void push(INode* newNode) override = 0;
private:
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
