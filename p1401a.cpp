#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k)
{
    if(n<k)
        return k-n;
    else
        return (n^k)%2;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
