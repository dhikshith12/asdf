#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
    int n; cin>>n;
    vector<int> a(n),c(n);
    int pos1 = -1,pos2 = -1;
    for(int i=0;i<n;i++)    
    {
        cin>>a[i];
        c[i] = a[i];
    }
    if(n==1){
        cout<<"-1\n";
        return;
    }
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++){
        if(c[i]==a[i]){
            if(i<n-1)
            {
                swap(c[i],c[i+1]);
            }else
            {
                swap(c[i],c[i-1]);
            }
        }
    }
    for(int i=0;i<n;i++)    cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    fast_io;
    int t; cin>>t;
    while(t--){
        solve();
    }
}