//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H


#include "../INode.h"

class ListNode : public INode {
private:
    int value;
public:
    explicit ListNode(int value) : value(value) {}

};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_LISTNODE_H
