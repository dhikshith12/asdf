#include<bits/stdc++.h>

using namespace std;
const string res = "hello";
int main()
{
    string s; cin>>s;
    int n = s.length();
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==res[j])
            j++;
    }
    if(j==4)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

