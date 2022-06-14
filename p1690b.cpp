#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prdbl(x) cout<< fixed << setprecision(10) << x
#define goog(tno) cout<< "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin>>x
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;


void solve()
{
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mxd = 0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        mxd = max(mxd, a[i]-b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]!=max(a[i]-mxd,0))
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    fast_io;
    read(t);
    while(t--)
    {
        solve();
    }
}