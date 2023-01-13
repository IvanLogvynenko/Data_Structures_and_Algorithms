//
// Created by nachtwandler on 08.01.23.
//

#include "LinkedList.h"

template<class T>
void LinkedList<T>::push(T value) {
    this->push(new ListNode<T>(value));
}

template<class T>
void LinkedList<T>::push(IListNode<T>* newNode) {
    this->size++;
    if (this->root)
        this->root->push(newNode);
    else{
        this->root = new ListNode<int>(newNode->getValue());
        delete newNode;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getArray() {
    using std::vector;
    vector<T> result = {};
    IListNode<T>* currentNode = this->root;
    while (currentNode){
        result.push_back(currentNode->getValue());
        currentNode = currentNode->getNext();
    }
    return result;

}