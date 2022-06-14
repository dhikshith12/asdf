#include<bits/stdc++.h>
using namespace std;

bool valid(int a, int b,int n, int m){
    return (a>=0&&a<n&&b>=0&&b<m);
}
void solve()
{
    int n,m;
    cin>>n>>m;
    string g[n];
    for(int i=0;i<n;i++)    cin>>g[i];
    long long a = 0,b = 0,k = 0;
    vector<pair<int,int>> vpi;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='B')
            {
                a+=(i+1);
                b+=(j+1);
                k++;
                vpi.push_back({i+1,j+1});
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
}