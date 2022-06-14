#include<bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long n,k; cin>>n>>k;
    unsigned long long count = 0;
    while(n!=0)
    {
        if(n%k==0){
            n/=k;
            count++;
        }
        else {
            count+=n%k;
            n-=n%k;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
