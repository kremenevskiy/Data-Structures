#include <iostream>
#include "Graph.h"


int main() {
    Graph<int> g;

    g.addDirEdge(2, 0);
    g.addDirEdge(0, 2);
    g.addDirEdge(1, 2);
    g.addDirEdge(0, 1);
    g.addDirEdge(3, 3);
    g.addDirEdge(1, 3);


    g.DFS(2);




    return 0;
}
