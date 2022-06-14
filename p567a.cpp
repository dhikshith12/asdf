#include<bits/stdc++.h>
using namespace std;
#define INF 1e9+5

int bs(int* arr,int start,int end,int key)
{
    int mid = start + (end-start)/2;
    if(key>arr[mid])
    {
        return bs(arr,mid+1,end,key);
    }
    else if(key<arr[mid])
    {
        return bs(arr,start,mid-1,key);
    }
    else if(key==arr[mid])
        return mid;
    return -1;
}

void solve()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int arcp[n];
    memcpy(arcp,arr,n*sizeof(int));
    sort(arcp,arcp+n);

    for(int i=0;i<n;i++)
    {
        int t = bs(arcp,0,n-1,arr[i]);
        int mn,mx;
        if(t==0){
            mn = arcp[t+1]-arcp[t];
            mx = arcp[n-1]-arcp[t];
        }
        else if(t==n-1){
            mn = arcp[t]-arcp[t-1];
            mx = arcp[t]-arcp[0];
        }
        else{
            mn = min(arcp[t]-arcp[t-1],arcp[t+1]-arcp[t]);
            mx = max(arcp[t]-arcp[0],arcp[n-1]-arcp[t]);
        }
        cout<<mn<<" "<<mx<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
