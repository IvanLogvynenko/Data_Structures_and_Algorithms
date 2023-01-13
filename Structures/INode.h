//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_INODE_H

template <class T>
class INode {
public:
    virtual T getValue() = 0;
    virtual explicit operator T() = 0;
    virtual ~INode() = default;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_INODE_H
