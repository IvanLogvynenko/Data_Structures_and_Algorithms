//
// Created by nachtwandler on 09.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ISORTABLESTRUCTURE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ISORTABLESTRUCTURE_H

#include <vector>
#include "LinkedList/IListNode.h"

template<class T>
class ISortableStructure{
public:
    virtual std::vector<T> getArray() = 0;
    virtual IListNode<T>* operator[](int index) = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_ISORTABLESTRUCTURE_H
