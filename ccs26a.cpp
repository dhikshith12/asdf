#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,x,y;
    cin>>n>>x>>y;
    int cx = x*ceil((double)n/100);
    int cy = y*ceil((double)n/4);
    int crx = n%100;
    int cfx = x*(n/100);
    cx = min(cx,cfx+(int)ceil((double)crx/4)*y);
    cout<<min(cx,cy)<<endl;
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
