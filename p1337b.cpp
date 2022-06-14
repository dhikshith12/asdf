#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,n,m;
    cin>>x>>n>>m;
    if(x<=m*10)
    {
        cout<<"YES\n";
        return;
    }

    while(x&&n)
    {
        x/=2;
        x+=10;
        n--;
    }

    if(x<=m*10)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
