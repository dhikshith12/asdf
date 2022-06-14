#pragma once
#include<map>
#include<list>
// Graph class represents a directed graph
// using adjacency list representation
class Graph {
public:
    std::map<int,bool> visited;
    std::map<int,std::list<int>> adj;

    //function to add an edge to the graph
    //directed edge from v->w
    void addEdge(int v, int w);

    //DFS traversal of the vertices
    //reacable from v
    void DFS();
    void DFSUtil(int v);
};

