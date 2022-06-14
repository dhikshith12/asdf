#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;


void solve()
{
    int n,k; 
    cin>>n>>k;
    int a[n];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i]/k;
        a[i] = a[i]%k;
    }
    sort(a,a+n);
    int i = n-1, j = 0;
    while(i>j){
        if(a[i]+a[j]>=k)
        {
            sum++;
            j++;
            i--;
        } 
        else
        {
            j++;
        }
        
    }
    cout<<sum<<"\n";
}
int main()
{
    fast_io;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}