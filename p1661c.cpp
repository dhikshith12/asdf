#include<bits/stdc++.h>
using namespace std;

const long long ULLMAX = 1e18;
bool check(long long v,long long req)
{
    long long eves = v/2;
    long long odds = v-eves;
    if(eves*2+odds>=req) return true;
    return false;
}

void solve()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx = *max_element(arr.begin(),arr.end());
    long long req = 0;
    for(int i=0;i<n;i++)
    {
        req += mx-arr[i];
    }
    long long start = 0;
    long long end = ULLMAX;
    while(start<=end)
    {
        long long mid = start + (end-start)/2;
        if(check(mid,req))
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    cout<<start<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
