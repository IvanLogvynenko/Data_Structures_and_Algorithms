//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

#include <vector>

#include "../IStructure.h"
#include "../ISortableStructure.h"
#include "../ISearchableStructure.h"

#include "ListNode.h"

template<class T>
class LinkedList :
        public IStructure<T>,
        public ISortableStructure<T>,
        public ISearchableStructure<T> {
protected:
    ListNode<T>* root;
public:
    LinkedList() : root(nullptr), IStructure<T>(0) {}
    explicit LinkedList(ListNode<T>* root) : root(root), IStructure<T>(1) {}

    void push(T value) override;

    INode<T>* find(T value) override;

    std::vector<T> getArray() override;
    IListNode<T>* operator[](int index) override;

    std::ostream &operator<<(std::ostream& out);
};

template class LinkedList<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H