#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int ans = 0;
    while(n)
    {
        int pw = 1;
        while(n>=10*pw) pw*=10;
        ans+=pw;
        n-=pw;
        n+=pw/10;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
