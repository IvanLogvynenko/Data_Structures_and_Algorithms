//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_INODE_H

template <class T>
class INode {
public:
    virtual ~INode() = default;
    virtual void push(INode<T>* newNode) = 0;
    virtual T getValue() = 0;
    virtual explicit operator T() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
