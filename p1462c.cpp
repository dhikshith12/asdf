#include<bits/stdc++.h>
using namespace std;


string rSolve(int n,int ans,int size,string str)
{
    if(size==0){
        if(ans==n){
            return str;
        }
        else
            return "-1";
    }
    bitset<10> b;
    for(int i=0;i<str.size();i++)
    {
        b[str[i]-'0']=true;
    }
    for(int i=1;i<10;i++)
    {
        if(!b[i]){
            string strcp = str;
            strcp.push_back(i+'0');
            string res = rSolve(n,ans+i,size-1,strcp);
            if(res!="-1")
                return res;
        }
    }
    return "-1";
}

string solve(int n)
{
    if(n>45) return "-1";
    for(int size=1;size<=10;size++)
    {
        int maxDigSum = 0;
        int minDigSum = 0;
        for(int i=9;i>=9-size+1;i--)
        {
            maxDigSum+=i;
            minDigSum+=(9-i+1);
        }
        string str="";
        if(minDigSum<=n&&n<=maxDigSum)
        {
            return rSolve(n,0,size,str);
        }
    }
    return "-1";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
