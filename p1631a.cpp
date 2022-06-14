#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n;
    cin>>n;
    int a[n],b[n];
    int ma = 0,mai=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(ma<=a[i]){
            ma = a[i];
            mai = i;
        }
    }
    int mb = 0,mbi = 0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(mb<=b[i]){
            mb = b[i];
            mbi = i;
        }
    }
    if(ma>mb&&mai!=mbi){
        return;
    }
    if(ma==mb&&mai!=mbi){
        cout<<ma*min(a[mbi],b[mai])<<endl;
        return;
    }
    if(mai==mbi){
        cout<<ma*mb<<endl;
        return;
    }
    if(mb>ma&&mai!=mbi){

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
