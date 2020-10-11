#ifndef GRAPHS_GRAPH_H
#define GRAPHS_GRAPH_H

#include <iostream>
#include <list>
#include <map>
#include <queue>


template<class T>
class Graph{
    std::map<T, std::list<T> > eList;
public:
    void addNotDirEdge(T firstVert, T secondVert){
        eList[firstVert].push_back(secondVert);
        eList[secondVert].push_back(firstVert);
    }

    void addDirEdge(T firstVert, T secondVert){
        eList[firstVert].push_back(secondVert);
    }

    void DFS(T node);
    void DFS_helper(T start, std::map<T, bool> &visited);

    void BFS(T start);
};

#endif //GRAPHS_GRAPH_H
