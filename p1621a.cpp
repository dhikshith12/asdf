#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,k;
    cin>>n>>k;
    if(2*k>n+1&&n!=1) cout<<-1<<'\n';
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                if(i==j&&i%2==0&&k){k--;cout<<'R';}
                else cout<<'.';
            cout<<'\n';
        }
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
