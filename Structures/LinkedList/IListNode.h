//
// Created by nachtwandler on 12.01.23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_ILISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_ILISTNODE_H
template<class T>
class IListNode : public INode<T>{
public:
    virtual void deleteNext() = 0;
    virtual void push(IListNode<T>* newNode) = 0;
    virtual IListNode<T>* getNext() = 0;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_ILISTNODE_H
