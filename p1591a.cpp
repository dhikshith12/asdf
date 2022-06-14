#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    int prev=0;
    int h = 1;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(h!=-1){
        if(i>0&&prev&&t)
        {
            h+=5;
        }
        else if(t) h++;
        else if(i>0&&!prev&&!t)
        {
            h = -1;
        }
        prev = t;
        }
    }
    cout<<h<<endl;
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
