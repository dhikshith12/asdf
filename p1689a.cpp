#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string a,b,c;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i = 0,j=0;
        int ci = 0, cj = 0;
        while(i<n&&j<m){
            if(cj==k||(ci<k&&a[i]<b[j])){
                c+=a[i];
                i++;
                ci++;
                cj=0;
            }
            if(i==n)    break;
            if(ci==k||(cj<k&&b[j]<a[i]))
            {
                c+=b[j];
                j++;
                cj++;
                ci=0;
            }
            if(j==m)    break;
        }
        cout<<c<<"\n";
    }
}