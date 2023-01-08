//
// Created by nachtwandler on 07.01.23.
//

#include "BinaryTree.h"

template<class T>
BinaryTree<T>::BinaryTree(unique_ptr<TreeNode<T>> startNode) : startNode(startNode) {}

template<class T>
BinaryTree<T>::BinaryTree(T value) : startNode(new TreeNode(value)) {}

template<class T>
BinaryTree<T>::BinaryTree() : startNode(nullptr) {}

template<class T>
void BinaryTree<T>::push(unique_ptr<TreeNode<T>> newNode) {
    if (this->startNode)
        this->startNode->push(newNode);
    else
        this->startNode = std::move(newNode);
}


template<class T>
void BinaryTree<T>::push(T value) {
    push(new TreeNode(value));
}
