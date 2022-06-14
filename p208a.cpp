#include<bits/stdc++.h>
using namespace std;
int main()
{
    const string dj = "WUB";
    string s; cin>>s;
    while(s.find(dj)!=string::npos)
        s.replace(s.find(dj),3," ");
    while(s[0]==' ')
        s.erase(s.begin());
    while(s[s.length()-1]==' ')
        s.erase(s.begin()+s.length()-1);
    cout<<s<<endl;

}
