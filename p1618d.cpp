#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    long long arr[n];
    long long g[2];
    for(int i=0;i<n;i++) cin>>arr[i];
    g[0] = arr[0]; g[1] = arr[1];
    for(int i=0;i<n;i++){
        g[i%2] = __gcd(g[i%2],arr[i]);
    }
    bool lst[2] = {true,true};
    for(int i=0;i<n;i++){
       if(lst[i%2]&&(arr[i]%g[(i%2)^1])==0){
          lst[i%2] = false;
       }
    }
    if(lst[0]||lst[1]){
        if(lst[0]){
            cout<<g[1]<<'\n';
        }
        else cout<<g[0]<<'\n';
    }
    else{
        cout<<"0\n";
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
