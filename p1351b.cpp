#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    if(a1==a2&&b1+b2==a1){
        cout<<"YES\n";
    }else if(b1==b2&&a1+a2==b1){
        cout<<"YES\n";
    }else if(a1==b2&&a2+b1==a1){
        cout<<"YES\n";
    }else if(a2==b1&&a1+b2==a2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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
