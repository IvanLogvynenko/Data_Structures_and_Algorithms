#include <iostream>

#include "Structures/IStructure.h"

#include "Structures/LinkedList/LinkedList.h"

int main() {
    LinkedList<int> list;
    list.push(7);
    list.push(9);
    list.push(5);
    list.push(2);
    for (auto& i : list.getArray()) {
        std::cout << i << std::endl;
    }
}
