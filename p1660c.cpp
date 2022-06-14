#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> f(26,0);
    vector<int> rMost(26,-1);
    string s; cin>>s;
    int tSum = 0;
    for(int i=0;i<s.length();i++)
    {
        f[s[i]-'a']++;
        rMost[s[i]-'a'] = i;
    }
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i-1]==s[rMost[s[i]-'a']]&&s[i]!=s[rMost[s[i]-'a']])
        {
            f[s[i]-'a']--;
            s.erase(s.begin()+i);
            tSum++;
        }
    }
    for(int i=0;i<26;i++)
    {
        tSum += f[i]%2;
    }

    cout<<tSum<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
