//
// Created by nachtwandler on 19.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_IPAIR_H
#define DATA_STRUCTURES_AND_ALGORITHMS_IPAIR_H

#include "../INode.h"

template <class K, class V>
class IPair : public INode<V> {
public:
    virtual K getKey() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_IPAIR_H
