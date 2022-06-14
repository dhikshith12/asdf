#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        if(i==0) arr[i] = t;
        else{
            arr[i]=t;
            arr[i]+=arr[i-1];
        }
    }
    ll mx = arr[n-1];
    ll ta = mx;
    for(int i=0;i<n;i++){
       ta = min(ta,max(arr[i],mx-arr[i]));
    }
    cout<<ta<<endl;
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
