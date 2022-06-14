#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int> ca(3,0),cb(3,0);
    unordered_map<char,char> swp;
    swp['a']='b';
    swp['b']='c';
    bool f = true;
    vector<int> as,bs,cs;
    for(int i=0;i<n;i++){
        ca[a[i]-'a']++;
        cb[b[i]-'a']++;
        f&=(a[i]==b[i]);
        if(b[i]=='a')   as.push_back(i);
        if(b[i]=='b')   bs.push_back(i);
        if(b[i]=='c')   cs.push_back(i);
    }
    if(f){
        cout<<"YES\n";
        return;
    }
    for(int i=0;i<3;i++){
        if(ca[i]!=cb[i]){
            cout<<"NO\n";
            return;
        }
    }
    int per[n];
    auto ai = as.begin(),bi = bs.begin(),ci = cs.begin();
    for(int i=0;i<n;i++){
        if(a[i]==b[i])  per[i] = i;
        else
        {
            if(a[i]=='a'){
                per[i] = *ai;
                ai++;
            }
            if(a[i]=='b'){
                per[i]=*bi;
                bi++;
            }   
            if(a[i]=='c'){
                per[i]==*ci;
                ci++;
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
}