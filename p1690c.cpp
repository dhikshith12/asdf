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
    int s[n],f[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>f[i];
    int d[n];
    d[0] = f[0] - s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]<f[i-1])
        {
            d[i] = f[i]-f[i-1];
        }
        else
        {
            d[i] = f[i]-s[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    read(t);
    while(t--)
    {
        solve();
    }
}