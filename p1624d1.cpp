#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int p=0,d=0;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        int j=i;
        while(j<n-1&&s[j]==s[j+1]) {
            j++;
        }
        d+=(j-i+1)%2;
        p+=(j-i+1)/2;
        i = j;
    }
    int out = 2*(p/k);
    d+=2*(p%k);
    if(d>=k) out++;
    cout<<out<<endl;
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
