#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

int getSortedIdx(int arr[],int n,int idx)
{
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[idx])
            res++;
        if(arr[i]==arr[idx]&&i<idx)
            res++;
    }
    return res;
}

void fun(ll tt)
{
    int n; cin>>n;
    int a[n];
    int b[32];
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<8*(int)sizeof(int);++j){
            if(a[i]&(1<<j)){
                b[j]++;
            }
        }
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
