#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll> m;
    ll a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bitset<100> vi;
    int c=-1;
    while(c!=vi.count()){
        c = vi.count();
        for(int i=0;i<n;i++){
           if(a[i]<=k&&!vi[i]){
              k+=b[i];
              vi[i] = 1;
           }
        }
    }

    cout<<k<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
