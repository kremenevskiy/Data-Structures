cmake_minimum_required(VERSION 3.16)
project(Graphs)

set(CMAKE_CXX_STANDARD 14)

add_executable(Graphs main.cpp Graph.h Graph.cpp DFS.cpp BFS.cpp)