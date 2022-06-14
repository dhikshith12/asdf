#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;cin>>n;
    vector<int> dp(n+1,0);
    for(int i=0;i<=n;i++){
        dp[i] = __builtin_popcount(i);
    }
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
