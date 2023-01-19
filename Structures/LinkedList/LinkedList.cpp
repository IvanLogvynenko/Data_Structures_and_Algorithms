//
// Created by nachtwandler on 08.01.23.
//

#include "LinkedList.h"
#include <string>
#include <sstream>

template<class T>
void LinkedList<T>::push(T value) {
    this->size++;
    if (this->root)
        this->root->push(new ListNode<T>(value));
    else{
        this->root = new ListNode<int>(value);
    }
}

template<class T>
INode<T> *LinkedList<T>::find(T value) {
    IListNode<T>* currentNode = this->root;
    while(currentNode){
        if (currentNode->getValue() == value)
            return currentNode;
        currentNode = currentNode->getNext();
    }
    return nullptr;
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

template<class T>
IListNode<T>* LinkedList<T>::operator[](int index) {
    if (index >= this->size) return nullptr;
    IListNode<T>* node = this->root;
    for (int i = 0; i < index; ++i) {
        node = node->getNext();
    }
    return node;
}

template<class T>
std::ostream &LinkedList<T>::operator<<(std::ostream &out) {
    std::stringstream ss;
    for (auto item : this->getArray())
        ss << item << " ";
    out << ss.str();
    return out;
}