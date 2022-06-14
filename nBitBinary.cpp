#include<bits/stdc++.h>
using namespace std;

void solve(int c0,int c1,int n,string op)
{
    if(c0+c1==n)
    {
        cout<<op<<endl;
        return;
    }
    if(c1==c0)
    {
        c1++;
        op.push_back('1');
        solve(c0,c1,n,op);
        return;
    }
    string opl = op,opr=op;
    int c0l = c0,c0r = c0;
    int c1l = c1,c1r = c1;
    c1l++;
    opl.push_back('1');
    solve(c0l,c1l,n,opl);
    c0r++;
    opr.push_back('0');
    solve(c0r,c1r,n,opr);
    return;
}

int main()
{
    int n = 5;
    int c0 = 0,c1 = 0;
    string op = "";
    solve(c0,c1,n,op);

}
