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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int lb = 0,lw = 0,mxb = 0,mxw = 0,cnt = 0;
    ll prew[n];
    prew[0] = (s[0]=='W');
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='B')
        {
            lb++;
            cnt++;
        }
        if(s[i]=='W')
        {
            lw++;
            mxb = max(mxb, lb);
            lb = 0;
        }
        if(i>0) prew[i] = prew[i-1] + (s[i]=='W'); 
    }
    if(k==n){
        cout<<n-cnt<<"\n";
        return;
    }
    if(mxb>=k){
        cout<<"0\n";
        return;
    }
    else
    {
        ll mnw  = inf;
        for(int i=k-1;i<n;i++)
        {
            mnw = min(mnw,prew[i]-(i>=k?prew[i-k]:0));
        }
        cout<<mnw<<"\n";
    }
    
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