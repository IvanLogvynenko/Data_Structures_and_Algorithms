//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISET_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISET_H

#include "../IStructure.h"

template <class T>
class ISet : IStructure<T> {
public:
    ISet() : IStructure<T>(0) {}
    virtual bool checkExistence(T) = 0;
    virtual void deleteElement(T) = 0;
};
#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISET_H
