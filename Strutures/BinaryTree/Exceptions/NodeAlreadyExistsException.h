//
// Created by nachtwandler on 08.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H
#define DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H

#include <exception>
#include "../../ExceptionInterfaces/IAlredyExistsEXception.h"
#include "../../INode.h"

class NodeAlreadyExistsException : public IAlreadyExistsException, public std::exception {
private:
    INode *oldNode, *newNode;
public:
    NodeAlreadyExistsException(INode* oldNode, INode* newNode) : oldNode(oldNode), newNode(newNode) {}
    void replace() override;
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_NODEALREADYEXISTSEXCEPTION_H
