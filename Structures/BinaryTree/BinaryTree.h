//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H

#include "TreeNode.h"
#include "../IStructure.h"
#include "../INode.h"


class BinaryTree : public IStructure {
private:
    INode* root;
public:
    BinaryTree() : root(nullptr), IStructure(0) {}
    BinaryTree(INode* root) : root(root), IStructure(1) {}
    explicit BinaryTree(int value) : root(new TreeNode(value)), IStructure(1) {}

    ~BinaryTree() { delete root; }

    void push(int value) override;
    void push(INode* newNode) override;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
