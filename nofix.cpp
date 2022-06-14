#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n; cin>>n;
    int arr[n+1];
    bitset<100001> eq;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i]>=i)
        {
            if(arr[i]==i) eq[1] = 1;
            else if(arr[i]-i<=n&&eq[arr[i]-i]){
               eq[arr[i]-i+1] = 1;
            }
        }
    }
    cout<<eq.count()<<endl;
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
