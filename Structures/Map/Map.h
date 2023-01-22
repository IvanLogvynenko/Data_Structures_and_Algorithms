//
// Created by nachtwandler on 19.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_MAP_H
#define DATA_STRUCTURES_AND_ALGORITHMS_MAP_H

#include "IMap.h"

template <class K, class V>
class Map : public IMap<K, V>{
public:
    Map() : IMap<K, V>() {}
    void push(K, V) override;

};

//this time I`ll leave it here because I`m tired as sheet to write all possible variants))))



#endif //DATA_STRUCTURES_AND_ALGORITHMS_MAP_H
