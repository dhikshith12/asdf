#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MAX 300007


void dfs(int s,vector<int>&weight,vector<vector<int>>adj){
    weight[s] = 1;
    for(auto u: adj[s]){
        dfs(u,weight,adj);
        weight[s]+=weight[u];
    }
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n,vector<int>());
    vector<int> weight(n,0);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;    v--;
        adj[u].push_back(v);
    }
    
    int root = 0;
    dfs(root,weight,adj);
    priority_queue<pair<int,int>> q;
    // q.push({weight[root],root}); // TODO: put the weight in first position 
    long long ans = 0;
    int count = 0;
    while (count<n||!q.empty())
    {
        count++;
        pair<int,int> r = q.top();
        q.pop();
        root = r.second;
        if(root!=0){
            ans += (r.first-1);
            continue;
        }
        for(auto adjacent: adj[root]){
            q.push({weight[adjacent],adjacent});
        }
    }
    cout<<ans<<endl;
 }
    

int main()
{
    fast_io;
    int t; cin>>t;
    while(t--){
        solve();
    }
}