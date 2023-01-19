//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SET_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SET_H

#include "ISet.h"
#include "../LinkedList/LinkedList.h"

#include <set>

template <class T>
class Set : public ISet<T>{
protected:
    //here should be some hashing code, but it isn`t here because i`m too clever to lose my time doing it
    LinkedList<T> *linkedList;
public:
    Set() : ISet<T>(), linkedList(new LinkedList<T>()) {}
    void push(T) override;

    bool checkExistence(T);
};

template class Set<int>;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SET_H