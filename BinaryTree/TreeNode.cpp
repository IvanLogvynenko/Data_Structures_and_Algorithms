//
// Created by nachtwandler on 07.01.23.
//

#include "TreeNode.h"
template<class T>
TreeNode<T>::TreeNode(T value) : value(value), right(nullptr), left(nullptr){}

template<class T>
void TreeNode<T>::push(TreeNode<T>* newNode) {
    if(newNode < this)
}