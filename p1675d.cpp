#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin>>n;
    vector<vector<int>> adj(n,vector<int>());
    int root;
    for(int i=0;i<n;i++) {
        int t; cin>>t;
        adj[t-1].push_back(i);
        if(t-1==i)  root = i;
    }
    stack<int> st;
    st.push(root);
    vector<bool> v(n,false);
    vector<vector<int>> paths;
    vector<int> path;
    while(!st.empty())
    {
        root = st.top();
        st.pop();
        v[root] = true;
        path.push_back(root);
        if(adj[root].size()==0||(adj[root].size()==1&&adj[root][0]==root))
        {
            paths.push_back(path);
            path.clear();
        }
        for(int i=0;i<adj[root].size();i++)
            if(!v[adj[root][i]])
                st.push(adj[root][i]);
    }
    cout<<paths.size()<<"\n";
    for(int i=0;i<paths.size();i++)
    {
        cout<<paths[i].size()<<"\n";
        for(int j=0;j<paths[i].size();j++)
            cout<<paths[i][j]+1<<" ";
        cout<<"\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}