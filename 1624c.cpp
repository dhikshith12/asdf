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
    int ind[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        ind[i] = 0;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
    cout<<'\n';
    for(int i=0;i<n;i++){
        while(arr[i]!=0){
            if(arr[i]<=n) ind[arr[i]-1]=1;
            else{
                arr[i]=1>>arr[i];
            }
        }
    }
    int i=0;
    for(;i<n;i++){
       if(!ind[i]) {
           cout<<"NO\n";
           return;
       }
    }
    cout<<"YES\n";
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
