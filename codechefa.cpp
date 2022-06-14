#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    map<int,int> mx,my;
    int x,y,lx=0,ly=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(mx.find(x)==mx.end()){
           lx++;
           mx[x] = 1;
        }if(my.find(y)==my.end()){
           ly++;
           my[y] = 1;
        }
    }
    cout<<lx+ly<<'\n';
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
