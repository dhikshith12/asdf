#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    int arr[n];
    int h=0,l=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(h<arr[i]) h=arr[i];
        if(l>arr[i]) l=arr[i];
    }
    cout<<h-l<<'\n';

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
