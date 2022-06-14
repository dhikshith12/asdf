#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    int sum = 0;
    int i = 0;
    if(n==1)
    {
        cout<<__builtin_popcount(k)<<"\n";
        return;
    }
    while(k){
        int d = pow(2,i);
        if(k/d == 0){
            if(k>=1)
            {
                sum+=__builtin_popcount(k);
                if(k%2) sum--;
                sum--;
            }
            break;
        }
        sum+=min(n,k/d)*__builtin_popcount(d);
        k-=min(n,k/d)*d;
        i = 1;
    }
    cout<<sum<<"\n";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}