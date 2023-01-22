//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SET_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SET_H

#include "ISet.h"
#include "../LinkedList/LinkedList.h"

#include <iostream>

template <class T>
class Set : public ISet<T>{
protected:
    std::vector<T> elements = {};
    std::vector<int> ids = {};

    std::hash<T> hashStructure;
public:
    Set() : ISet<T>() {}

    void push(T) override;

    bool checkExistence(T);
};

template<class T>
bool Set<T>::checkExistence(T value) {

}


template<class T>
void Set<T>::push(T value) {

}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SET_H