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


void initcode()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #else
        #define debug(x)
    #endif
}


void solve()
{
    int n; cin>>n;
    int a[n];
    bool one = false,zero = false,con = false,same=true;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]==1) one = true;
        else if(a[i]==0) zero = true;

        if(i>0)
            same&=(a[i]==a[i-1]);
    }
    if(same)
    {
        cout<<"YES\n";
        return;
    }
    if(one&&zero)
    {
        cout<<"NO\n";
        return;
    }
    if(!one)
    {
        cout<<"YES\n";
        return;
    }
    if(one)
    {
        sort(a,a+n);
        bool con = false;
        for(int i=0;i<n;i++){
            if(abs(a[i]-a[i+1])==1)
            {
                con = true;
                break;
            }
        }
        if(con)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
    }
}

int main()
{
    initcode();
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}