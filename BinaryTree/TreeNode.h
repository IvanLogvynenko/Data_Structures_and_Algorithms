//
// Created by nachtwandler on 07.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H

template<class T>
class TreeNode {
private:
    T value;
    TreeNode* right, *left;
public:
    explicit TreeNode(T value);
    TreeNode* getRight() { return this->right; }
    TreeNode* getLeft()  { return this->left; }

    void push(TreeNode<T>* newNode);

    T getValue() { return this->value; }
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_TREENODE_H