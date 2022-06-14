#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m; 
    cin>>n>>m;
    string g[n];
    for(int i=0;i<n;i++) cin>>g[i];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            if(g[i][j]=='*'){
                int ci = i+1;
                while(ci<n&&g[ci][j]=='.'){
                    ci++;
                }
                g[i][j] = '.';
                g[ci-1][j] = '*';
            }
        }
    }

    for(int i=0;i<n;i++) cout<<g[i]<<"\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}