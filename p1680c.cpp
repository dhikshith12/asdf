#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

bool check(string s, int mid,vector<int> preo,int prez[])
{
    int mn = INF;
    int c = preo.size();
    int l=-1,r=-1;
    vector<pair<int,int>> ch;
    for(int i=0;i<c;i++)
    {
        if(i-mid-1>=0) break;
        if(preo[i+c-mid-1]-preo[i]<mn)
        {
            ch.clear();
            l = preo[i];
            r = preo[i+c-mid-1];
            mn = r-l;
            ch.push_back({l,r});
        }
        if(preo[i+c-mid-1]-preo[i]==mn)
        {
            l = preo[i];
            r = preo[i+c-mid-1];
            ch.push_back({l,r});
        }
    }
    bool flag = false;
    for(int i=0;i<ch.size();i++)
    {
        flag |= ((prez[ch[i].second]-((ch[i].first>0)?(prez[ch[i].first-1]):(s[0]=='0')))<=mid);
    }
    return flag;
}
void solve()
{
    string s; cin>>s;

    int n = s.length();
    vector<int> preo;
    int prez[n];
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            preo.push_back(i);
        prez[i] = (i>0?prez[i-1]:0)+(s[i]=='0'); 
    }
    int lo = 0, hi = preo.size();
    int ans = 0;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(check(s,mid,preo,prez))
        {
            hi = mid-1;
            ans = mid;
        }
        else
        {
            lo = mid+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}