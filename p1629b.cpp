#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int l,r,k;
    cin>>l>>r>>k;
    int no;
    if(l%2&&r%2) no = (r-l+1)/2 + 1;
    else no = (r-l+1)/2;
    if(l==1&&r==1){
        cout<<"NO\n";
        return;
    }
    if(l==r) cout<<"YES\n";
    else if(k>=(r-l)) cout<<"YES\n";
    else if(k>=no) cout<<"YES\n";
    else cout<<"NO\n";

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
