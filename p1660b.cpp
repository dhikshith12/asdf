#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    priority_queue<int> maxh;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        maxh.push(t);
    }
    if(maxh.size()==1)
        maxh.push(0);
    int m1 = maxh.top();
    maxh.pop();
    int m2 = maxh.top();
    if(m1==m2||m1==m2+1)
    {
        cout<<"YES\n";
    }
    else
    {
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
