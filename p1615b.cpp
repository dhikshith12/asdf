#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

const int maxn = 200005;
const int maxl = 20;
int bd[maxl][maxn];


void fun(ll tt)
{
    int l,r;
    cin>>l>>r;
    int ans = r-l+1;
    for(int i=0;i<maxl;i++) ans = min(ans,r-l+1-bd[i][r]+bd[i][l-1]);
    cout<<ans<<'\n';
}

int main()
{
    for(int i=0;i<maxl;i++)
    {
        for(int j=1;j<maxn;j++) bd[i][j]=bd[i][j-1]+((j>>i)&1);
    }
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
