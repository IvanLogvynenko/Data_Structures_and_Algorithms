//
// Created by nachtwandler on 07.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H

#include "TreeNode.h"
#include <memory>

using std::unique_ptr;

template <class T>
class BinaryTree {
private:
     unique_ptr<T> startNode;
public:
    BinaryTree();
    explicit BinaryTree(unique_ptr<TreeNode<T>> startNode);
    explicit BinaryTree(T value);
    void push(unique_ptr<TreeNode<T>> newNode);
    void push(T value);
};




#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H