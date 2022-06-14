#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    int count=0;
    bitset<2001> b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            b[i] = true;
    }
    int eves = b.count();
    for(int i=n-eves;i<n;i++)
    {
        count+=i;
    }
    for(int i=0;i<n;i++)
    {
        if(!b[i])
        {
            for(int j=i+1;j<n;j++)
            {
                if(!b[j])
                    count += (__gcd(arr[i],arr[j])>1);
            }
        }
    }

    cout<<count<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
