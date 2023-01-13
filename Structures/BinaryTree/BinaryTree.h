//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H

#include "ITreeNode.h"
#include "IBinaryTree.h"


class BinaryTree : public IBinaryTree{
private:
    ITreeNode* root;
public:
    BinaryTree() : root(nullptr), IBinaryTree(0) {}
    BinaryTree(ITreeNode* root) : root(root), IBinaryTree(1) {}

    ~BinaryTree() { delete root; }

    void push(int value) override;
    void push(ITreeNode *newNode) override;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
