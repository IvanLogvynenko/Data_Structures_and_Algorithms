//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H

#include "../INode.h"
#include "IListNode.h"

template <class T>
class ListNode : public IListNode<T> {
private:
    T value;
    IListNode<T>* next;
public:
    explicit ListNode(int value) : value(value), next(nullptr) {}
    explicit ListNode(INode<T>* node) : value(node->getValue()), next(nullptr) {}

    IListNode<T>* getNext() override;
    int getValue() override;
    void deleteNext() override;

    void push(IListNode<T>* newNode) override;
    void setValue(int newValue);

    explicit operator T() override;
    ListNode<T>& operator= (int newValue);

    ~ListNode() override;
};

template class ListNode<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
