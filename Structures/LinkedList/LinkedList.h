//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

#include <vector>

#include "ILinkedList.h"
#include "../ISortable.h"

#include "ListNode.h"

template<class T>
class LinkedList :
        public ILinkedList<T>, public ISortable<T> {
private:
    ListNode<T>* root;
public:
    LinkedList() : root(nullptr), ILinkedList<T>(0) {}
    explicit LinkedList(ListNode<T>* root) :
        root(root), ILinkedList<T>(1) {}

    void push(IListNode<T>* newNode) override;
    void push(T value) override;

    std::vector<T> getArray() override;
};

template class LinkedList<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H