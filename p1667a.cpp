#include<bits/stdc++.h>
using namespace std;

int rec(int k)
{
    if(k==1)
        return 3;
    if(k%2==1)
    {
        return rec(k-2)+4;
    }
    else
    {
        return rec(k-1)+1;
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1&&m>2||m==1&&n>2)
            cout<<"-1\n";
        else
        {
            if(abs(n-m)<=1)
            {
                cout<<n+m-2<<endl;
            }
            else
            {
                long long sum = 2*(min(n,m)-1)+1;
                long long extra = 0;
                if((abs(n-m)-1)%2==0)
                    extra = 2*(abs(n-m)-1);
                else
                    extra = 2*(abs(n-m)-1)+1;
                cout<<sum+extra<<endl;
            }
        }
    }
}
