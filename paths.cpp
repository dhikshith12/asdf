#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,m;
    cin>>n>>m;
    ll dp[n];
    memset(dp,0,n*sizeof(ll));
    dp[0] = 1;
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
           dp[j]+=dp[j-1];
        }
    }
    cout<<dp[n-1]<<'\n';
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
