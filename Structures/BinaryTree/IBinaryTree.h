//
// Created by nachtwandler on 13.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_IBINARYTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_IBINARYTREE_H

#include "../IStructure.h"
#include "ITreeNode.h"


class IBinaryTree : public IStructure<int>{
public:
    explicit IBinaryTree(int size) : IStructure<int>(size) {}
    virtual void push(ITreeNode *newNode) = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_IBINARYTREE_H
