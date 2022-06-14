#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string s="";
    string cp = "989";
    if(n<=3)
    {
        s = cp;
        for(int i=0;i<(3-n);i++)
        {
            s.pop_back();
        }
    }
    else
    {
        int j=0;
        s = cp;
        for(int i=0;i<n-3;i++){
            s+=(j%10+'0');
            j++;
        }
    }
    cout<<s<<endl;
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
