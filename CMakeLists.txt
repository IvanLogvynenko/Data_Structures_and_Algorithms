cmake_minimum_required(VERSION 3.24)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Structures_and_Algorithms main.cpp Structures/BinaryTree/BinaryTree.cpp Structures/BinaryTree/BinaryTree.h Structures/BinaryTree/TreeNode.cpp Structures/BinaryTree/TreeNode.h Structures/Exceptions/NodeAlreadyExistsException.cpp Structures/Exceptions/NodeAlreadyExistsException.h Structures/IStructure.h Structures/INode.h Structures/LinkedList/LinkedList.cpp Structures/LinkedList/LinkedList.h Structures/LinkedList/ListNode.cpp Structures/LinkedList/ListNode.h)
