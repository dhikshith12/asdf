#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    unsigned long long usum=0;
    for(int i=0;i<n-1;i++)
    {
        usum+=min(abs(a[i]-a[i+1])+abs(b[i]-b[i+1]),abs(b[i]-a[i+1])+abs(a[i]-b[i+1]));
    }
    cout<<usum<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
