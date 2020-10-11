#include "Graph.h"
template<class T>
void Graph<T>::DFS(T node) {
    std::map<T, bool> visited;
    DFS_helper(node, visited);
}


template<class T>
void Graph<T>::DFS_helper(T start, std::map<T, bool> &visited) {

    if (visited.find(start) != visited.end()) {
        return;
    }
    visited[start] = true;
    std::cout << start << ' ';

    for(auto & nbr : eList[start]){
        DFS_helper(nbr, visited);
    }
}


template void Graph<int>::DFS(int node);
