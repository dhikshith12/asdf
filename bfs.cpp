#include<iostream>
#include<queue>
#include<list>

using namespace std;

class Graph
{
    int V; //number of vertices
    list<int>* adj;
public:
    Graph(int V):V(V){
        adj = new list<int>[V];
    }
    ~Graph(){
        delete [] adj;
    }

    void addEdge(int v,int w){
        adj[v].push_back(w);
    }

    void BFS(int s){
        bool visited[V];
        for(int i=0;i<V;i++)
            visited[i] = false;

        queue<int> q;
        visited[s] = true;
        q.push(s);

        while(!q.empty()){
            s = q.front();
            visited[s] = true;
            cout<<s<<" ";
            q.pop();

            list<int>::iterator i;
            for(i=adj[s].begin();i!=adj[s].end();i++){
                if(!visited[*i]){
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
};
