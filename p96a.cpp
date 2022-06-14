#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    string s; cin>>s;
    int max_contig=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1]){
            max_contig++;
            if(max_contig==7)
            {
                cout<<"YES\n";
                return;
            }
        }
        else
        {
            max_contig=1;
        }
    }
    cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
