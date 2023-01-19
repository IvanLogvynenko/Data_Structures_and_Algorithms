//
// Created by nachtwandler on 16.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISEARCHABLESTRUCTURE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISEARCHABLESTRUCTURE_H

#include "INode.h"

template <class T>
class ISearchableStructure{
    virtual INode<T>* find(T value) = 0;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISEARCHABLESTRUCTURE_H
