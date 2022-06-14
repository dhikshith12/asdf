#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        bool b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mn = n-1-a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            mn = min(i-a[i],mn);
            b[i] = i>mn;
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }

}
