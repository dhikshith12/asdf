#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    if(v[0]<v[1]||v[n-1]>v[n-2])
    {
        cout<<"-1\n";
        return;
    }
    vector<int> c={0};
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1])
            c.push_back(i);
    }
    for(int i=1;i<c.size();i++){
        if(c[i]==c[i-1]+1){
            cout<<"-1\n";
            return;
        }
    }
    c.push_back(n);
    if(c.size()==2){
        cout<<n<<" ";
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    vector<int> p;
    for(int i =1;i<c.size();i++){
        for(int j=c[i-1];j<c[i];j++){
            p.push_back(j);
        }
        if((c[i]-c[i-1])%2){
            for(int j=c[i-1];j<c[i]-1;j++){
                swap(p[j],p[j+1]);
            }
        }
        else{
            sort(p.begin()+c[i-1],p.begin()+c[i],greater<int>());
        }
    }
    for(int i=0;i<n;i++){
        cout<<p[i]+1<<" ";
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
}