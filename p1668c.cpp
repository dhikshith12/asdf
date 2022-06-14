#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long tSum=LONG_LONG_MAX;
    for(int i=0;i<n;i++)
    {
        long long sum = 0;
        long long b[n];
        memset(b,0,n*sizeof(long long));
        for(int j=i+1;j<n;j++)
        {

            if(j>0&&a[j]>b[j-1]){
                sum++;
                b[j] = a[j];
                continue;
            }
            else if(j>0&&a[j]<=b[j-1])
            {
                // b[j]+k*a[j]>b[j-1]
                // k*a[j]>b[j-1]-b[j]
                // k>(b[j-1]-b[j])/a[j]
                unsigned long long k =floor((b[j-1]-b[j])/(double)a[j])+1;
                b[j]+=k*a[j];
                sum+=k;
                // while(b[j]<=b[j-1])
                // {
                //     b[j]+=a[j];
                //     sum++;
                // }
            }
        }
        for(int j=i-1;j>=0;j--)
        {
            if(j<n-1&&a[j]<b[j+1]){
                sum++;
                b[j] = a[j];
                continue;
            }
            else if(j<n-1&&a[j]>=b[j+1])
            {
                // b[j]-k*a[j]<b[j+1]
                // b[j]-b[j+1]<k*a[j]
                // k>(b[j]-b[j+1])/a[j]
                unsigned long long k =floor((b[j]-b[j+1])/(double)a[j])+1;
                b[j]-=k*a[j];
                sum+=k;
                // while(b[j]>=b[j+1])
                // {
                //     b[j]-=a[j];
                //     sum++;
                // }
            }
        }
        tSum=min(sum,tSum);
    }
    cout<<tSum<<endl;
}
