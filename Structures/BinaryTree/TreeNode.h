//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H

#include "../INode.h"

class TreeNode : public INode<int> {
private:
    INode *right, *left;
    int value;
public:
    explicit TreeNode(int value) : value(value), right(nullptr), left(nullptr) {}

    ~TreeNode() override;

    void push(INode *newNode);// override;
    int getValue() override { return this->value; }

    bool operator> (INode& node) const { return this->value > node.getValue(); }
    bool operator< (INode& node) const { return this->value < node.getValue(); }
    explicit operator int() override { return this->value; }
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H
