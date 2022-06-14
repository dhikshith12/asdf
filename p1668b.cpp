#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=2*a[i]+1;
        }
        sort(a,a+n);
        long long mo = 0;
        for(int i=0;i<n-1;i++)
        {
            mo+=min(a[i],a[i+1]);
        }
        mo+=min(a[0],a[n-1]);
        if(sum-mo<=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
