//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_IALREDYEXISTSEXCEPTION_H
#define DATA_STRUCTURES_AND_ALGORITHMS_IALREDYEXISTSEXCEPTION_H

#include "../INode.h"

class IAlreadyExistsException{
public:
    virtual void replace() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_IALREDYEXISTSEXCEPTION_H
