#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    string bg[n-2];
    for(int i=0;i<n-2;i++) cin>>bg[i];
    int i = 1;
    for(;i<n-2;i++){
       if(bg[i][0]!=bg[i-1][1])
            break;
    }
    string res=bg[0];
    if(i==n-2){
        for(int j=1;j<n-2;j++)
            res+=bg[j][1];
        res+='a';
    }
    else{
       for(int j=1;j<i;j++)
          res+=bg[j][1];
       res+=bg[i][0];
       for(int j=i;j<n-2;j++)
          res+=bg[j][1];
    }
    cout<<res<<'\n';
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
