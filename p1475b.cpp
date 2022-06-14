#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

map<int,bool> dp;

bool composible(int n)
{
    if(dp.find(n)!=dp.end())
        return dp[n];
    else{
    if(n<2020)
        return dp[n]=false;
    if(n==2020||n==2021)
        return dp[n]=true;
    return dp[n]=composible(n-2020)||composible(n-2021);
    }
}

void fun(ll tt)
{
    int n; cin>>n;
    if(composible(n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
