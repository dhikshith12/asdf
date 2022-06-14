#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n,k;
    cin>>n>>k;
    int parr[n];
    int narr[n];
    int t,m=0,l=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t>0)
            parr[m++]=t;
        else   narr[l++]=t;
    }
    sort(parr,parr+m);
    sort(narr,narr+l,greater<int>());
    long long md = 0;
    int i = k-1;
    int j = k-1;
    if(abs(narr[l-1])>parr[m-1]){
        while(i<m)
        {
            md+=2*parr[i];
            if(i==m-1) break;
            if(i+k>=m) i=m-1;
            else i+=k;
        }
        while(j<l){
            md+=2*abs(narr[j]);
            if(j==l-1) break;
            if(j+k>=l) j=l-1;
            else j+=k;
        }
        if(l>0)
            md-=abs(narr[l-1]);
        else
            md-=parr[m-1];
    }
    else{
        while(i<m)
        {
            md+=2*parr[i];
            if(i==m-1) break;
            if(i+k>=m) i=m-1;
            else i+=k;
        }
        while(j<l){
            md+=2*abs(narr[j]);
            if(j==l-1) break;
            if(j+k>=l) j=l-1;
            else j+=k;
        }
        if(m>0)
            md-=parr[m-1];
        else
            md-=abs(narr[l-1]);
    }
    cout<<md<<endl;
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
