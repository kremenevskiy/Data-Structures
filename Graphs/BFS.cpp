#include "Graph.h"
template<class T>
void Graph<T>::BFS(T start) {
    std::queue<T> queue;
    std::map<T, bool> visited;

    queue.push(start);
    visited[start] = true;

    while (!queue.empty()) {
        start = queue.front();
        std::cout << start << ' ';
        for (auto & nbr : eList[start]) {
            if (visited.find(nbr) == visited.end()){
                queue.push(nbr);
                visited[nbr] = true;
            }
        }
        queue.pop();
    }
}


template void Graph<int>::BFS(int);
