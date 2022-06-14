#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
        string s;
        cin>>n;
        cin>>s;
        int i=0;
        while(i<n&&s[i]>s[i+1]){
            i++;
        }
        string ret = s.substr(0,i+1);
        for(int j=i;j>=0;j--){
            ret += ret[j];
        }
        cout<<ret<<'\n';
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
