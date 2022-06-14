#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<int> e[300005];

/* Find Minimum Distance to a single child vertex or leaf node, at each step 
    we cannot save 2 nodes from infection one the child we will infect and the deleted one.
*/
int ans = INT_MAX;
void dfs(int s, int prev, int d){
    if(s==1){
        if(e[s].size()==1){
            ans = min(ans,d+1);
            return;
        }
    }else
    {
        if(e[s].size()==1){
            ans = min(ans, d);
            return;
        }
        if(e[s].size()==2){
            ans = min(ans,d+1);
            return;
        }
    }
    
    for(auto u: e[s]){
        if(u!=prev){
            dfs(u, s, d+2);
        }
    }
}

void solve()
{
    int n; cin>>n;
    
    for(int i=0;i<n-1;i++){
        int u, v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    dfs(1,0,1);
    cout<<n-ans<<endl;
    ans = INT_MAX;
    for(int i=1;i<=n;i++)    e[i].clear();
}

int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
}
