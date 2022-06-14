#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int a,b,c;
    cin>>a>>b>>c;
    int avg = (a+c)/2;
    if((a+c)%2==0&&avg%b==0) cout<<"YES\n";
    else if((2*b-c)>a&&(2*b-c)%a==0) cout<<"YES\n";
    else if((2*b-a)>c&&(2*b-a)%c==0) cout<<"YES\n";
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
