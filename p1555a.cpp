#include<bits/stdc++.h>
using namespace std;
#define u unsigned
#define l long
vector<int> v = {6, 8, 10};
unordered_map<int,int> times;

u l l rec(int r,vector<int> items,u l l n,vector<u l l> stimes,int currChildid )
{
    if(r==0)
        return n;
    vector<u l l> ctimes;
    for(int i=0;i<r;i++)
    {
        vector<int> ci = items;
        int it = ci[i];
        ctimes[i] = stimes[currChildid]+(n/it)*times[it];
        u l l next = rec(r-1,ci,n%it,ctimes,i);
        stimes[currChildid]+=(n/it)*times[it];
    }
    if(r==3)
    {
        cout<<stimes[0]<<endl;
    }
    return n;
}

void solve()
{
    u l l n; cin>>n;
    vector<u l l> stimes = {0};
    rec(3,v,n,stimes,0);
}

int main()
{
    int time=10;
    for(int i=0;i<3;i++)
    {
        times[v[i]]=time+5;
        time+=5;
    }
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
