#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n; cin>>n;
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    string c("",2*n);
    string::iterator ait=a.begin(),bit=b.begin();
    int i=0,j=2*n-1,count=0;
    int ai=0,aj=n-1,bi=0,bj=n-1;
    while(count<2*n){
        count++;
        if(count%2){
            if(*ait>*bit){
                c[j--]=a[aj--];
            }
            else{
                c[i++]=*ait;
                ait++;ai++;
            }
        }
        else{
           if(*bit<*ait){
               c[j--]=b[bj--];
           }
           else{
               c[i++]=*bit;
               bit++;
           }
        }
    }
    cout<<c<<'\n';
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
