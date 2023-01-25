//
// Created by nachtwandler on 14.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SET_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SET_H

#include <vector>

#include "ISet.h"

template <class T>
class Set : public ISet<T>{
protected:
    std::vector<std::vector<T>> elements = { };

    std::hash<T> hashStructure;
public:
    Set() : ISet<T>() {}

    void push(T) override;

    bool checkExistence(T) override;
    void deleteElement(T) override;
};

template<class T>
void Set<T>::deleteElement(T value) {
    std::vector<T> &vector = this->elements[hashStructure(value)];

    for (auto& item : vector) {
        if (item == value)
            vector.erase(std::find(vector.begin(), vector.end(), item));
        return;
    }
}

template<class T>
bool Set<T>::checkExistence(T value) {
    for (auto item : this->elements[hashStructure(value)]) {
        if (item == value)
            return true;
    }
    return false;
}

//TODO_later)))): make a solution that won`t bring any collisions
template<class T>
void Set<T>::push(T value) {
    int id = hashStructure(value);

    if (this->elements.size() <= id) {
        this->elements.reserve(id+1);
        this->elements[id].push_back(value);
        return;
    }
    else
        for (auto item: this->elements[id])
            if (item == value)
                throw -1;

    this->elements[id].push_back(value);
}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SET_H