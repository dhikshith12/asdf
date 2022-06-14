#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int arr[7];
    for(int i=0;i<7;i++) cin>>arr[i];
    int a = arr[6]-arr[5];
    int b = arr[6]-arr[4];
    int c = arr[6]-arr[3];
    if(a+b==arr[3]) cout<<a<<' '<<b<<' '<<c<<'\n';
    else cout<<a<<' '<<b<<' '<<arr[5]-b<<'\n';
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
