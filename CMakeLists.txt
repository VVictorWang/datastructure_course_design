cmake_minimum_required(VERSION 3.9)
project(datas_course)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.h BinTree.h Queue.h BST.h AVL.h List.h)
add_executable(datas_course ${SOURCE_FILES})