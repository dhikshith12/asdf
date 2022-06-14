/*
                TOPOLOGICAL SORTING
Topological sorting for Directed Acyclic Graph(DAG) is a linear ordering of
vertices such that for every directed edge u,v vertex u comes before v in the
ordering. Topological Sorting for a graph is not possible if the graph is not
a DAG.

For example, a topological sorting of the following graph is "5 4 2 3 1 0".
There can be more than one topological sorting for a graph. For example, another topological sorting of the following graph is "4 5 2 3 1 0". The
first vertex in the topological sorting is always a vertex with in-degree 0
(a vertex with no incoming edges).

*/

#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<stack>
#include<string.h>
class Graph{
    //No. of vertices`
    int v;
    int* arr;
    //A function used by topologicalSort
    void topologicalSortUtil(int v,bool visited[],
                std::stack<int>& Stack);
public:
    //constructor
    Graph(int v,int arr[]);

    //pointer to an array containing adjacency lists for each vertex
    std::map<int,std::list<int>> adj;
    //function to add an edge to graph
    void addEdge(int v,int w);

    //prints a Topological Sort of
    //the complete graph
    void topologicalSort();
};

Graph::Graph(int v,int arr[]){
    this->v = v;
    this->arr = new int[v];
    for(int i=0;i<v;i++){
        this->arr[i] = arr[i];
    }
}

void Graph::addEdge(int i,int j){
    if(i<v&&j<v)
        adj[i].push_back(j);
}

void Graph::topologicalSortUtil(int v,bool visited[],std::stack<int>&Stack){
    //Mark the current node as visited.
    visited[v] = true;
    std::list<int>::iterator i;
    for(i = adj[v].begin();i!=adj[v].end();++i)
        if(!visited[*i])
            topologicalSortUtil(*i,visited,Stack);

    Stack.push(arr[v]);
}

void Graph::topologicalSort()
{

    //Mark all the vertices as not visited
    bool* visited = new bool[v];
    for(int i = 0;i<v;i++)
        visited[i] = false;
    std::stack<int> Stack;
    //Call the recursive helper function
    //to store Topological
    //Sort starting from all
    //vertices one by one
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            topologicalSortUtil(i,visited,Stack);
        }
    }
    while(Stack.empty()==false){
        std::cout<<Stack.top()<<' ';
        Stack.pop();
    }
}


int main()
{
    int v; std::cin>>v;
    int arr[v];
    for(int i=0;i<v;i++) std::cin>>arr[i];
    Graph g(v,arr);
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            if((arr[i]&arr[j])!=0){
                if(arr[i]>arr[j]){
                    g.addEdge(j,i);
                }else{
                    g.addEdge(i,j);
                }
            }
        }
    }

    std::cout<<"Following is a Topological Sort of the given Graph\n";
    g.topologicalSort();
    std::cout<<"\n adjacency list\n";
    std::map<int,std::list<int>>::iterator i;
    for(i=g.adj.begin();i!=g.adj.end();++i){
        std::cout<<arr[i->first]<<"->";
        for(auto j:i->second)
            std::cout<<arr[j]<<' ';
        std::cout<<'\n';
    }
}

