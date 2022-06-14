#include<iostream>
#include<bitset>
#include<vector>
#include<algorithm>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MAX 300007
#define inf 1000000007

vector<int> adj[MAX];
int weight[MAX], dp[MAX];
void dfs1(int s, int e){
    dp[s] = 0, weight[s] = 1;
    int t = 0;
    for(auto u: adj[s]) if(u!=e)
    {
        dfs1(u, s);
        t+=dp[u];
        weight[s]+=weight[u];
    }
    for(auto u: adj[s]) if(u!=e)
    {
        dp[s] = max(dp[s],t-dp[u]+weight[u]-1);
    }
}
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++)    adj[i].clear();
        for(int i=0;i<n-1;i++){
            int u, v;
            cin>>u>>v;
            u--;    v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs1(0,-1);
        cout<<dp[0]<<endl;
    }
}