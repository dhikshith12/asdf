#include<bits/stdc++.h>
using namespace std;


void solve()
{
     int n; cin>>n;
     int arr[n];
     map<int,int> umap;
     int maxRep = 1;
     for(int i=0;i<n;i++){
         cin>>arr[i];
         umap[arr[i]]++;
         maxRep = max(maxRep,umap[arr[i]]);
     }

     int k = maxRep;
     int totalOps=0;
     int same = k;
     while(same<n)
     {
         if(same<n&&same+k>n){
             totalOps+=1+(n-same);
             break;
         }
         same+=k;
         totalOps+=1+k;
         k*=2;
         if(same<n&&same+k>n){
             totalOps+=1+(n-same);
             break;
         }
     }
    cout<<totalOps<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
