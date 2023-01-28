cmake_minimum_required(VERSION 3.24)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Structures_and_Algorithms main.cpp
        Structures/IStructure.h
        Structures/ISortableStructure.h
        Structures/ISearchableStructure.h


        Structures/INode.h


        Structures/BinaryTree/IBinaryTree.h
        Structures/BinaryTree/BinaryTree.cpp
        Structures/BinaryTree/BinaryTree.h

        Structures/BinaryTree/ITreeNode.h
        Structures/BinaryTree/TreeNode.cpp
        Structures/BinaryTree/TreeNode.h


        Structures/LinkedList/LinkedList.cpp
        Structures/LinkedList/LinkedList.h

        Structures/LinkedList/IListNode.h
        Structures/LinkedList/ListNode.cpp
        Structures/LinkedList/ListNode.h

        Structures/Stack/IStack.h
        Structures/Stack/Stack.cpp
        Structures/Stack/Stack.h


        Structures/Set/ISet.h
        Structures/Set/Set.h


        Structures/Map/IMap.h
        Structures/Map/Map.cpp
        Structures/Map/Map.h

        Structures/Map/IPair.h
        Structures/Map/Pair.cpp
        Structures/Map/Pair.h


        Structures/Exceptions/NodeAlreadyExistsException.cpp
        Structures/Exceptions/NodeAlreadyExistsException.h
        )
