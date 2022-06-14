#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    ll a,s;
    cin>>a>>s;
    int al = ceil(log10(a));
    int sl = ceil(log10(s));
    int maxl = max(al,sl);
    stack<char> b;
    int i=1,j=1;
    while(i<al&&j<sl){
        int ai = a%((int)pow(10,i));
        int si = s%((int)pow(10,j));
        if (ai>=si){
            si = (int)pow(10,i+1)*(s%((int)pow(10,i+1)))+(int)pow(10,i)*(s%(int)pow(10,i));
            if(ceil(log10(si-ai))==1){
                int sa = si-ai;
                b.push(sa+'0');
            }
            else{
                cout<<"-1\n";
                break;
            }
        }
        else{
            int sa = si-ai;
            b.push(sa+'0');
        }
        i++;j++;
    }
    string str="";
    while(!b.empty()){
      str+=b.top();
      b.pop();
    }
    cout<<str<<'\n';
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
