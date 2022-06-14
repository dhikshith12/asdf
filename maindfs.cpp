#include<iostream>
#include"dfs.cpp"
int main()
{
    Graph g;
    int n; std::cin>>n;
    while(n--){
        int v,w;
        std::cin>>v>>w;
        g.addEdge(v,w);
    }
    std::cout<< "Following is Depth First Traversal\n";
    g.DFS();
    std::cout<<"\n adjacency list \n";
    for(auto i:g.adj){
        std::cout<<i.first<<"->";
        for(int j:i.second) std::cout<<j<<' ';
        std::cout<<"\n";
    }
    return 0;
}
