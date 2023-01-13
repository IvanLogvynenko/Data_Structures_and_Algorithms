//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H

#include "INode.h"

template <class T>
class IStructure {
protected:
    T size = 0;
public:
    explicit IStructure(int size) : size(size) {}

    virtual void push(T value) = 0;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISTRUCTURE_H
