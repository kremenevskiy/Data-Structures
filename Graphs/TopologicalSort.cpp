#include "Graph.h"

template<class T>
void Graph<T>::topologicalSort() {
    std::map<T, bool> visited;
    std::stack<T> stack;

    for (int i = 0; i < eList.size(); ++i) {
        visited[i] = false;
    }

    for(int i = 0; i < eList.size(); ++i) {
        if (!visited[i]) {
            visited[i] = true;
            topSort_help(i, visited, stack);
        }
    }

    while(!stack.empty()) {
        std::cout << stack.top() << ' ';
        stack.pop();
    }
}


template<class T>
void Graph<T>::topSort_help(T & start, std::map<T, bool> & visited, std::stack<T> & stack) {
    for (auto & nbr : eList[start]) {
        if (!visited[nbr]) {
            visited[nbr] = true;
            topSort_help(nbr, visited, stack);
        }
    }
    stack.push(start);
}


template void Graph<int>::topologicalSort();
