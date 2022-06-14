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
    int ndx[n];
    memset(ndx,0,n*sizeof(int));
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        while(arr[i]!=0){
            if(arr[i]<=n){
                if(!ndx[arr[i]-1]){
                    ndx[arr[i]-1]=1;
                    break;
                }
                else arr[i]/=2;
            }
            else{
                arr[i]/=2;
            }
        }
    }
    int t = 1;
    for(int i=0;i<n;i++) t&=ndx[i];
    t?cout<<"YES\n":cout<<"NO\n";
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
