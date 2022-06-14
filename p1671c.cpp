#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,x; 
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long long pre[n+1];
    pre[0] = 0;
    for(int i=1;i<=n;i++) pre[i] = pre[i-1]+a[i-1];
    int prevk = 0;
    long long sum = 0;
    for(int i=n;i>=1;i--)
    {
        if(x<pre[i]) continue;
        int k = (x-pre[i])/i;
        sum += i*(k+1-prevk);
        prevk = k+1;
    }
    cout<<sum<<"\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}