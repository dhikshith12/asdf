#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    long long total = 0;
    int negs = 0,zeroes=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0) total+=arr[i]-1;
        else if(arr[i]<0)
        {
            total+= -1-arr[i];
            negs++;
        }
        else {
            total++;
            zeroes++;
        }
    }
    if(negs%2&&zeroes==0)
        cout<<total+2<<endl;
    else
        cout<<total<<endl;
}

int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}
