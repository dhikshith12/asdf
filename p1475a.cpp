#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        unsigned long long n; cin>>n;
        int lg = log2(n);
        if((unsigned long long)pow(2,lg) == n)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}
