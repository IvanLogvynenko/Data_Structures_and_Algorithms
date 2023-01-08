//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H

#include "INode.h"

class IStructure {
protected:
    int size = 0;
public:
    IStructure(int size) : size(size) {}
    virtual void push(int value) = 0;
    virtual void push(INode* newNode) = 0;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H
