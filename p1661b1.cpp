#include<bits/stdc++.h>
using namespace std;
const unsigned long long target = 1<<15;
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        unsigned long long count = 0;
        unsigned long long ct = t;
        if(ct%2)
        {
            ct++;
            count++;
        }

        while(ct%target)
        {
            ct*=2;
            count++;
        }
        int out = min(count,target-t);
        int j = 1;
        int k = 0;
        int out1 = INT_MAX;
        while(j<t){
            j*=2;
            k++;
        }
        out1 = min(j-t+15-k,out1);
        if(ct%target==0)
        {
            out=min(out1,out);
            cout<<out<<" ";
        }
        else
        {
            count--;
            ct = ct/2;
            int out2 = min(count-1+(target-ct),(unsigned long long)target-t);
            out2 = min(out1,out2);
            cout<<out2<<" ";
        }
    }
    cout<<"\n";
}

