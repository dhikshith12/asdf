#include<bits/stdc++.h>
#include <functional>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void swap(int* a,int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void partition (int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int* narr = new int[high-low+1];
    for(int j = low; j<=high;j++)
    {
       if(arr[j]<=pivot){
           i++;
           narr[i] = arr[j];
       }
    }
    for(int k = low;k<=high;k++)
    {
        cout<<narr[k]<<' ';
    }
    cout<<endl;
}

void fun(ll tt)
{
    int n;
    cin>>n;
    int arr[n];
    int hi = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[hi]<arr[i])
            hi=i;
    }
    if(arr[hi]==arr[n-1]) {
        cout<<'0'<<endl;
        return;
    }
    int t = 0;
    int hit = arr[hi];
    while(arr[n-1]!=hit)
    {
        partition(arr,0,n-1);
        t++;
    }
    cout<<t<<endl;
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
