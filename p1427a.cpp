#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int  a[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum==0) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        if(sum<0){
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        }
        else
        {
            sort(a,a+n,std::greater<int>());
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
