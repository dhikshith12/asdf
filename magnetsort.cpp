#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n; cin>>n;
    int arr[n];
    bool nd[n];
    bool nda=true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0){
            nd[i]=arr[i-1]<=arr[i];
            nda=nda&&nd[i];
        }
    }
    string s; cin>>s;
    if(nda){
        cout<<"0\n";
        return;
    }
    int nna[n],nsa[n];
    int nn=0,ns=0;
    for(int i=0;i<n;i++){
       if(s[i]=='N') {
           nn++;
       }
       else if(s[i]=='S'){
           ns++;
       }
       nna[i]=nn;
       nsa[i]=ns;
    }
    if(nn==0||ns==0) {
        cout<<"-1\n";
        return;
    }
    if(s[0]!=s[n-1]){
        cout<<"1\n";
        return;
    }
    if(s[0]==s[n-1]){
       /* for(int i=0;i<n;i++){
            if(nd[i]==false){
               int k = s[i]=='N'?nsa[i]:nna[i];
               if(k>0){
                    cout<<"1\n";
                    return;
               }
            }
        }*/
        cout<<"2\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
