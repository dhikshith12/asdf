#include<bits/stdc++.h>
using namespace std;

class Graph{
    map<int,vector<int>> adj;
    map<int, bool> visited;
public:
    void addEdge(int v,int e){
        adj[v].push_back(e);
    }
    void dfsUtil(int v){
       visited[v] = true;
       cout<<v<<" ";
       for(auto j: adj[v]){
           if(!visited[j])
               dfsUtil(j);
       }
    }
    void dfs(){
        for(auto i: adj){
            if(visited[i.first]==false)
                dfsUtil(i.first);
        }
    }
};

int main(){
    Graph g;
    int n;
    cout<<"Number of Edges: ";
    cin>>n;
    int v,e;
    while(n>0){
        cin>>v>>e;
        g.addEdge(v,e);
        n--;
    }
    cout<< "Following is Depth First Traversal \n";
    g.dfs();
    cout<<endl;
    return 0;
}
