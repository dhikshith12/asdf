#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

void solve()
{
    int n; cin>>n;
    int b[n];
    for(int i=0;i<n;i++)    cin>>b[i];
    int mna = mod, mxa = -1;
    for(int i=0;i<n;i++)
    {
        if(i>0&&b[i]>mna&&b[i]<mxa)
        {
            cout<<"NO\n";
            return;
        }
        if(mxa<b[i])
        {
            mxa = b[i];
        }
        if(mna>b[i])
        {
            mna = b[i];
        }
    }
    cout<<"YES\n";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}