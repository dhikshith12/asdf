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
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<tuple<int,int,int>> res;
    for(int i=0;i<n;i++){
        int mn = 1111111111,mn2 = 0;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn = arr[j];
                mn2 = j;
            }
        }
        if(i!=mn2){
            res.pb({i+1,mn2+1,mn2-i});
            for(int k=mn2;k>i;k--)
            {
                swap(arr[k],arr[k-1]);
            }
        }
    }
    cout<<res.size()<<'\n';
    for(auto [i,j,k]: res){
        cout<<i<<' '<<j<<' '<<k<<'\n';
    }
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
