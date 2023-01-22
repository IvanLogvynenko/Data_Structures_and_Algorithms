//
// Created by nachtwandler on 19.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_IMAP_H
#define DATA_STRUCTURES_AND_ALGORITHMS_IMAP_H

#include "../IStructure.h"

template <class K, class V>
class IMap : public IStructure<K> {
    IMap() : IStructure<K>(0) {}
    void push(K key) = delete;
    void push(K key, V value) = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_IMAP_H
