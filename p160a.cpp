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
    long sum=0;
    for(int i=0;i<n;i++) cin>>arr[i], sum+=arr[i];
    sort(arr,arr+n,greater<int>());
    int tsum = 0;
    for(int i=0;i<n;i++)
    {
        tsum+=arr[i];
        if(tsum>(sum-tsum)){
            cout<<(i+1)<<endl;
            return;
        }
    }

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
