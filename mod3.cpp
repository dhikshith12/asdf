#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int ma = a%3,mb = b%3;
    if(a%3==0||b%3==0){
        cout<<"0\n";
        return;
    }
    else if(ma==mb)
    {
        cout<<"1\n";
    }
    else{
        cout<<"2\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}