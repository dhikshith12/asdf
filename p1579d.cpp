#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

struct sb{
    int id,w;
    bool operator<(const sb& a) const{ return w<a.w; }
};

void fun(ll tt)
{
    int n,j;
    priority_queue<sb> q;
    for(int i=1;i<=n;i++)
    {
       cin>>j;
       q.push({i,j});
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
