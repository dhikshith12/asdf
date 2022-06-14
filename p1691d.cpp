#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
void solve()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    long long pre[n];
    int mxr[n];
    for(int i=0;i<n;i++)
    {
        pre[i] = (i>0?(pre[i-1]):0)+a[i];
        mxr[i] = a[i]>(i>0?mxr[i-1]:-INF)?a[i]:mxr[i-1];
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}