#include<iostream>
#include<list>
#include"dfs.h"
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v)
{
    //Mark the current node as visited and print it.
    visited[v] = true;
    std::cout<<v<< ' ';

    //Recur for all the vertices adjacent
    //to this vertex
    std::list<int>::iterator i;
    for(i = adj[v].begin(); i!=adj[v].end();++i)
        if (!visited[*i])
            DFSUtil(*i);
}

void Graph::DFS()
{
    for( auto i: adj)
        if(visited[i.first] == false)
            DFSUtil(i.first);
}
