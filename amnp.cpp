#include<bits/stdc++.h>
using namespace std;

void allocateMinPages(int pages[], int n, int m)
{
    vector<long long> preSumPages(n,0);
    preSumPages[0] = pages[0];
    cout<<preSumPages[0]<<" ";
    for(int i=1;i<n;i++){
        preSumPages[i] = preSumPages[i-1] + pages[i];
        cout<<preSumPages[i]<<" ";
    }
    cout<<endl;
    int lo = 0, hi = n-1;
    long long opt = preSumPages[hi]/m;
    int extra = preSumPages[hi]%m;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/m;
        if(preSumPages[mid]==opt)
            cout<<opt<<endl;
        else if(preSumPages[mid]<opt)
            lo = mid+1;
        else if(preSumPages[mid]>opt)
            hi = mid-1;
    }
    long long l = abs(opt-preSumPages[lo]);
    long long r = abs(opt-preSumPages[hi]);
    cout<<preSumPages[lo]<<" "<<preSumPages[hi]<<" "<<extra<<endl;
}

int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    cout<<"minimum of maximum pages allocation for "<<m<<" students is "<<endl;
    allocateMinPages(arr,size,m);
    return 0;
}
