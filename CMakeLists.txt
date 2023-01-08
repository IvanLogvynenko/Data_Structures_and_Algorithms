cmake_minimum_required(VERSION 3.24)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Structures_and_Algorithms main.cpp Strutures/BinaryTree/BinaryTree.cpp Strutures/BinaryTree/BinaryTree.h Strutures/BinaryTree/TreeNode.cpp Strutures/BinaryTree/TreeNode.h Strutures/BinaryTree/Exceptions/NodeAlreadyExistsException.cpp Strutures/BinaryTree/Exceptions/NodeAlreadyExistsException.h Strutures/IStructure.h Strutures/INode.h Strutures/ExceptionInterfaces/IAlredyExistsEXception.h Strutures/LinkedList/LinkedList.cpp Strutures/LinkedList/LinkedList.h)
