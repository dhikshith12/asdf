#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n; cin>>n;
    string s; cin>>s;
    bool x = s[0]^s[n-1];
    int cp=0;
    for(int i=0;i<n;i++) if(s[i]=='1')cp++;
    int cn = n - cp;
    if(n%2) {
        cout<<"YES\n";
        return;
    }
    if(n%2==0&&cp==cn){
        cout<<"YES\n";
        return;
    }
    if(n%2==0&&cp%2==0&&cn%2==0){
        cout<<"YES\n";
        return;
    }
    if(n%2==0&&cp%2&&cn%2&&cp!=cn){
        cout<<"NO\n";
        return;
    }
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
