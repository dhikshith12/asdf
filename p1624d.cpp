#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<int> cnt(26);
    for(char c: s) {
        cnt[c - 'a']++;
    }
    int p=0,d=0;
    for(int c: cnt) {
        p += c/2;
        d += c%2;
    }
    int ans = 2*(p/k);
    d += 2*(p%k);
    if(d>=k) ans++;
    cout<<ans<<endl;
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
