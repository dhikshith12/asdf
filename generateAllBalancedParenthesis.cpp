#include<bits/stdc++.h>
using namespace std;

const char leftp = '(';
const char rightp = ')';

vector<string> sol;
void solve(int lr,int rr,string op)
{
    if(lr==0&&rr==0)
    {
        sol.push_back(op);
        return;
    }
    if(lr==rr)
    {
        lr--;
        op.push_back(leftp);
        solve(lr,rr,op);
        return;
    }
    if(lr==0)
    {
        rr--;
        op.push_back(rightp);
        solve(lr,rr,op);
        return;
    }
    if(rr==0)
    {
        lr--;
        op.push_back(leftp);
        solve(lr,rr,op);
        return;
    }
    string op1 = op;
    string op2 = op;
    int lr1=lr,lr2=lr,rr1=rr,rr2=rr;
    lr1--;op1.push_back(leftp);
    solve(lr1,rr1,op1);
    rr2--;op2.push_back(rightp);
    solve(lr2,rr2,op2);
    return;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int lr = n,rr = n;
        string op = "";
        solve(lr,rr,op);
        for(string x: sol)
            cout<<x<<endl;
        sol.clear();
    }
}
