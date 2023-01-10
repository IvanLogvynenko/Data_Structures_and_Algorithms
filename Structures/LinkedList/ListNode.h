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
    
    INode<T>* getNext() { return this->next; }
    void push(INode<T>* newNode) override;
    int getValue() override {return this->value; }
    
    void setValue(int newValue) {this->value = newValue; }
    
    explicit operator int() override { return this->value; }
    ListNode<T>& operator= (int newValue);

    ~ListNode() override { delete this->next; }
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
