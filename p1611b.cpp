#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
            cout<<a/2<<endl;
        else
        {
            int mab = min(a,b);
            int t = (a+b)/4;
            cout<<min(mab,t)<<endl;
        }
    }
}
