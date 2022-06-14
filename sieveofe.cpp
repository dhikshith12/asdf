#include<bits/stdc++.h>
using namespace std;
const string az = "bcdfghjklmnpqrstvwxz";
unordered_set<char> us;
void r()
{

    string s; cin>>s;
    string out="";
    for(int i=0;i<s.length();i++)
    {
        if(us.find(s[i])!=us.end()){
            out+='.';
            out+=s[i];
        }
        else if(us.find(s[i]+0x20)!=us.end()){
            out+='.';
            out+=s[i]+0x20;
        }
    }
    cout<<out<<endl;
}

int main()
{
    for(int i=0;i<az.length();i++)
    {
        us.insert(az[i]);
    }
    r();
    return 0;
}
