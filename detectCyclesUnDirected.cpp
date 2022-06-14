#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
    int V; //number of vertices
    list<int> *adj;
    Graph(int v){
        this->V = v;
        adj = new list<int>[v];
    }
    ~Graph(){
        delete [] adj;
    }
    bool isCyclic();
    void addEdge(int v,int w);
    bool isCyclicUtil(int v,bool visited[],int parent);
};
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
bool Graph::isCyclicUtil(int v,bool visited[],int parent)
{
    if(visited[v]==false){
       visited[v] = true;

       list<int>::iterator i;
       for(i=adj[v].begin();i!=adj[v].end();++i){
            if(!visited[v]&&isCyclicUtil(*i,visited,v))
            {
                return true;
            }
            else if(*i!=parent)
                return true;
       }
    }
    return false;
}
bool Graph::isCyclic(){
    bool *visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i]&&isCyclicUtil(i,visited,-1)){
            return true;
        }
    }
    delete [] visited;
    return false;
}
int main(){
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

}
