#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n];
    long long pre[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0) pre[0] = a[0];
        if(i>=1) pre[i]=pre[i-1]+a[i];
    }
    //for(int i=0;i<n;i++) cout<<pre[i]<<" ";
    for(int i=0;i<n;i++)
    {
        if(pre[i]<i*(i+1)/2){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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
}
