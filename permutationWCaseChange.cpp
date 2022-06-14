#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op)
{
    if(ip.size() == 0)
    {
        cout<<op<<endl;
        return;
    }

    string op1 = op,op2 = op;
    op1+=ip[0];
    op2+=(ip[0]-32);
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
}

int main()
{
    string ip = "abc";
    string op = " ";
    solve(ip,op);
    return 0;
}
