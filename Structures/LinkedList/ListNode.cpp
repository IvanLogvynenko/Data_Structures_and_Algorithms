//
// Created by nachtwandler on 08.01.23.
//

#include "ListNode.h"

ListNode &ListNode::operator=(int newValue) {
    this->value = newValue;
    return *this;
}
