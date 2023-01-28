//
// Created by nachtwandler on 19.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_PAIR_H
#define DATA_STRUCTURES_AND_ALGORITHMS_PAIR_H

#include "IPair.h"

template<class K, class V>
class Pair : public IPair<K, V> {
protected:
    K key;
    V value;
public:
    K getKey() override { return this->key; }
    V getValue() override { return this->value; }
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_PAIR_H
