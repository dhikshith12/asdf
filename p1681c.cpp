#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr,vector<int>& b,vector<pair<int,int>>& vp)
{
    int i, j, n=arr.size();
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swap(b[j],b[j+1]);
                vp.push_back({j+1,j+2});
            }
        }
    }
}

void solve()
{
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<int,int>> c(n,pair<int,int>()),c1(n,pair<int,int>());
    for(int i=0;i<n;i++)
    {
        c[i] = make_pair(a[i],b[i]);
        c1[i] = make_pair(b[i],a[i]);
    }
    sort(c.begin(),c.end());
    sort(c1.begin(),c1.end());
    for(int i=0;i<n-1;i++)
    {
        if(c[i].second>c[i+1].second)
        {
            cout<<"-1\n";
            return;
        }
        if(c1[i].second>c1[i+1].second)
        {
            cout<<"-1\n";
            return;
        }
    }
    vector<int>ac = a, bc= b;
    vector<pair<int,int>>vp;
    bubbleSort(a,b,vp);
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]&&b[i]>b[i+1]){
            swap(b[i],b[i+1]);
            vp.push_back({i+1,i+2});
        }
    }
    if(is_sorted(b.begin(),b.end())){
        cout<<vp.size()<<"\n";
        for(int i=0;i<vp.size();i++)
            cout<<vp[i].first<<" "<<vp[i].second<<"\n";
        return;
    }
    vp.clear();
    bubbleSort(bc,ac,vp);
    for(int i=0;i<n-1;i++)
    {
        if(ac[i]==ac[i+1]&&bc[i]>bc[i+1]){
            swap(bc[i],bc[i+1]);
            vp.push_back({i+1,i+2});
        }
    }
    if(is_sorted(bc.begin(),bc.end())){
        cout<<vp.size()<<"\n";
        for(int i=0;i<vp.size();i++)
            cout<<vp[i].first<<" "<<vp[i].second<<"\n";
        return;
    }
    cout<<"-1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}