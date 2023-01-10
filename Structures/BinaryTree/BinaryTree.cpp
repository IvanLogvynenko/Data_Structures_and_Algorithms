//
// Created by nachtwandler on 08.01.23.
//

#include "BinaryTree.h"

void BinaryTree::push(int value) {
    this->push(new TreeNode(value));
}

void BinaryTree::push(INode<int>* newNode) {
    this->size++;
    if (this->root)
        this->root->push(newNode);
    else
        this->root = newNode;
}
