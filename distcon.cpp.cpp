#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int d; cin>>d;
    int d1 = d/2;
    int d2 = d-d1;
    if(d%2) cout<<"-1\n";
    else{
        cout<<d1<<" "<<"0"<<"\n";
        cout<<"0"<<" "<<d1<<"\n";
        cout<<"-"<<d1<<" "<<"0\n";
        cout<<"0 "<<"-"<<d1<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
