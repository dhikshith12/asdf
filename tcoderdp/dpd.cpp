#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 1e9 + 5;
void min_self(ll& a,ll b)
{
    a = min(a,b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> w(n);
    vector<int> p(n);
    int max_p=0;
    for(int i=0;i<n;i++){
        cin>>w[i]>>p[i];
        max_p+=p[i];
    }
    vector<ll> dp(max_p+1,INF);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int pr = max_p - p[i];pr>=0;pr--){
            min_self(dp[pr+p[i]],dp[pr]+w[i]);
        }
    }
    ll max_c=0;
    for(int i=0;i<max_p+1;i++)
    {
        if(dp[i]<=m){
            max_c = max((ll)i,max_c);
        }
    }
    cout<<max_c<<endl;
}

