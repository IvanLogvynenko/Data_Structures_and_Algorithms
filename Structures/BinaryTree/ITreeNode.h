//
// Created by nachtwandler on 13.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ITREENODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ITREENODE_H

#include "../INode.h"

class ITreeNode : public INode<int> {
public:
    virtual void push(ITreeNode *newNode) = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_ITREENODE_H
