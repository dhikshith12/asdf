#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    string s;
    cin>>s;
    int l = s.length();
    if(l%2){
       cout<<"NO\n";
    }
    else{
        if(s.substr(0,l/2)==s.substr((l/2),l/2)){
            cout<<"YES\n";

        }
        else{
            cout<<"NO\n";
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
