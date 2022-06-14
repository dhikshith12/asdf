#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        string s; cin>>s;
        int ones = 0,p1f = n, p1l = -1;
        for(int p=0;p<n;p++){
            if(s[p]!='1')
                continue;
            ones++;
            if(p1f == n)
                p1f = p;
            p1l = p;
        }
        int add = 0;
        if(ones>0&&(n-1-p1l)<=k){
            k-=(n-1-p1l);
            add++;
            ones--;
        }
        if(ones>0&&p1f<=k){
            k-=p1f;
            add+=10;
            ones--;
        }
        cout<<11*ones+add<<"\n";
    }
}