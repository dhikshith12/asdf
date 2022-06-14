#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;  cin>>n;
    int arr[n];
    int l = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<arr[l]) l=i;
    }
    if(arr[l]==arr[l+1]&&arr[l]==arr[l+2]||l==n-1)
        cout<<arr[l];
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
