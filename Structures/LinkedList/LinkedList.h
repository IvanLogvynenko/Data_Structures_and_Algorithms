//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

#include <vector>

#include "../IStructure.h"
#include "../ISortable.h"
#include "ListNode.h"

template<class T>
class LinkedList : public IStructure, public ISortable<T> {
public:
    LinkedList() : root(nullptr), IStructure(0) {}
    explicit LinkedList(ListNode* root) : root(root), IStructure(1) {}

    void push(int value) override;
    void push(INode* newNode) override;

    std::vector<T> getArray() override;
private:
    ListNode* root;
};




#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
