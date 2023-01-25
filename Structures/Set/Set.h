//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SET_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SET_H

#include "ISet.h"
#include "../LinkedList/LinkedList.h"

#include <algorithm>

template <class T>
class Set : public ISet<T>{
protected:
    std::vector<std::vector<T*>> elements = { nullptr };

    std::hash<T> hashStructure;
public:
    Set() : ISet<T>() {}

    void push(T*) override;

    bool checkExistence(T);
};

template<class T>
bool Set<T>::checkExistence(T value) {
    int id = hashStructure(value);
}

//TODO: make a solution that won`t bring any collisions
template<class T>
void Set<T>::push(T* value) {
    int id = hashStructure(value);

    if (this->elements.size() >= id) {
        this->elements.reserve(id);
        this->elements[id] = value;
        return;
    }
    else{
        this->elements[id].push_back(value);
    }
}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SET_H