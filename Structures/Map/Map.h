//
// Created by nachtwandler on 19.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_MAP_H
#define DATA_STRUCTURES_AND_ALGORITHMS_MAP_H

#include <functional>
#include "IMap.h"

template <class K, class V>
class Map : public IMap<K, V>{
protected:

    std::hash<K> hashStructure;
public:
    Map() : IMap<K, V>() {}
    void push(K, V) override;
};

template<class K, class V>
void Map<K, V>::push(K, V) {

}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_MAP_H
