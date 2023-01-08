//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_INODE_H


class INode {
public:
    virtual ~INode() {};
    virtual void push(INode* newNode) = 0;
    virtual int getValue() = 0;
    virtual operator int() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
