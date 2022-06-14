#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    int c2 = 0,c3 = 0;
    while(n%2==0&&n>1)
    {
        n/=2;
        c2++;
    }
    while(n%3==0&&n>1)
    {
        n/=3;
        c3++;
    }
    if(c3>=c2&&n==1)
    {
        cout<<2*(c3-c2)+c2<<endl;
        return;
    }
    cout<<"-1\n";
}

void
solve()
{
        int n; cin>>n;
        if(n==1){
            cout<<0<<endl;
            return;
        }
        else
        {
            primeFactors(n);
        }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
