#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int v,bool visited[],bool *rs);
public:
        Graph(int v);
        ~Graph(){

        }
        void addEdge(int v,int w);
        bool isCyclic();
};


Graph::Graph(int v){
    this->V = v;
    adj = new list<int>[V];
}

void Graph::addEdge(int v,int w){
    adj[v].push_back(w);
}

bool Graph::isCyclicUtil(int v,bool visited[],bool* rs){
    if(visited[v]==false){
        visited[v] = true;
        rs[v] = true;

        list<int>::iterator i;
        for(i=adj[v].begin();i!=adj[v].end();++i){
            if(!visited[*i]&&isCyclicUtil(*i,visited,rs)){
                return true;
            }
            else{
                if(rs[*i]==true){
                    return true;
                }
            }
        }
    }
    rs[v] = false;
    return false;
}
bool Graph::isCyclic(){
    bool *visited = new bool[V];
    bool *rs = new bool[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
        rs[i] = false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i]&&isCyclicUtil(i,visited,rs)){
            return true;
        }
    }
    delete [] visited;
    delete [] rs;
    return false;
}
int main()
{
    cout<<"Number of Vertices: ";
    int v,e;
    cin>>v;
    Graph g(v);
    cout<<"Number of Edges: ";
    cin>>e;
    while(e>0){
        int i,j;
        cin>>i>>j;
        g.addEdge(i,j);
        e--;
    }

    if(g.isCyclic())
        cout<<"Graph contains cycle\n";
    else
        cout<<"Graph doesn't contain cycle\n";

    return 0;
}
