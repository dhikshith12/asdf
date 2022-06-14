#include<bits/stdc++.h>
#include <functional>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;


void fun(ll tt)
{
    int n;
    cin>>n;
    int arr[n];
    int hi = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[hi]<arr[i])
            hi=i;
    }
    int h = arr[n-1];
    int c = 0;
    for(int i=n-1;i>=0;i--)
    {
       if(arr[i]>h)
       {
           c++;
           h = arr[i];
       }
       if(h==arr[hi]) break;
    }
    cout<<c<<endl;
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
