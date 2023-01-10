//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H

#include "../INode.h"

template <class T>
class ListNode : public INode<T> {
private:
    T value;
    INode<T>* next;
public:
    explicit ListNode(int value) : value(value), next(nullptr) {}
    explicit ListNode(INode<T>* node) : value(node->getValue()), next(nullptr) {}
    
    INode<T>* getNext();
    void push(INode<T>* newNode) override;
    int getValue() override;
    
    void setValue(int newValue);
    
    explicit operator int() override;
    ListNode<T>& operator= (int newValue);

    ~ListNode() override;
};

template class ListNode<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
