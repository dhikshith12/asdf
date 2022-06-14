#include<bits/stdc++.h>
using namespace std;

unordered_set<string> s;
void solve(string ip,string op)
{
    if(ip.size()==0)
    {
        if(s.find(op)==s.end())
            s.insert(op);
        return;
    }
    string op1=op;
    string op2=op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
    return; 
}

int main()
{
    string ip = "abc";
    string op = " ";
    solve(ip,op);
    unordered_set<string>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<(*i)<<endl;
    }
    return 0;
}
