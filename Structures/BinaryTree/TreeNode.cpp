//
// Created by nachtwandler on 08.01.23.
//

#include "TreeNode.h"
#include "../Exceptions/NodeAlreadyExistsException.h"

void TreeNode::push(INode *newNode) {
    if (newNode->getValue() == this->value) throw NodeAlreadyExistsException(this, newNode);
    if (*this > *newNode) {
        if (this->right){
            this->right->push(newNode);
            return;
        }
        else{
            this->right = newNode;
            return;
        }
    }
    else{
        if (this->left){
            this->left->push(newNode);
            return;
        }
        else{
            this->left = newNode;
            return;
        }
    }
}

TreeNode::~TreeNode() {
    delete this->right;
    delete this->left;
}
