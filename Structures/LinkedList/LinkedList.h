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
class LinkedList : public IStructure<T>, public ISortable<T> {
public:
    LinkedList() : root(nullptr), IStructure<T>(0) {}
    explicit LinkedList(ListNode<T>* root) : root(root), IStructure<T>(1) {}

    void push(INode<T>* newNode) override;
    void push(T value) override;

    std::vector<T> getArray() override;
private:
    ListNode<T>* root;
};

template class LinkedList<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H