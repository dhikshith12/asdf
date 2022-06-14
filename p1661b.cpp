#include<bits/stdc++.h>
using namespace std;

const int target = 1<<15;

int convert(string s,int in)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0') in++;
        else if(s[i]=='1') in = 2*in;
    }
    return in;
}
bool check(string ip, int pos_sol,int n)
{
    if(pos_sol==0)
    {
        if(convert(ip,n)%target==0)
        {
            return true;
        }
        return false;
    }
    if(pos_sol<0) return false;
    string ip1 = ip,ip2 = ip;
    ip1+='0';
    ip2+='1';
    return check(ip1,pos_sol-1,n)||
    check(ip2,pos_sol-1,n);
}

void solve()
{
    int n; cin>>n;
    string ip = "";
    int sol = 15;
    while(check(ip,sol,n))
    {
        sol--;
    }
    cout<<sol+1<<" ";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
