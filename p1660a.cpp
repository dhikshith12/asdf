#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int a,b; cin>>a>>b;
    if(a==0){
        cout<<"1\n";
        return;
    }
    if(b==0)
    {
        cout<<a+1<<endl;
        return;
    }
    cout<<2*(b)+a+1<<endl;
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
