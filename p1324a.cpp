#include<iostream>
using namespace std;

void solve()
{
    int n; cin>>n;
    int t; cin>>t;
    int p = (t%2);
    if(n==1){
        cout<<"YES\n";
        return;
    }
    bool res=true;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        if(t%2!=p)
        {
            res = false;
        }
    }
    res?cout<<"YES\n":cout<<"NO\n";
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
