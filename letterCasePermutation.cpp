#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op)
{
    while(48<=ip[0]&&ip[0]<=57)
    {
        char i = *(ip.begin());
        ip.erase(ip.begin());
        op.push_back(i);
    }
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }

    string op1 = op,op2 = op;
    if(97<=ip[0]&&ip[0]<=122)
    {
        op1.push_back(ip[0]);
        op2.push_back(ip[0]-32);
    }
    else if(65<=ip[0]&&ip[0]<=90)
    {
        op1.push_back(ip[0]+32);
        op2.push_back(ip[0]);
    }
    ip.erase(ip.begin());

    solve(ip,op1);
    solve(ip,op2);

}

int main()
{
    string ip = "12abc3456";
    string op = "";
    solve(ip,op);
    return 0;
}
