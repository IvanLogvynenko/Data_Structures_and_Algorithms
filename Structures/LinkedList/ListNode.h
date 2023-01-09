//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H


#include "../INode.h"

class ListNode : public INode {
private:
    int value;
    INode* next;
public:
    explicit ListNode(int value) : value(value), next(nullptr) {}
    
    INode* getNext() { return this->next; }
    int getValue() override {return this->value; }
    
    void setValue(int newValue) {this->value = newValue; }
    
    explicit operator int() override { return this->value; }
    ListNode& operator= (int newValue);
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
