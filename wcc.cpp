#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int x; cin>>x;
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0;i<14;i++)
    {
        switch(s[i]){
            case 'C':
                a+=2;
            break;
            case 'D':
                a++;b++;
            break;
            case 'N':
                b+=2;
            break;
        }
    }
    ll pa = a>b?60*x:40*x;
    if(a==b) pa = 55*x;
    cout<<pa<<endl;
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
