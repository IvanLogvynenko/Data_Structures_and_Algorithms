//
// Created by nachtwandler on 13.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
#define DATA_STRUCTURES_AND_ALGORITHMS_STACK_H

#include "../LinkedList/LinkedList.h"
#include "IStack.h"

template<class T>
class Stack : public IStack<T>, public LinkedList<T>{
public:
    IListNode<T>* pop() override;
};

template class Stack<int>;


#endif //DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
