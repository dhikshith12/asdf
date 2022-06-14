#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void swap(int* a,int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void fun(ll tt)
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b<=n-2&&abs(a-b)<=1)
    {
        int i = 1;
        if(b>a){
            i++;
            while(i<=n)
            {
                cout<<i<<' ';
                if(i%2==1&&b>0)
                {
                    b--;
                    i--;
                }
                i++;
            }
        }
        else if(b<a)
        {
            while(i<=n)
            {
                cout<<i<<' ';
                if(i%2==0&&b>0)
                {
                    b--;
                    i--;
                }
                i++;
            }
        }
        else{
            if(a==b){
                while(i<=n)
                {
                    cout<<i<<' ';
                    if(i%2==0&&b>0)
                    {
                         b--;
                         i--;
                    }
                }
            }
            while(i<=n)
            {
                cout<<i<<' ';
                if(i%2==0&&b>0)
                {
                    b--;
                    i--;
                }
                i++;
            }
        }
        cout<<'\n';
    }
    else
        cout<<-1<<endl;
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
