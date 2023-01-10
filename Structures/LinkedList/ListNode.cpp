//
// Created by nachtwandler on 08.01.23.
//

#include "ListNode.h"

ListNode &ListNode::operator=(int newValue) {
    this->value = newValue;
    return *this;
}

void ListNode::push(INode *newNode) {
    if (this->next) this->push(newNode);
    else this->next = newNode;
}
