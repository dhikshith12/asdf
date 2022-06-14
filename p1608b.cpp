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
        int arr[n];
        for(int i=1;i<=n;i++)
            arr[i-1] = i;
        int s=0;
        if(b>a){
          for(int i = 1;;i+=2)
          {
              swap(arr[i-1],arr[i]);
              s++;
              if(s==b)
                  break;
          }
        }
        else if(b<a){
            for(int i=n-1;;i-=2)
            {
                swap(arr[i-1],arr[i]);
                s++;
                if(s==a)
                    break;
            }
        }
        else{
            if(a+b+2==n)
            {
                for(int i=1;;i+=2)
                {
                    swap(arr[i-1],arr[i]);
                    s++;
                    if(s==n/2)
                        break;
                }
            }
            else{
                for(int i=2;;i+=2){
                    swap(arr[i-1],arr[i]);
                    s++;
                    if(s==a)
                        break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
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
